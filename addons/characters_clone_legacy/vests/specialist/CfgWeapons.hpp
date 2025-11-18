class ls_gar_specialist_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Specialist Vest";

    model = QPATHTOF(vests\specialist\ls_gar_specialist_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_light_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\specialist\ls_gar_specialist_vest.p3d);
        containerClass = "Supply60";
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 80;
    };
};
