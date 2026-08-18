class ls_sob_tech_helmet: ls_sob_commando_helmet {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Tech's Helmet [Uncolored]";

    model = QPATHTOF(helmets\tech\ls_sob_tech_helmet.p3d);
    hiddenSelections[] = {"camo1", "glass"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\tech\data\camo1_co.paa),
        QPATHTOF(helmets\tech\data\glass_ca.paa)
    };
    hiddenSelectionsMaterials[] = {};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\tech\ls_sob_tech_helmet.p3d);
        hiddenSelections[] = {"camo1", "glass"};
    };
};
