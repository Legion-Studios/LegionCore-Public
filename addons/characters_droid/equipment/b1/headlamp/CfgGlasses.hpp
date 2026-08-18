class ls_droidGlasses_b1Headlamp: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp);
    descriptionShort = "";

    model = QPATHTOF(equipment\b1\headlamp\ls_droid_b1Headlamp.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Headlamp_ui_ca.paa);

    hoa_sling_slingWithHelmet = 1;

    class ls_lighting: EGVAR(lighting,droid_headlamp) {};
};

class ls_droidGlasses_b1Headlamp_geonosis: ls_droidGlasses_b1Headlamp {
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp_geonosis);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\geonosis_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Headlamp_geonosis_ui_ca.paa);
};

class ls_droidGlasses_b1Headlamp_training: ls_droidGlasses_b1Headlamp {
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp_training);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\training_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Headlamp_training_ui_ca.paa);
};

class ls_droidGlasses_b1Headlamp_saboteur: ls_droidGlasses_b1Headlamp {
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp_saboteur);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\saboteur_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Headlamp_saboteur_ui_ca.paa);
};
