[
    QGVAR(createEquipmentCategory), "CHECKBOX",
    [LSTRING(createEquipmentCategory_name), LSTRING(createEquipmentCategory_tooltip)],
    _category, true, 0, {}, true
] call CBA_fnc_addSetting;

[
    QGVAR(enableRangefinderOverlay), "CHECKBOX",
    [LSTRING(enableRangefinderOverlay_name), LSTRING(enableRangefinderOverlay_tooltip)],
    _category, true
] call CBA_fnc_addSetting;

[
    QGVAR(squadShieldHealth), "SLIDER",
    [LSTRING(squadShieldHealth_name), LSTRING(squadShieldHealth_tooltip)],
    _category, [0, 200, 100, -1], 1
] call CBA_fnc_addSetting;
