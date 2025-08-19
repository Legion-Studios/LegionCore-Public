class ls_mandalorianBackpack: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Backpack";

    model = QPATHTOF(backpacks\standard\ls_backpack_mandalorian.p3d);
    hiddenSelections[] = {
        "camo1",
        "bag",
        "bomb",
        "pouches"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\camo1_co.paa),
        QPATHTOF(backpacks\standard\data\camo1_co.paa),
        "",
        ""
    };
    picture = QPATHTOF(data\ui\standardBackpack_ui_ca.paa);
};

class ls_mandalorian_standard_backpack: ls_mandalorianBackpack {  // Deprecated
    scope = 1;
};

class ls_mandalorianBackpack_demo: ls_mandalorianBackpack {
    author = AUTHOR;
    displayName = "Mandalorian Demopack";
    maximumload = 320;
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\camo1_co.paa),
        "",
        QPATHTOF(backpacks\standard\data\camo1_co.paa),
        ""
    };
};

class ls_mandalorian_demo_backpack: ls_mandalorianBackpack_demo {  // Deprecated
    scope = 1;
};

class ls_mandalorianBackpack_heavy: ls_mandalorianBackpack {
    author = AUTHOR;
    displayName = "Mandalorian Heavy Daypack";
    maximumload = 380;
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\camo1_co.paa),
        QPATHTOF(backpacks\standard\data\camo1_co.paa),
        "",
        QPATHTOF(backpacks\standard\data\camo1_co.paa)
    };
};

class ls_mandalorianBackpack_predef_standard: ls_mandalorianBackpack {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_westar35c,4);
        MAG_XX(ls_magazine_westar35sa,4);
    };
    class TransportItems {
        ITEM_XX(FirstAidKit,3);
    };
};

class ls_mandalorianBackpack_heavy_predef_heavy: ls_mandalorianBackpack_heavy {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_westar35c,6);
        MAG_XX(ls_magazine_westar35sa,4);
        MAG_XX(ls_magazine_westar35s_scatter,3);
        MAG_XX(ls_grenade_n20_magazine,2);
    };
    class TransportItems {
        ITEM_XX(FirstAidKit,3);
    };
};

class ls_mandalorianBackpack_heavy_predef_supportGunner: ls_mandalorianBackpack_heavy {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_zh73,10);
        MAG_XX(ls_magazine_westar35sa,4);
    };
    class TransportItems {
        ITEM_XX(FirstAidKit,3);
    };
};

class ls_mandalorianBackpack_heavy_predef_engineer: ls_mandalorianBackpack_heavy {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_westar35c,4);
        MAG_XX(ls_magazine_westar35sa,2);
        // MAG_XX(3Rnd Red Smoke,1);
    };

    class TransportItems {
        ITEM_XX(FirstAidKit,3);
        ITEM_XX(ToolKit,1);
        ITEM_XX(MineDetector,1);
    };
};

class ls_mandalorianBackpack_demo_predef_demo: ls_mandalorian_demo_backpack {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_3Rnd_40mw_IM41,10);
        MAG_XX(ls_explosive_detpack_magazine,5);
        MAG_XX(ls_grenade_n20_magazine,8);
    };

    class TransportItems {
        ITEM_XX(MineDetector,1);
    };
};
