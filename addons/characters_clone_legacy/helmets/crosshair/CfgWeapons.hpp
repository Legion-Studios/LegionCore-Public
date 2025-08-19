class ls_sob_crosshair_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Crosshair's Helmet [Uncolored]";

    model = QPATHTOF(helmets\crosshair\ls_sob_crosshair_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\crosshair\data\camo1_co.paa),
        QPATHTOF(helmets\crosshair\data\visor_co.paa),
    };

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\crosshair\ls_sob_crosshair_helmet.p3d);
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
