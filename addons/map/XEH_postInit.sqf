#include "script_component.hpp"

if (hasInterface) then {
    // Initial scan for eden placed objects
    GVAR(objectIconObjects) append ((8 allObjects 0) select {
        _x getVariable [QGVAR(objectMarkerEnabled), true] && { ((_x call FUNC(getIcon)) select 0) != "" }
    });

    addMissionEventHandler ["EntityCreated", {
        params ["_entity"];
        _entity call FUNC(addObject);
    }];

    ["CBA_settingsInitialized", {
        if (!GVAR(objectMarkersEnabled)) exitWith {};

        [
            { !isNull ((findDisplay IDD_MAIN_MAP) displayCtrl IDC_MAP) }, {
                ((findDisplay IDD_MAIN_MAP) displayCtrl IDC_MAP) ctrlAddEventHandler ["Draw", LINKFUNC(drawIcons)];
            }
        ] call CBA_fnc_waitUntilAndExecute;

        // Parts of the GPS would be completely unreadable without lowering the opacity
        private _display = uiNamespace getVariable ["RscCustomInfoMiniMap", displayNull];
        private _ctrl = _display displayCtrl IDC_GPS_MAP;
        _ctrl setVariable [QGVAR(objectMarkersOpacity), GVAR(objectMarkersOpacity) / 2];
        _ctrl ctrlAddEventHandler ["Draw", LINKFUNC(drawIcons)];
    }] call CBA_fnc_addEventHandler;
};
