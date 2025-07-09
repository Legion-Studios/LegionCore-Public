class ls_sob_tech_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Tech's Helmet [Uncolored]";

    model = QPATHTOF(helmets\tech\ls_sob_tech_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "glass"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\tech\data\camo1_co.paa),
        QPATHTOF(helmets\tech\data\glass_ca.paa),
    };

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\tech\ls_sob_tech_helmet.p3d);
        hiddenSelections[] = {
            "camo1",
            "glass"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};
