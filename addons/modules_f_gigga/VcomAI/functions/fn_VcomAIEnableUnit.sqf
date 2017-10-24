
params ["_logic"];
if (!local _logic) exitWith {};

private _unit = effectiveCommander (attachedTo _logic);
deleteVehicle _logic;

if (isNull _unit) exitWith {};
if (!alive _unit) exitWith {};
if (isPlayer _unit) exitWith {};
if (!(_unit isKindOf "CaManBase")) exitWith {};

_unit setVariable ["VCOM_NOAI", true, true];
