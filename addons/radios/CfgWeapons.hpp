class CfgWeapons {
    class ItemRadio;
    class GVAR(base): ItemRadio {
        scope = 0;
        author = AUTHOR;

        tf_prototype = 1;
        tf_range = 5000;
        tf_subtype = "digital";
        tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel";
        tf_additional_channel = 1;
    };
    class GVAR(cwp8): GVAR(base) {
        scope = 2;
        author = AUTHOR;

        displayName = "CWP-8";
        descriptionShort = "Clone Wrist Panel";
        model = QPATHTOF(GVAR(cwp8).p3d);
        picture = QPATHTOF(data\ui\cwp8_ui_ca.paa);

        // Revert tracked radios to the base one
        ace_arsenal_uniqueBase = QGVAR(cwp8);
        tf_dialog = QGVAR(cloneComlink);
        tf_encryptionCode = "tf_west_radio_code";
        tf_parent = QGVAR(cwp8);
    };

    class GVAR(cwp8_aurebesh): GVAR(cwp8) {
        scope = 2;
        author = AUTHOR;
        displayName = "CWP-8 (Aurebesh)";

        ace_arsenal_uniqueBase = QGVAR(cwp8_aurebesh);
        tf_dialog = QGVAR(cloneComlink_aurebesh);
        tf_parent = QGVAR(cwp8_aurebesh);
    };

    class GVAR(dcs): GVAR(base) {
        scope = 2;
        author = AUTHOR;

        displayName = "DCS";
        descriptionShort = "Droid Communication System";
        model = QPATHTOF(GVAR(dcs).p3d);
        picture = QPATHTOF(data\ui\dcs_ui_ca.paa);

        ace_arsenal_uniqueBase = QGVAR(dcs);
        tf_dialog = QGVAR(droidComlink);
        tf_encryptionCode = "tf_east_radio_code";
        tf_parent = QGVAR(dcs);
    };

    class GVAR(dcs_aurebesh): GVAR(dcs) {
        scope = 2;
        author = AUTHOR;
        displayName = "DCS (Aurebesh)";

        ace_arsenal_uniqueBase = QGVAR(dcs_aurebesh);
        tf_dialog = QGVAR(droidComlink_aurebesh);
        tf_parent = QGVAR(dcs_aurebesh);
    };

    class GVAR(hush98): GVAR(base) {
        scope = 2;
        author = AUTHOR;

        displayName = "Hush-98";
        descriptionShort = "Handheld comlink";
        picture = QPATHTOF(data\ui\hush98_ui_ca.paa);

        ace_arsenal_uniqueBase = QGVAR(hush98);
        tf_dialog = QGVAR(hush98);
        tf_encryptionCode = "tf_independent_radio_code";
        tf_parent = QGVAR(hush98);
    };

    class GVAR(hush98_aurebesh): GVAR(hush98) {
        scope = 2;
        author = AUTHOR;
        displayName = "Hush-98 (Aurebesh)";

        ace_arsenal_uniqueBase = QGVAR(hush98_aurebesh);
        tf_dialog = QGVAR(hush98_aurebesh);
        tf_parent = QGVAR(hush98_aurebesh);
    };

    // Needed for WebKnight Droids
    DEPRECATED(SWLB_comlink_droid,GVAR(dcs));
};
