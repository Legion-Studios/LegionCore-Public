class ls_vest_spacer: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(spacer_vest);
    descriptionShort = "$STR_A3_SP_NOARMOR";

    model = QPATHTOF(vests\spacer\ls_vest_spacer.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\spacer\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\spacerVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\spacer\ls_vest_spacer.p3d);
        hiddenSelections[] = {"camo"};
        mass = 8;

        ARMOR_VEST_NONE;
    };
};

class ls_vest_spacer_holster: ls_vest_spacer {
    author = AUTHOR;
    displayName = CSTRING(spacer_holster_vest);
    model = QPATHTOF(vests\spacer\ls_vest_spacer_holster.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\spacer\data\camo_co.paa),
        QPATHTOF(vests\holster\data\pouches_maroon_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\spacer\ls_vest_spacer_holster.p3d);
        hiddenSelections[] = {"camo", "camo1"};
        mass = 13;
    };
};
