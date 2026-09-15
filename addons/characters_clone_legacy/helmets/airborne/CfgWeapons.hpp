class ls_gar_airborne_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Airborne Helmet";

    model = QPATHTOF(helmets\airborne\ls_gar_airborne_helmet.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[]= {
        QPATHTOF(helmets\airborne\data\camo1_co.paa),
        QPATHTOF(helmets\airborne\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\airborne\ls_gar_airborne_helmet.p3d);
        hiddenSelections[] = {"camo1", "visor"};
    };
};
