#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Adds a user action to an object that will notify pilots that there are reinserts ready.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * True if object is set up for vehicle customization, otherwise false <BOOL>
 *
 * Example:
 * this call ls_props_fnc_canEditAppearance
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];
TRACE_1("fnc_canEditAppearance",_object);

if (!alive _object) exitWith { false };

private _return = if ("zen_garage" call EFUNC(common,isModLoaded)) then {
    _object call zen_garage_fnc_getVehicleData;
} else {
    private _vehicleData = [];
    private _vehicleConfig = configOf _object;
    private _vehicleFaction = faction _object;
    {
        private _entries = [];

        {
            private _displayName = getText (_x >> "displayName");
            private _factions = getArray (_x >> "factions");

            if (
                _displayName != ""
                && {getNumber (_x >> "scope") == 2 || {!isNumber (_x >> "scope")}}
                && {_factions isEqualTo [] || {_factions findIf {_x == _vehicleFaction} > -1}}
            ) then {
                _entries pushBack [configName _x, _displayName];
            };
        } forEach configProperties [_x, "isClass _x", true];

        _vehicleData pushBack _entries;
    } forEach [_vehicleConfig >> "AnimationSources", _vehicleConfig >> "TextureSources"];
};

_return isNotEqualTo [[], []];
