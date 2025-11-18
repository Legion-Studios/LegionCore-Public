class ls_helmet_jockey: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Jockey";

    model = QPATHTOF(helmets\jockey\ls_helmet_jockey.p3d);
    hiddenSelections[] = {
        "camo",     // Cloth
        "camo1",    // Goggle
        "camo2"     // Glass
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\camo_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_ca.paa)
    };
    // picture = QPATHTOF(data\ui\gunslingerHat_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(helmets\jockey\ls_helmet_jockey.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 5;
                passThrough = 0.1;
            };
        };
    };
};

class ls_helmet_jockey_alt: ls_helmet_jockey {
    displayName = "Jockey (Alt)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\camo_co.paa),
        "",
        ""
    };
};

class ls_helmet_jockey_navy: ls_helmet_jockey {
    displayName = "Jockey (Navy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\navy_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_ca.paa)
    };
};

class ls_helmet_jockey_navy_alt: ls_helmet_jockey_navy {
    displayName = "Jockey (Navy, Alt)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\jockey\data\navy_co.paa),
        "",
        ""
    };
};
