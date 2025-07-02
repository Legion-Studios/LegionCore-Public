class ls_gar_clone_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper Vest";

    model = QPATHTOF(vests\clone\ls_gar_clone_vest.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(_ui\uniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\clone\ls_gar_clone_vest.p3d);
        containerClass = "Supply40";
        mass = 2;
    };
};

class ls_gar_holster_vest: ls_gar_clone_vest {
    author = AUTHOR;
    displayName = "Clone Trooper Holster";

    model = QPATHTOF(vests\clone\ls_gar_holster_vest.p3d);
    hiddenSelections[] = {"r_thigh_holster"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\clone\ls_gar_holster_vest.p3d);
        hiddenSelections[] = {"r_thigh_holster"};
    };
};
