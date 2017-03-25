private ["_unit", "_key", "_insignia"];
_unit = _this select 0;

_unit setVariable ["IP_Faction", "CSAT", true];
if (!(_unit getVariable ["IP_CSATInsignia", true])) exitWith {};

waitUntil {time > 0};
if (!isNil "IP_NoFactionInsignias") exitWith {};

_insignia = "CSAT_ST";
[[_unit, _insignia], "BIS_fnc_setUnitInsignia", nil, true] call BIS_fnc_MP;