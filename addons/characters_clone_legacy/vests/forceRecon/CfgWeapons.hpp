class ls_gar_forceRecon_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Force Recon Vest";

    model = QPATHTOF(vests\forceRecon\ls_gar_forceRecon_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        "",
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_reconNCO_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\forceRecon\ls_gar_forceRecon_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        containerClass = "Supply100";
        mass = 80;
    };
};

class ls_gar_forceReconNCO_vest: ls_gar_forceRecon_vest {
    author = AUTHOR;
    displayName = "Clone Force Recon NCO Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
};

class ls_gar_forceReconNCO_alternate_vest: ls_gar_forceReconNCO_vest {
    author = AUTHOR;
    displayName = "Clone Force Recon NCO Alternate Vest";

    model = QPATHTOF(vests\forceRecon\ls_gar_forceReconNCO_alternate_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\arc\data\arc_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\forceRecon\ls_gar_forceReconNCO_alternate_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
    };
};

class ls_gar_forceReconOfficer_vest: ls_gar_forceRecon_vest {
    author = AUTHOR;
    displayName = "Clone Force Recon Officer Vest";

    model = QPATHTOF(vests\forceRecon\ls_gar_forceReconOfficer_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\forceRecon\ls_gar_forceReconOfficer_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class ls_gar_forceReconCommander_vest: ls_gar_forceRecon_vest {
    author = AUTHOR;
    displayName = "Clone Force Recon Commander Vest";

    model = QPATHTOF(vests\forceRecon\ls_gar_forceReconCommander_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\forceRecon\ls_gar_forceReconCommander_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    };
};

class ls_gar_forceReconLieutenant_vest: ls_gar_forceRecon_vest {
    author = AUTHOR;
    displayName = "Clone Force Recon Lieutenant Vest";

    model = QPATHTOF(vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\forceRecon\ls_gar_forceReconLieutenant_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};
