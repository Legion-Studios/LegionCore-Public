class ls_gar_arc_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic ARC Helmet";

    model = QPATHTOF(helmets\arc\ls_gar_arc_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "illum"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arc\data\helmet_co.paa),
        QPATHTOF(helmets\arc\data\visor_co.paa),
        QPATHTOF(helmets\arc\data\helmet_co.paa)
    };
    picture = QPATHTOF(_ui\phase2_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\arc\ls_gar_arc_helmet.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "illum"
        };
        allowedSlots[] = {801, 901, 701, 605};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class ls_gar_arcHologram_helmet: ls_gar_arc_helmet {
    author = AUTHOR;
    displayName = "Republic ARC Helmet [Hologram]";

    model = QPATHTOF(helmets\arc\ls_gar_arcHologram_helmet.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\arc\ls_gar_arcHologram_helmet.p3d);
    };
};
