class ls_sob_wrecker_helmet: ls_sob_commando_helmet {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Wrecker's Helmet [Uncolored]";

    model = QPATHTOF(helmets\wrecker\ls_sob_wrecker_helmet.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\wrecker\data\camo1_co.paa),
        QPATHTOF(helmets\wrecker\data\visor_co.paa),
    };
    hiddenSelectionsMaterials[] = {};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\wrecker\ls_sob_wrecker_helmet.p3d);
        hiddenSelections[] = {"camo1", "visor"};
    };
};
