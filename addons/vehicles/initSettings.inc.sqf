[
    QGVAR(vivLoadingRange), "SLIDER",
    [LSTRING(vivLoadingRange_name), LSTRING(vivLoadingRange_description)],
    _category, [1, 30, 10, 0, false], true
] call CBA_fnc_addSetting;

[
    QGVAR(disableAutoVectoring), "CHECKBOX",
    [LSTRING(disableAutoVectoring_name), LSTRING(disableAutoVectoring_description)],
    _category, false
] call CBA_fnc_addSetting;

[
    QGVAR(customHudColor), "COLOR",
    [LSTRING(customHUDColor_name), LSTRING(customHUDColor_description)],
    _category, [1, 1, 1, 1]
] call CBA_fnc_addSetting;

[
    QGVAR(turretDroid_lifeTime), "TIME",
    [LSTRING(turretDroid_lifeTime_name), LSTRING(turretDroid_lifeTime_description)],
    _category, [0, 300, 120], 1
] call CBA_fnc_addSetting;
