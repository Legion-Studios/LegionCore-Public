class ls_sob_wrecker_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Wrecker's Helmet [Uncolored]";

    model = QPATHTOF(helmets\wrecker\ls_sob_wrecker_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\wrecker\data\camo1_co.paa),
        QPATHTOF(helmets\wrecker\data\visor_co.paa),
    };

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\wrecker\ls_sob_wrecker_helmet.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor"
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
