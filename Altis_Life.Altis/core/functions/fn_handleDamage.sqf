#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private ["_distance"];
                    _distance = 35;
                    if (_projectile == "B_556x45_dual") then {_distance = 100;};
                    if (_unit distance _source < _distance) then {
                        if (vehicle player != player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };
    };
};

if (vehicle _unit == _unit) then {
	if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat" ) then {
		diag_log "The source is a vehicle, but not a player driving a vehicle";
	} else {		
		_isVehicle = vehicle _source;
		if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat") then {
			_damage = 0;
			hint "VDM does not kill you!";
			[[player,"amovppnemstpsraswrfldnon"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
		};
	};
};

if(((player distance (getMarkerPos "safezone_kav") < 400) || 
	(player distance (getMarkerPos "safezone_5") < 400) || 
	(player distance (getMarkerPos "safezone_3") < 400) || 
	(player distance (getMarkerPos "safezone_4") < 400)) && side _source == civilian && playerSide == civilian) then 
{
	_damage = false;
	_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
};

if((player distance (getMarkerPos "safezone_2") < 25) && playerSide == west) then 
{
	_damage = false;
};

if(((player distance (getMarkerPos "safezone_kav") < 400) || 
	(player distance (getMarkerPos "safezone_5") < 400) || 
	(player distance (getMarkerPos "safezone_3") < 400) || 
	(player distance (getMarkerPos "safezone_4") < 400)) && _isVehicle && side _source == civilian && playerSide == civilian) then {
	
	vehicle player allowDamage false;
	vehicle player setFuel 1;
	vehicle player setDamage 0;
	_damage = false;
};

[] spawn life_fnc_hudUpdate;
_damage;