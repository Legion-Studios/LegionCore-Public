class ls_gar_kama_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper Kama";

    model = QPATHTOF(vests\officer\ls_gar_kama_vest.p3d);
    hiddenSelections[] = {"camo1", "rank"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_kama_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_gar_kama_vest.p3d);
        hiddenSelections[] = {"camo1", "rank"};
        containerClass = "Supply100";
        mass = 2;
    };
};

class ls_gar_kama_rank_vest: ls_gar_kama_vest {
    author = AUTHOR;
    displayName = "Clone Trooper Kama (Rank)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\rank\rank_co.paa)
    };
};

class ls_gar_kamaAntenna_vest: ls_gar_kama_vest {
    author = AUTHOR;
    displayName = "Clone Trooper Kama (Antenna)";

    model = QPATHTOF(vests\officer\ls_gar_kamaAntenna_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(uniforms\marshalCommander\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_gar_kamaAntenna_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class ls_gar_lieutenant_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Lieutenant Vest";

    model = QPATHTOF(vests\officer\ls_gar_lieutenant_vest.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_gar_lieutenant_vest.p3d);
        hiddenSelections[] = {"camo1"};
        containerClass = "Supply100";
        mass = 2;
    };
};

class ls_gar_officer_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Officer Vest";

    model = QPATHTOF(vests\officer\ls_gar_officer_vest.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_gar_officer_vest.p3d);
        hiddenSelections[] = {"camo1"};
        containerClass = "Supply100";
        mass = 2;
    };
};

class ls_gar_officer_black_vest: ls_gar_officer_vest {
    author = AUTHOR;
    displayName = "Clone Officer Vest (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_black_co.paa)
    };
};

class ls_gar_commander_vest: ls_gar_officer_vest {
    author = AUTHOR;
    displayName = "Clone Commander Vest";

    model = QPATHTOF(vests\officer\ls_gar_commander_vest.p3d);
    hiddenSelections[] = {"camo1", "rank"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_commander_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_gar_commander_vest.p3d);
        hiddenSelections[] = {"camo1", "rank"};
    };
};

class ls_gar_commander_black_vest: ls_gar_commander_vest {
    author = AUTHOR;
    displayName = "Clone Commander Vest (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_black_co.paa)
    };
};

class ls_gar_commander_rank_vest: ls_gar_commander_vest {
    author = AUTHOR;
    displayName = "Clone Commander Vest (Rank)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\rank\rank_co.paa)
    };
};
