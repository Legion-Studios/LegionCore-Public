class ls_gar_medic_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Medic Vest";

    model = QPATHTOF(vests\medic\ls_gar_medic_vest.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\medic\data\heavy_accessories_medic_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_medic_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\medic\ls_gar_medic_vest.p3d);
        hiddenSelections[] = {"camo1"};
        containerClass = "Supply100";
        mass = 2;
    };
};

class ls_gar_cfr_vest: ls_gar_medic_vest {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone CFR Vest";

    model = QPATHTOF(vests\medic\ls_gar_cfr_vest.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_cfr_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\medic\ls_gar_cfr_vest.p3d);
        hiddenSelections[] = {"camo1", "rank"};
        containerClass = "Supply100";
        mass = 2;
    };
};
