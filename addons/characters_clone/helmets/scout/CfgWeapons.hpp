class ls_cloneHelmet_scout: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(scout_helmet);

    model = QPATHTOF(helmets\scout\ls_helmet_clone_scout.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\scout\data\camo1_co.paa),
        QPATHTOF(helmets\scout\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\scoutHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\scout\ls_helmet_clone_scout.p3d);
        hiddenSelections[] = {"camo1", "visor"};

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head: Head {
                armor = 5;
            };
            class Face: Face {
                armor = 5;
            };
        };
    };
};
