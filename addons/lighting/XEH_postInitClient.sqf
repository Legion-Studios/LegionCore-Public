#include "script_component.hpp"

private _equipmentTypes = ["HEADGEAR", "HMD", "GOGGLES", "UNIFORM", "VEST"];
private _fnc_isLight = {
    // Condition to show action
    ((_this select 2) call FUNC(getEquipmentData)) get "enabled";
};

[
    "#All", _equipmentTypes, "Enable Flashlight", nil, nil, [{
        // Condition to use action
        params ["_unit", "", "_item"];
        _item != (_unit getVariable [QGVAR(lightEquipment), ""]);
    }, _fnc_isLight], {
        // The action will show as enabled even after being used,
        // but the statement will not run if clicked again
        params ["_unit", "", "_item"];
        [_unit, _item] call FUNC(enable);
    }
] call CBA_fnc_addItemContextMenuOption;

[
    "#All", _equipmentTypes, "Disable Flashlight", nil, nil, [{
        // Condition to use action
        params ["_unit", "", "_item"];
        _item == (_unit getVariable [QGVAR(lightEquipment), ""]);
    }, _fnc_isLight], {
        params ["_unit", "", "_item"];
        [_unit, _item] call FUNC(disable);
    }
] call CBA_fnc_addItemContextMenuOption;

[QGVAR(createLights), {
    params ["_unit", "_equipment", ["_mode", -1]];

    // Only create one set of lights per unit
    [QGVAR(removeLights), _unit] call CBA_fnc_localEvent;

    if (_mode < 0) then {
        _mode = _unit getVariable [QGVAR(lightMode), 0];
    };

    _unit setVariable [QGVAR(isLightOn), true];
    _unit setVariable [QGVAR(lightEquipment), _equipment];
    private _lights = [_equipment, _mode] call FUNC(createLights);
    [_unit, _equipment, _lights] call FUNC(attachLights);
}] call CBA_fnc_addEventHandler;

[QGVAR(removeLights), {
    params ["_unit"];

    private _lights = _unit getVariable [QGVAR(lights), []];
    {
        detach _x;
        deleteVehicle _x;
    } forEach _lights;

    _unit setVariable [QGVAR(lights), nil];
    _unit setVariable [QGVAR(lightEquipment), nil];
    _unit setVariable [QGVAR(isLightOn), nil];
}] call CBA_fnc_addEventHandler;

[QGVAR(setMode), {
    params ["_unit", "_equipment", "_mode"];
    _unit setVariable [QGVAR(lightMode), _mode];

    if (_unit getVariable [QGVAR(isLightOn), false]) then {
        [QGVAR(createLights), [_unit, _equipment, _mode]] call CBA_fnc_localEvent;
    };
}] call CBA_fnc_addEventHandler;
