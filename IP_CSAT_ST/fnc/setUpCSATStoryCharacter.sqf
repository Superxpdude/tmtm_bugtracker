private ["_unit", "_rank", "_identity", "_removeGoggles"];
_unit = _this select 0;
_rank = _this select 1;
_identity = _this select 2;
_removeGoggles = _this select 3;

_unit setVariable ["IP_Rank", _rank, true];
_unit setIdentity _identity;
if (_removeGoggles) then {removeGoggles _unit};

[_unit] call IP_fnc_setCSATInsignia;