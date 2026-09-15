class ls_backpack_chestRig;
class ls_backpack_chestRigPouch;
DEPRECATED(ls_imperialBackpack_chestRig,ls_backpack_chestRig);
DEPRECATED(ls_imperialBackpack_chestRigPouch,ls_backpack_chestRigPouch);

class ls_imperialBackpack_predef_at: ls_backpack_chestRig {
    scope = 1;
    author = AUTHOR;
    maximumLoad = 200;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
};

class ls_imperialBackpack_predef_heavyAA: ls_backpack_chestRig {
    scope = 1;
    author = AUTHOR;
    maximumLoad = 200;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_aa,2);
    };
};

class ls_imperialBackpack_predef_heavyAT: ls_backpack_chestRig {
    scope = 1;
    author = AUTHOR;
    maximumLoad = 200;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_at,1);
        MAG_XX(ls_magazine_e60r_ap,1);
    };
};
