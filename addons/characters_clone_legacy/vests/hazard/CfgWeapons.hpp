class ls_gar_hazard_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Hazard Vest";

    model = QPATHTOF(vests\hazard\ls_gar_hazard_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_light_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\hazard\ls_gar_hazard_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        containerClass = "Supply100";
        mass = 80;
    };
};
