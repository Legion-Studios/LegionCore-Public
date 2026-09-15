class ls_droidGlasses_b1Sniper: ls_combatGlasses_base {
    author = AUTHOR;
    scope = 2;
    displayName = "1C-U";

    descriptionShort = "";

    model = QPATHTOF(equipment\b1\nvgs\sniper\ls_nvg_droid_b1Sniper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\nvgs\sniper\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1SniperNVG_ui_ca.paa);

    hoa_sling_slingWithHelmet = 1;
};

class ls_droidGlasses_b1Sniper_training: ls_combatGlasses_base {
    author = AUTHOR;
    scope = 2;
    displayName = "1C-U [Training]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\nvgs\sniper\data\training_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1SniperNVG_training_ui_ca.paa);
};
