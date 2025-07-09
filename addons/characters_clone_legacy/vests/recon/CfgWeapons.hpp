class ls_gar_recon_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Recon Vest";

    model = QPATHTOF(vests\recon\ls_gar_recon_vest.p3d);
    hiddenSelections[] = {"camo1", "holster", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_recon_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\recon\ls_gar_recon_vest.p3d);
        hiddenSelections[] = {"camo1", "holster", "pauldron"};
        containerClass = "Supply40";
        mass = 80;
    };
};

class ls_gar_reconNCO_vest: ls_gar_recon_vest {
    author = AUTHOR;
    displayName = "Clone Recon NCO Vest";

    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_reconNCO_ca.paa);
};

class ls_gar_reconSurvival_vest: ls_gar_recon_vest {
    author = AUTHOR;
    displayName = "Clone Recon Survival Vest";

    model = QPATHTOF(vests\recon\ls_gar_reconSurvival_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "holster", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(uniforms\marshalCommander\data\camo1_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_reconNCO_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\recon\ls_gar_reconSurvival_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3", "holster", "ammo", "pauldron"};
    };
};

class ls_gar_reconOfficer_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Recon Officer Vest";

    model = QPATHTOF(vests\recon\ls_gar_reconOfficer_vest.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "pauldron"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_kama_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\recon\ls_gar_reconOfficer_vest.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "pauldron"
        };
        containerClass = "Supply40";
        mass = 80;
    };
};
