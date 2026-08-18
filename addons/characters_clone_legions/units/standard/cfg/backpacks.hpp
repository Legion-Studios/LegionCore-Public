class ls_cloneBackpack_rocket;
class ls_cloneBackpack_rocket_predef_heavyAT: ls_cloneBackpack_rocket {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_plx1_at,2);
        MAG_XX(ls_magazine_plx1_ap,2);
    };
};

class ls_cloneBackpack_rocket_predef_heavyAA: ls_cloneBackpack_rocket {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_plx1_aa,4);
    };
};

class ls_cloneBackpack_heavy;
class ls_cloneBackpack_heavy_predef_demo: ls_cloneBackpack_heavy {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_explosive_detpack_magazine,5);
        MAG_XX(APERSBoundingMine_Range_Mag,2);
        MAG_XX(IEDLandBig_Remote_Mag,1);
    };
    class TransportItems {
        ITEM_XX(MineDetector,1);
    };
};
