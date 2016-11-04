private _wasInside = false;
private _airWarnings = 0;

while { true } do {

    private _inside = false;
    {
        private _pos = getMarkerPos _x;
        private _size = getMarkerSize _x;
        _size = (_size select 0) min (_size select 1);

        if( (player distance2D _pos) <= _size ) exitWith {
            _inside = true;
        };
    } forEach XY_SAFEZONES;
    XY_IN_SAFEZONE = _inside;

    if( XY_IN_SAFEZONE && !_wasInside ) then {
        hint parseText "<t color='#FF0000' size ='2.25' align='center'>Absolute Safezone</t><br/><t color='#00BB00' align='center' size='1.1'>ALLE illegalen Aktivit�ten sind zu unterlassen!</t>";
        player allowDamage false;
    };
    if( !XY_IN_SAFEZONE && _wasInside ) then {
        hint "ACHTUNG: Du hast die Safezone verlassen";
        player allowDamage true;
    };
    _wasInside = XY_IN_SAFEZONE;

    private _vehicle = vehicle player;
    if( XY_IN_SAFEZONE && { playerSide isEqualTo civilian } && { _vehicle != player } && { local _vehicle } && { isEngineOn _vehicle } && { _vehicle isKindOf "Air" } && { (serverTime - (_vehicle getVariable["spawnTime", 0])) > 90 } && { (((getPosATL _vehicle) select 2) < 290 || speed _vehicle < 10) } ) then {

        _airWarnings = _airWarnings + 1;

        if( _airWarnings >= 50 ) then {
            [_vehicle, 0] remoteExecCall ["setFuel", _vehicle];
            [] remoteExecCall ["XY_fnc_stripPlayer", crew _vehicle];
            [0, format["%1 wurde der Sprit geklaut, weil er �ber eine Safezone geflogen oder gehovert ist", profileName]] remoteExec ["XY_fnc_broadcast"];
            _airWarnings = 0;
            uisleep 45;
        } else {
            hint parseText format[ "<t color='#FF0000' size ='2' align='center'>Flugverbotszone</t><br/><t color='#00BB00' align='center' size='1'>Das Fliegen unterhalb 300m oder das Hovern �ber einer Safezone ist verboten, nach Ablauf der Zeit wirst du bestraft<br/><br/>Verbleibende Zeit %1s</t>", (50 - _airWarnings) ];
            uisleep 1;
            hintSilent "";
        };
    } else {
        if( _airWarnings > 0 ) then {
            _airWarnings = _airWarnings - 1;
            uisleep 5;
        };
    };
};