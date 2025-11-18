class ls_gar_phase1Arf_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone P1 ARF helmet";
    model = QPATHTOF(helmets\arf\ls_gar_arf_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arf\data\helmet_co.paa),
        "",
        QPATHTOF(helmets\arf\data\helmet_co.paa)
    };
    picture = QPATHTOF(_ui\arf_phase1_helmet_ui_ca.paa);

    subItems[] = {
        "Integrated_NVG_TI_1_F"
    };

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\arf\ls_gar_arf_helmet.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "visor"
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

class ls_gar_phase1ArfHologram_helmet: ls_gar_phase1Arf_helmet {
    author = AUTHOR;
    displayName = "Clone P1 ARF Helmet [Hologram]";

    model = QPATHTOF(helmets\arf\ls_gar_arfHologram_helmet.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        "",
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\arf\ls_gar_arfHologram_helmet.p3d);
    };
};

class ls_gar_phase2Arf_helmet: ls_gar_phase1Arf_helmet {
    author = AUTHOR;
    displayName = "Clone Phase 2 ARF helmet";
    picture = QPATHTOEF(characters_clone_legacy,_ui\arf_phase2_helmet_ui_ca.paa);

    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arf\data\helmet_co.paa),
        QPATHTOF(helmets\arf\data\camo2_co.paa),
        QPATHTOF(helmets\arf\data\visor_co.paa)
    };
};

class ls_gar_phase2ArfHologram_helmet: ls_gar_phase1ArfHologram_helmet {
    author = AUTHOR;
    displayName = "Clone Phase 2 ARF Helmet [Hologram]";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
    };

    EGVAR(common,hideHead) = 1;
};
