#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Populates a tree view with the given types of vehicles.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: RscTree control <CONTROL>
 * 1: Base class (optional, default: "" for all vehicles) <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_rscTree, "air"] call ls_modules_fnc_populateVehicleTypes
 *
 * Public: No
 */

params ["_ctrl", ["_baseClass", ""]];
TRACE_2("fnc_populateVehicleTypes",_ctrl,_baseClass);

tvClear _ctrl;

// Ensure that everything returned is an actual vehicle
// HEMTT reads the variable as unused because the condition needs to be a string
#pragma hemtt ignore_variables ["_baseClasses"]
private _baseClasses = ["Car", "Tank", "Motorcycle", "Helicopter", "Plane", "Ship_F", "StaticWeapon"];

private _vehicleDataCache = uiNamespace getVariable [QGVAR(vehicleSpawnerCache), createHashMap];
if (_vehicleDataCache isEqualTo createHashMap) then {
    private _vehicleConfigs = toString {
        private _name = configName _x;
        getNumber (_x >> "scope") == 2 && {
            _name isKindOf _baseClass && {_baseClasses findIf { _name isKindOf _x } > -1}
        }
    } configClasses (configFile >> "CfgVehicles");

    // Ignore vanilla factions, will pretty much never be used
    private _factionBlacklist = ["IND_C_F", "BLU_F", "CIV_IDAP_F", "IND_F", "BLU_CTRG_F", "IND_E_F", "CIV_F", "OPF_F", "BLU_T_F", "OPF_T_F"];
    {
        private _faction = getText (_x >> "faction");
        if (_faction in _factionBlacklist) then { continue };

        private _factionConfig = configFile >> "CfgFactionClasses" >> _faction;
        private _factionName = getText (_factionConfig >> "displayName");
        private _factionSide = getNumber (_factionConfig >> "side");
        private _factionData = _vehicleDataCache getOrDefault [_faction, [_factionName, _factionSide, []]];

        (_factionData select 2) pushBack [
            configName _x,
            getText (_x >> "displayName"),
            (configName _x) call EFUNC(common,getVehicleIcon)
        ];

        _vehicleDataCache set [_faction, _factionData];
    } forEach _vehicleConfigs;
    uiNamespace setVariable [QGVAR(vehicleSpawnerCache), _vehicleDataCache];
};

{
    _y params ["_factionName", "_side", "_vehicles"];
    private _factionIndex = _ctrl tvAdd [[], _factionName];
    private _sideColor = _side call EFUNC(common,getSideColor);
    _ctrl tvSetPicture [[_factionIndex], _x call EFUNC(common,getFactionIcon)];

    {
        _x params ["_vehicleClassName", "_vehicleDisplayName", "_icon"];
        private _path = [_factionIndex, _ctrl tvAdd [[_factionIndex], _vehicleDisplayName]];

        _ctrl tvSetPicture [_path, _icon];
        _ctrl tvSetPictureColor [_path, _sideColor];
        _ctrl tvSetData [_path, _vehicleClassName];
    } forEach _vehicles;
} forEach _vehicleDataCache;

_ctrl tvSortAll [[], false];
