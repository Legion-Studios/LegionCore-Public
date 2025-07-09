class ls_gar_marine_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Marine Vest";

    model = QPATHTOF(vests\marine\ls_gar_marine_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "bandolier", "ammoLeft", "ammoRight"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\marine\data\camo1_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\marine\data\camo1_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\marine\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\marine\ls_gar_marine_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "bandolier", "ammoLeft", "ammoRight"};
        containerClass = "Supply100";
        mass = 80;
    };
};
