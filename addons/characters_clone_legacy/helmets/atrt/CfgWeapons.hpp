class ls_gar_atrtDriver_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone AT-RT Driver Helmet";

    model = QPATHTOF(helmets\atrt\ls_helmet_clone_atrt.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\atrt\data\helmet_atrt_CO.paa),
        QPATHTOF(helmets\atrt\data\antenna_CO.paa)
    };

    subItems[] = {
        "Integrated_NVG_TI_1_F"
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\atrt\ls_helmet_clone_atrt.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 20;
                passThrough = 0.5;
            };
        };
    };
};

class ls_gar_atrtDriverHologram_helmet: ls_gar_atrtDriver_helmet {
    displayName = "Clone AT-RT Driver Helmet [Hologram]";
    model = QPATHTOF(helmets\atrt\ls_helmet_clone_atrt_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\atrt\ls_helmet_clone_atrt_hologram.p3d);
    };

    EGVAR(common,hideHead) = 1;
};
