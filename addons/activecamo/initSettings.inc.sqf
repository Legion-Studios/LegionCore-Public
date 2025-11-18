[
    QGVAR(enabled), "CHECKBOX",
    ["Enabled", "If enabled, players will be able to activate active camo."],
    _category, true, 1
] call CBA_fnc_addSetting;

[
    QGVAR(camouflageCoefficient), "SLIDER",
    ["Camoflauge Coefficient - Units", "Coefficient for a unit's camo skill when using active camo. Lower = more hidden."],
    _category, [0, 1, 0, 2], 1
] call CBA_fnc_addSetting;

[
    QGVAR(camouflageCoefficientVehicle), "SLIDER",
    ["Camoflauge Coefficient - Vehicles", "Coefficient for a vehicle's camo skill when using active camo. Lower = more hidden."],
    _category, [0, 1, 0, 2], 1
] call CBA_fnc_addSetting;

[
    QGVAR(cooldown), "TIME",
    ["Cooldown After Deactivating", "Amount of time before active camo can be re-activated after deactivating."],
    _category, [0, 30, 5], 1
] call CBA_fnc_addSetting;

[
    QGVAR(allowFiring), "CHECKBOX",
    ["Allow Firing", "If enabled, units will be allowed to fire weapons while in active camo."],
    _category, true, 1
] call CBA_fnc_addSetting;

[
    QGVAR(maxAllowedHits), "SLIDER",
    ["Maximum Allowed Hits", "Allowed number of hits a unit can take when in active camo. -1 = Don't deactivate."],
    _category, [-1, 30, 5, -1], 1
] call CBA_fnc_addSetting;
