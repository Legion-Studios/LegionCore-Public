class ls_sob_hunter_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Hunter's Helmet [Uncolored]";

    model = QPATHTOF(helmets\hunter\ls_sob_hunter_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\hunter\data\camo1_co.paa),
        QPATHTOF(helmets\hunter\data\visor_co.paa),
    };

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\hunter\ls_sob_hunter_helmet.p3d);
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
