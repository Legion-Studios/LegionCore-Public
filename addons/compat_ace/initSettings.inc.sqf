if ("ace_medical" call EFUNC(common,isModLoaded)) then {
    [
        QGVAR(customBloodDropsEnabled), "CHECKBOX",
        ["Custom Blood Drops Enabled", "If enabled, different types of units will produce different types of 'blood'."],
        [QUOTE(MOD_NAME), "ACE Medical Compatability"],
        true, true
    ] call CBA_fnc_addSetting;
};