class ls_orsfVest_trooper: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Special Tactics Trooper Vest";

    model = QPATHTOF(vests\trooper\ls_vest_orsf_trooper.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\trooper\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\trooperVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\trooper\ls_vest_orsf_trooper.p3d);
        hiddenSelections[] = {"camo"};
        containerClass = "Supply140";
        mass = 15;
    };
};

class ls_orsfVest_trooper_alt: ls_orsfVest_trooper {
    author = AUTHOR;
    displayName = "Special Tactics Trooper Vest (Alternate)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\trooper\data\camo_alt_co.paa)
    };
};

DEPRECATED(ls_vest_orsf_trooper_alt,ls_orsfVest_trooper_alt);
