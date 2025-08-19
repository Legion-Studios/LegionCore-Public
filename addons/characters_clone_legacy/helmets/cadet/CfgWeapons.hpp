class ls_gar_cadet_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Cadet Helmet";

    model = QPATHTOF(helmets\cadet\ls_helmet_clone_cadet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cadet\data\camo1_co.paa),
        QPATHTOF(helmets\cadet\data\visor_ca.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\cadet\ls_helmet_clone_cadet.p3d);
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
