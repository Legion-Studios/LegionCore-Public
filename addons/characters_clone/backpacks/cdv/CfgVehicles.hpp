class ls_cloneBackpack_cdv: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone CDV Jumppack";

    model = QPATHTOF(backpacks\cdv\ls_backpack_clone_cdv.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\cdv\data\camo1_co.paa)
    };

    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_hasLRradio = 1;

    NSM_jumppack_is_jumppack = 1;
    NSM_jumppack_spam_delay = 1;
    NSM_jumppack_energy_capacity = 100;
    NSM_jumppack_recharge = 4;
    NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
    NSM_jumppack_effect_points[] = {{{"spine3", {0, -0.3, -0.1}}}};
    NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
    NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
    NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
    NSM_jumppack_jump_types[] = {
        {"Forward Jump", {12, 20, 50, 0, 0, 0}},
        {"Short Jump", {12, 5, 30, 0, 1, 0}}
    };
};
