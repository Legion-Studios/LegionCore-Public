class ls_gar_scout_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Scout Helmet";

    model = QPATHTOF(helmets\scout\ls_gar_scout_helmet.p3d);
    hiddenSelections[] = {"camo1", "camo2", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\scout\data\helmet_co.paa),
        QPATHTOF(helmets\scout\data\helmet_co.paa),
        QPATHTOF(helmets\scout\data\visor_co.paa)
    };

    class ItemInfo: ItemInfo {
        mass = 20;
        uniformModel = QPATHTOF(helmets\scout\ls_gar_scout_helmet.p3d);
        hiddenSelections[] = {"camo1", "camo2", "visor"};

        class HitpointsProtectionInfo {
            class Head {
                hitPointName = "HitHead";
                armor = 15;
                passThrough = 0.75;
            };
        };
    };
};
