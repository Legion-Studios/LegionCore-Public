[
    QGVAR(vivLoadingRange), "SLIDER",
    ["Default Loading Range", "The default range (in meters) for loading a vehicle with ViV."],
    _category, [1, 30, 10, 0, false], true
] call CBA_fnc_addSetting;

[
    QGVAR(disableAutoVectoring), "CHECKBOX",
    ["Disable Auto-Vectoring", "If enabled, auto-vectoring will be automatically disabled when entering a vehicle."],
    _category, false
] call CBA_fnc_addSetting;
