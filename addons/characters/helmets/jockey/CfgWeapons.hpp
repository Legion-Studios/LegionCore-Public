class ls_helmet_jockey: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(jockey_goggles_helmet);
    descriptionShort = "$STR_A3_SP_AL_I";

    model = QPATHTOF(helmets\jockey\ls_helmet_jockey.p3d);
    hiddenSelections[] = {
        "camo",  // Cloth
        "camo1", // Goggle
        "camo2"  // Glass
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\camo_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_ca.paa)
    };
    picture = QPATHTOF(data\ui\jockeyHat_goggles_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 24;
        uniformModel = QPATHTOF(helmets\jockey\ls_helmet_jockey.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 4;
                passThrough = 0.8;
            };
        };
    };
};

class ls_helmet_jockey_alt: ls_helmet_jockey {
    author = AUTHOR;
    displayName = CSTRING(jockey_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\camo_co.paa),
        "",
        ""
    };
    picture = QPATHTOF(data\ui\jockeyHat_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 22;
    };
};

class ls_helmet_jockey_navy: ls_helmet_jockey {
    author = AUTHOR;
    displayName = CSTRING(jockey_navy_goggles_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\navy_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_ca.paa)
    };
    picture = QPATHTOF(data\ui\jockeyHat_navy_goggles_ui_ca.paa);
};

class ls_helmet_jockey_navy_alt: ls_helmet_jockey_navy {
    author = AUTHOR;
    displayName = CSTRING(jockey_navy_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\navy_co.paa),
        "",
        ""
    };
    picture = QPATHTOF(data\ui\jockeyHat_navy_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 22;
    };
};
