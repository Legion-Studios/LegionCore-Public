[
    QGVAR(enableOverchargeCooldown), "CHECKBOX",
    ["Overcharge Cooldown Enabled", "If enabled, vehicles can configure their overcharge mode to have a cooldown."],
    _category, true, 1
] call CBA_fnc_addSetting;

[
    QGVAR(hintDisplay), "LIST",
    ["Impulse Hint Display", "Changes the type of the impulse display."],
    _category, [
        [0, 1, 2], ["Disabled", "Hint", "Local Chat"], 1
    ]
] call CBA_fnc_addSetting;

[
    QGVAR(overchargeDamageChance), "SLIDER",
    ["Overcharge Damage Chance", "When using overcharge, this is the chance that the engine will be damaged every 10 seconds."],
    _category,
    [0, 1, 0.5, 1, true],
    true
] call CBA_fnc_addSetting;
