if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
    [
        QGVAR(customBloodDropsEnabled), "CHECKBOX",
        ["Custom Blood Drops Enabled", "If enabled, different types of units will produce different types of 'blood'."],
        [QUOTE(MOD_NAME), "ACE Medical Compatability"],
        true, true
    ] call CBA_fnc_addSetting;
};

if (missionNamespace getVariable ["ace_interaction", false]) then {
    [
        QGVAR(addHudColorChangerActions), "CHECKBOX",
        ["Add HUD Color Changer Actions", "Add ACE interactions to change an aircraft's hud color."],
        [QUOTE(MOD_NAME), "ACE Interaction Compatability"], true, 0, {}, true
    ] call CBA_fnc_addSetting;

    [
        QGVAR(addViVActions), "CHECKBOX",
        ["Add ViV Actions", "Add ACE interactions for (un)loading vehicles."],
        [QUOTE(MOD_NAME), "ACE Interaction Compatability"], true, 0, {}, true
    ] call CBA_fnc_addSetting;
};
