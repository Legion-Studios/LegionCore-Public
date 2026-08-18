#include "script_component.hpp"

// TODO: Draw icons on GPS as well
if (hasInterface) then {
    // Initial scan for eden placed objects
    GVAR(objectIconObjects) append ((8 allObjects 0) select {
        _x getVariable [QGVAR(objectMarkerEnabled), true] && { ((_x call FUNC(getIcon)) select 0) != "" }
    });

    addMissionEventHandler ["EntityCreated", {
        params ["_entity"];
        if (((_entity call FUNC(getIcon)) select 0) != "") then { GVAR(objectIconObjects) pushBack _entity };
    }];

    ["CBA_settingsInitialized", {
        if (GVAR(objectMarkersEnabled)) then {
            // In-game map
            [
                { !isNull ((findDisplay 12) displayCtrl 51) }, {
                    ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", LINKFUNC(drawIcons)];
                }
            ] call CBA_fnc_waitUntilAndExecute;
        };
    }] call CBA_fnc_addEventHandler;
};
