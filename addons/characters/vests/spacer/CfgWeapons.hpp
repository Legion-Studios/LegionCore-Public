class ls_vest_spacer: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Spacer Vest";

    model = QPATHTOF(vests\spacer\ls_vest_spacer.p3d);
    hiddenSelections[] = {
        "camo"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\spacer\data\camo_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\spacer\ls_vest_spacer.p3d);
        hiddenSelections[] = {
            "camo"
        };
    };
};

class ls_vest_spacer_holster: ls_vest_spacer {
    author = AUTHOR;
    displayName = "Spacer Vest (Holster)";
    model = QPATHTOF(vests\spacer\ls_vest_spacer_holster.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\spacer\ls_vest_spacer_holster.p3d);
    };
};
