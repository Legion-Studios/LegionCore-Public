class ls_orsfVest_trooper: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(trooper_vest);

    model = QPATHTOF(vests\trooper\ls_vest_orsf_trooper.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\trooper\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\trooperVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\trooper\ls_vest_orsf_trooper.p3d);
        hiddenSelections[] = {"camo"};
    };
};

DEPRECATED(ls_orsfVest_trooper_alt,ls_orsfVest_trooper);
DEPRECATED(ls_vest_orsf_trooper_alt,ls_orsfVest_trooper_alt);
