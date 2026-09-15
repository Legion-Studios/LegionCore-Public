class ls_droidNVG_b1Headlamp: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp);
    descriptionShort = "";

    model = QPATHTOF(equipment\b1\headlamp\ls_droid_b1Headlamp.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\camo1_co.paa)
    };
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    picture = QPATHTOF(data\ui\b1Headlamp_ui_ca.paa);
    ace_nightvision_border = "";

    visionMode[] = {"Normal"};
    thermalMode[] = {};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\b1\headlamp\ls_droid_b1Headlamp.p3d);
        modelOff = QPATHTOF(equipment\b1\headlamp\ls_droid_b1Headlamp.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 10;

        class FlashLight {
            ace_flashlight_beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
            ace_flashlight_colour = "white";
            ace_flashlight_size = 2.15;
        };
    };

    class ls_lighting: EGVAR(lighting,droid_headlamp) {};
};

class ls_droidNVG_b1Headlamp_geonosis: ls_droidNVG_b1Headlamp {
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp_geonosis);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\geonosis_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Headlamp_geonosis_ui_ca.paa);
};

class ls_droidNVG_b1Headlamp_training: ls_droidNVG_b1Headlamp {
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp_training);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\training_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Headlamp_training_ui_ca.paa);
};

class ls_droidNVG_b1Headlamp_saboteur: ls_droidNVG_b1Headlamp {
    author = AUTHOR;
    displayName = CSTRING(b1_headlamp_saboteur);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\headlamp\data\saboteur_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Headlamp_saboteur_ui_ca.paa);
};
