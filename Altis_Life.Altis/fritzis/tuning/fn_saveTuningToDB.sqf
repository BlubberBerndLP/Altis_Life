scriptName "fn_saveTuningToDB";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: fn_saveTuningToDB.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "fn_saveTuningToDB.sqf"

_vehicle = param[0,objNull,[objNull]];
_data = param[1,[],[[]]];
if (isNull _vehicle) exitWith {};
if (!isServer) exitWith {};
if (count _data == 0) exitWith {};
_dataString = [true,str _data] call mav_tuning_fnc_tuning_prepareString;

_query = "";
if (!isNil {_vehicle getVariable "vehicleID"}) then {
	_query = format["UPDATE vehicles SET tuning_data='%2' WHERE id='%1';",_vehicle getVariable ["vehicleID", -1], _dataString];
} else {
	_vInfo = _vehicle getVariable ["dbInfo",[]];
	_plate = _vInfo select 1;
	_uid = _vInfo select 0;
	
	_query = format["UPDATE vehicles SET tuning_data='%2' WHERE pid='%1' AND plate='%3';", _uid, _dataString, _plate];
};
[_query,1] call DB_fnc_asyncCall;