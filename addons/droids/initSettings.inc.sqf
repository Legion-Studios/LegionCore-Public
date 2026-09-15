[
    QGVAR(droidekaShieldHealth), "SLIDER",
    [LSTRING(droidekaShieldHealth_name), LSTRING(droidekaShieldHealth_tooltip)],
    _category, [0, 200, 100, -1], 1
] call CBA_fnc_addSetting;

[
    QGVAR(droidekaShieldRegen), "SLIDER",
    [LSTRING(droidekaShieldRegen_name), LSTRING(droidekaShieldRegen_tooltip)],
    _category, [0, 1, 0.01, 2, true], 1, {
        // Start/stop pfh
        if (_this > 0) then {
            [] call FUNC(shieldRechargePFH);
        } else {
            private _handle = missionNamespace getVariable [QGVAR(shieldRechargePFH), -1];
            if (_handle > -1) then {
                _handle call CBA_fnc_removePerFrameHandler;
                missionNamespace setVariable [QGVAR(shieldRechargePFH), nil];
            };
        };
    }
] call CBA_fnc_addSetting;

[
    QGVAR(droidekaShieldTargetsEnabled), "CHECKBOX",
    [LSTRING(droidekaShieldTargetsEnabled_name), LSTRING(droidekaShieldTargetsEnabled_tooltip)],
    _category, !isMultiplayer, 1
] call CBA_fnc_addSetting;

[
    QGVAR(droidekaShieldCooldown), "TIME",
    [LSTRING(droidekaShieldCooldown_name), LSTRING(droidekaShieldCooldown_tooltip)],
    _category, [0, 60, 30], 1
] call CBA_fnc_addSetting;
