#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Logs an error to systemChat and RPT if loaded with incompatible mods.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_main_fnc_handleModConflicts;
 *
 * Public: No
 */

private _incompatibleMods = [
    "1656708630", // Legion Base - Legacy
    "2631999150", // ACE Compatibility patch
    "2862851483", // ACE [No Medical] Compatibility patch
    "1969012355"  // TFAR Beta Compatibility patch
];
#ifdef DEBUG_MODE_FULL
    // CBA id for testing
    _incompatibleMods pushBack "450814997";
#endif

private _loadedIncompatibleMods = getLoadedModsInfo select { (_x select 7) in _incompatibleMods };

if (_loadedIncompatibleMods isNotEqualTo []) then {
    {
        private _log = format [
            "[%1] (%2) ERROR: Incompatible mod loaded, '%3' is not compatible with %4.",
            toUpper QUOTE(MAINPREFIX), QUOTE(COMPONENT), _x select 0, QUOTE(MOD_NAME)
        ];
        systemChat _log;
        diag_log text _log;
    } forEach _loadedIncompatibleMods;

    private _message = format [
        "[%1] (%2) ERROR: These mods should not be loaded together, you may experience unexpected behavior and issues.",
        toUpper QUOTE(MAINPREFIX), QUOTE(COMPONENT)
    ];
    systemChat _message;
    diag_log text _message;
};
