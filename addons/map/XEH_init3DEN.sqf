#include "script_component.hpp"

params ["_display"];

// Note that users will need to fully exit and re-enter Eden for a setting change to take effect
if !(GVAR(objectMarkersEnabled)) exitWith {};

add3DENEventHandler ["OnBeforeMissionPreview", {
    // Remove Eden entities
    GVAR(objectIconObjects) = [];
}];

// This has to be scheduled with a delay to have access to Eden entities
add3DENEventHandler ["OnMissionPreviewEnd", {
    [] spawn {
        sleep 0.5;
        private _entities = (all3DENEntities select 0) select {
            (_x get3DENAttribute QGVAR(objectMarkerEnabled) select 0) && { ((_x call FUNC(getIcon)) select 0) != "" }
        };
        GVAR(objectIconObjects) append _entities;
    };
}];

(_display displayCtrl IDC_MAP) ctrlAddEventHandler ["Draw", LINKFUNC(drawIcons)];

// Enable / disable marker based on Eden attribute
add3DENEventHandler ["OnEntityAttributeChanged", {
    params ["_entity", "_property"];
    if !(typeName _entity == "OBJECT" && _property == QGVAR(objectMarkerEnabled)) exitWith {};

    private _isMarkerEnabled = (_entity get3DENAttribute _property) select 0;
    if (_isMarkerEnabled) then {
        _entity call FUNC(addObject);
    } else {
        _entity call FUNC(removeObject);
    };
}];

add3DENEventHandler ["OnEditableEntityAdded", {
    params ["_entity"];
    if (typeName _entity != "OBJECT") exitWith {};
    _entity call FUNC(addObject);
}];

add3DENEventHandler ["OnEditableEntityRemoved", {
    params ["_entity"];
    if (typeName _entity != "OBJECT") exitWith {};
    _entity call FUNC(removeObject);
}];
