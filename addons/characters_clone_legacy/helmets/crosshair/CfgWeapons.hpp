class ls_sob_crosshair_helmet: ls_sob_commando_helmet {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Crosshair's Helmet [Uncolored]";

    model = QPATHTOF(helmets\crosshair\ls_sob_crosshair_helmet.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\crosshair\data\camo1_co.paa),
        QPATHTOF(helmets\crosshair\data\visor_co.paa),
    };
    hiddenSelectionsMaterials[] = {};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\crosshair\ls_sob_crosshair_helmet.p3d);
        hiddenSelections[] = {"camo1", "visor"};
    };
};
