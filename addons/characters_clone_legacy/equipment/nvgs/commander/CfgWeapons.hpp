class lsd_gar_p2Commander_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Phase 2 Commander Visor";

    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_nvg.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        ""
    };
    modelOptics = QPATHTOF(equipment\nvgs\commander\lsd_gar_commander_optic.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\commander\data\optic_ca.paa);
    picture = QPATHTOF(_ui\icon_cloneVisor_cc_ca.paa);

    visionMode[] = {"Normal", "NVG", "TI"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_nvg.p3d);
        mass = 5;
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
    };
};

class lsd_gar_p2Commander_hologram_nvg: lsd_gar_p2Commander_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Commander Visor (Hologram)";

    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_hologram_nvg.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        ""
    };

    picture = QPATHTOF(_ui\icon_clone_holo_ccVisor_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_hologram_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_hologram_nvg.p3d);
    };
};

class lsd_gar_p2MarshalCommander_nvg: lsd_gar_p2Commander_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Marshal Commander Visor";

    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\marshal_commander_visor_ui_ca.paa);
};

class lsd_gar_p2MarshalCommander_hologram_nvg: lsd_gar_p2Commander_hologram_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Marshal Commander Visor (Hologram)";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    picture = QPATHTOF(_ui\icon_clone_holo_mcVisor_ca.paa);
};

class lsd_gar_p1Commander_nvg: lsd_gar_p2Commander_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 Commander Visor";

    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_p1Commander_nvg.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\lsd_gar_p1Commander_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\lsd_gar_p1Commander_nvg.p3d);
    };
};
class lsd_gar_p1Commander_hologram_nvg: lsd_gar_p1Commander_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 Commander Visor (Hologram)";
    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_p1Commander_hologram_nvg.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_holo_ccVisor_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\lsd_gar_p1Commander_hologram_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\lsd_gar_p1Commander_hologram_nvg.p3d);
    };
};

class lsd_gar_p1MarshalCommander_nvg: lsd_gar_p1Commander_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 Marshal Commander Visor";

    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_p1Commander_nvg.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };
};

class lsd_gar_p1MarshalCommander_hologram_nvg: lsd_gar_p1Commander_hologram_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 Marshal Commander Visor (Hologram)";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_holo_mcVisor_ca.paa);
};

class lsd_gar_heavy_nvg: lsd_gar_p2Commander_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Heavy Visor";

    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_heavy_nvg.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };

    visionMode[] = {"Normal", "NVG"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\lsd_gar_heavy_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\lsd_gar_heavy_nvg.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class lsd_gar_p2Commander_v2_nvg: lsd_gar_p2Commander_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Commander Visor (Antenna + Flashlight)";

    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_v2_nvg.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };

    visionMode[] = {"Normal", "NVG"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_v2_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_v2_nvg.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class lsd_gar_p2Commander_v3_nvg: lsd_gar_p2Commander_v2_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Commander Visor (Antenna)";

    model = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_v3_nvg.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_v3_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\lsd_gar_p2Commander_v3_nvg.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};
