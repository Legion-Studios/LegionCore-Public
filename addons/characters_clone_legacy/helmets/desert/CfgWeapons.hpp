class ls_gar_desert_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Desert Trooper Helmet";

    model = QPATHTOF(helmets\desert\ls_cloneHelmet_desert.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\desert\data\camo1_co.paa),
        QPATHTOF(helmets\desert\data\visor_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\desert\ls_cloneHelmet_desert.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 50;
                passThrough = 0.5;
            };
        };
    };
};

class ls_gar_desertHologram_helmet: ls_gar_desert_helmet {
    author = AUTHOR;
    displayName = "Clone Desert Trooper Helmet [Hologram]";

    model = QPATHTOF(helmets\desert\ls_cloneHelmet_desert_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\desert\ls_cloneHelmet_desert_hologram.p3d);
    };
};
