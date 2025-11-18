class ls_cloneHelmet_scout: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Scout Trooper Helmet";

    model = QPATHTOF(helmets\scout\ls_helmet_clone_scout.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\scout\data\camo1_co.paa),
        QPATHTOF(helmets\scout\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\scout\ls_helmet_clone_scout.p3d);
        hiddenSelections[] = {"camo1", "visor"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};
