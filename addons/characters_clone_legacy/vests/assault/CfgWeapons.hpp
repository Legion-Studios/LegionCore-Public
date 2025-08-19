class ls_gar_assault_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Assault Vest";

    model = QPATHTOF(vests\assault\ls_gar_assault_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_light_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\assault\ls_gar_assault_vest.p3d);
        containerClass = "Supply40";
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 80;
    };
};
