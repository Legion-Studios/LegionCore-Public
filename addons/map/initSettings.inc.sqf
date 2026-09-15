[
    QGVAR(objectMarkersEnabled), "CHECKBOX",
    [LLSTRING(objectMarkersEnabled_name), LLSTRING(objectMarkersEnabled_tooltip)],
    _category, true, 0, {}, true // Requires restart
] call CBA_fnc_addSetting;

[
    QGVAR(objectMarkersOpacity), "SLIDER",
    [LLSTRING(objectMarkersOpacity_name), LLSTRING(objectMarkersOpacity_tooltip)],
    _category, [0, 1, 1, 2, true]
] call CBA_fnc_addSetting;

[
    QGVAR(objectMarkersShowName), "CHECKBOX",
    [LLSTRING(objectMarkersShowName_name), LLSTRING(objectMarkersShowName_tooltip)],
    _category, true
] call CBA_fnc_addSetting;
