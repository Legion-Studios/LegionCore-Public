class ls_gar_tacticalNCO_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Tactical NCO Vest";

    model = QPATHTOF(vests\tactical\ls_gar_tacticalNCO_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_reconNCO_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\tactical\ls_gar_tacticalNCO_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "pauldron"};
        mass = 80;
    };
};

class ls_gar_tacticalOfficer_vest: ls_gar_tacticalNCO_vest {
    author = AUTHOR;
    displayName = "Clone Tactical Officer Vest";

    model = QPATHTOF(vests\tactical\ls_gar_tacticalOfficer_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\tactical\ls_gar_tacticalOfficer_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class ls_gar_tacticalCommander_vest: ls_gar_tacticalOfficer_vest {
    author = AUTHOR;
    displayName = "Clone Tactical Commander Vest";

    model = QPATHTOF(vests\tactical\ls_gar_tacticalCommander_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\arc\data\arc_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\tactical\ls_gar_tacticalCommander_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
    };
};
