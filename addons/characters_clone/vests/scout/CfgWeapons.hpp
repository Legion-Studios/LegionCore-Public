class ls_cloneVest_scout: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Scout Pouches";

    model = QPATHTOF(vests\scout\ls_vest_clone_scout.p3d);
    hiddenSelections[] = {
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\scout\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\scout\ls_vest_clone_scout.p3d);
        hiddenSelections[] = {
            "camo1"
        };

        mass = 100;

        class HitpointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 8;
                passThrough = 0.3;
            };
            class Diaphragm: Chest {
                HitpointName = "HitDiaphragm";
            };
            class Abdomen: Chest {
                HitpointName = "HitAbdomen";
            };
        };
    };
};
