class ls_gar_rebreather_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Lightweight Rebreather";

    model = QPATHTOF(vests\rebreather\ls_gar_rebreather_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron", "tube", "rbsys"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2Pilot\data\helmet_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_recon_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\rebreather\ls_gar_rebreather_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron", "tube", "rbsys"};
        mass = 80;
        containerClass = "Supply100";
        vestType = "Rebreather";
    };
};

class ls_gar_rebreatherTubes_vest: ls_gar_rebreather_vest {
    scope = 1;
    author = AUTHOR;
    displayName = "Clone Lightweight Rebreather (Tubes)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2Pilot\data\helmet_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        DBUG_TEX_RED, // Missing textures
        DBUG_TEX_BLU
    };
};
