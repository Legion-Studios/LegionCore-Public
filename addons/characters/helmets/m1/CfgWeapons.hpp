class ls_helmet_m1: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(m1_helmet);
    descriptionShort = "$STR_A3_SP_AL_III";

    model = QPATHTOF(helmets\m1\ls_helmet_m1.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\m1\data\m1_co.paa),
        QPATHTOF(helmets\m1\data\m1_co.paa),
    };
    picture = QPATHTOF(data\ui\m1Helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\m1\ls_helmet_m1.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
        };

        mass = 50;
        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};

class ls_helmet_m1_light: ls_helmet_m1 {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(m1_light_helmet);
    descriptionShort = "$STR_A3_SP_AL_II";

    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\m1\data\m1_co.paa)
    };
    picture = QPATHTOF(data\ui\m1Helmet_light_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 30;
        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};
