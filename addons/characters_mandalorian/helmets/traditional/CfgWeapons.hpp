class ls_mandalorianHelmet_traditional: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(traditional_helmet);
    descriptionShort = "$STR_A3_SP_AL_V";

    model = QPATHTOF(helmets\traditional\ls_helmet_mandalorian_traditional.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\traditional\data\helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    picture = QPATHTOF(data\ui\traditionalHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\traditional\ls_helmet_mandalorian_traditional.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };
        mass = 80;

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 12;
                passThrough = 0.5;
            };
            class Face {
                hitPointName = "HitFace";
                armor = 12;
                passThrough = 0.5;
            };
        };
    };
};
