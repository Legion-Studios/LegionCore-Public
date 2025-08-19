class ls_gar_arf_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone ARF Vest";

    model = QPATHTOF(vests\arf\ls_gar_arf_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_black_co.paa)
    };
    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\arf\ls_gar_arf_vest.p3d);
        containerClass = "Supply100";
        mass = 80;
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
    };
};
