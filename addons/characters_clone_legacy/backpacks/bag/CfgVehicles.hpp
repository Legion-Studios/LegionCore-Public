class ls_gar_beltBag: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper Bags";

    model = QPATHTOF(backpacks\bag\ls_gar_beltBag_backpack.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\bag\bag_co.paa),
        QPATHTOF(vests\common\bag\bag_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_bag_ca.paa);

    maximumload = 100;
};

class ls_gar_beltBag_belt: ls_gar_beltBag {
    author = AUTHOR;
    displayName = "Clone Trooper Belt Bag";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\bag\bag_co.paa)
    };
};

class ls_gar_beltBag_leg: ls_gar_beltBag {
    author = AUTHOR;
    displayName = "Clone Trooper Leg Bag";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(vests\common\bag\bag_co.paa)
    };
};
