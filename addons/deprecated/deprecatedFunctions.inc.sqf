["ls_vehicle_fnc_impulsorMonitor", {
    WARNING("Obsolete function used: ls_vehicle_fnc_impulsorMonitor. This function is no longer required for vehicles to have/use impulse.");
}] call CBA_fnc_compileFinal;

["ls_vehicle_fnc_impulseJoystick", {
    WARNING("Deprecated function used: ls_vehicle_fnc_impulseJoystick. Instead use ls_impulsor_fnc_impulse.");
    [_this#0, 1] call EFUNC(impulsor,impulse);
}] call CBA_fnc_compileFinal;

["ls_vehicle_fnc_repulseJoystick", {
    WARNING("Deprecated function used: ls_vehicle_fnc_repulseJoystick. Instead use ls_impulsor_fnc_impulse with negative _impulseChange value.");
    [_this#0, -1] call EFUNC(impulsor,impulse);
}] call CBA_fnc_compileFinal;

["ls_fnc_keybind_operationFramework", {
    params ["_triggerType"];
    WARNING("Deprecated function used: ls_fnc_keybind_operationFrameWork (new: ls_vehicles_fnc_keybindAnimation).");

    private _vehicle = cameraOn;
    if !(_vehicle isKindOf "CAManBase") then {
        [_vehicle, _triggerType] call EFUNC(vehicles,keybindAnimation);
    };
}] call CBA_fnc_compileFinal;

["ls_fnc_vivCanLoad", {
    WARNING("Deprecated function used: ls_fnc_vivCanLoad (new: ls_vehicles_fnc_vivCanLoad).");
    call EFUNC(vehicles,vivCanLoad);
}] call CBA_fnc_compileFinal;

["ls_fnc_vivPilotLoadVehicle", {
    WARNING("Deprecated function used: ls_fnc_vivPilotLoadVehicle (new: ls_vehicles_fnc_vivLoad).");
    call EFUNC(vehicles,vivLoad);
}] call CBA_fnc_compileFinal;

["ls_utility_fnc_hudColorChange", {
    params ["_vehicle", "_red", "_green", "_blue", "_alpha"];
    WARNING("Deprecated function used: ls_utility_fnc_hudColorChange (new: ls_vehicles_fnc_setHudColor).");
    [_vehicle, [_red, _green, _blue, _alpha]] call EFUNC(vehicles,setHudColor);
}] call CBA_fnc_compileFinal;

["ls_vehicle_fnc_laatCargoTurretPhase", {
    WARNING("Deprecated function used: ls_vehicle_fnc_laatCargoTurretPhase (new: ls_vehicles_fnc_conditionalSeats).");
    call EFUNC(vehicles,conditionalSeats);
}] call CBA_fnc_compileFinal;

["ls_weapons_fnc_stunPPeffect", {
    WARNING("Deprecated function used: ls_weapons_fnc_stunPPeffect (new: ls_weapons_fnc_stunEffects). New function takes unit as parameter, using ls_player as default.");
    ls_player call EFUNC(weapons,stunEffects);
}] call CBA_fnc_compileFinal;

["ls_common_fnc_biologyCheck", {
    WARNING("Deprecated function used: ls_common_fnc_biologyCheck (new: ls_common_fnc_getBiology). New function returns an array with additional params");
    private _return = call EFUNC(common,getBiology);
    if (isNil "_return") exitWith { false }; // Needed if bad param is passed
    _return select 2;
}] call CBA_fnc_compileFinal;
