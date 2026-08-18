class ls_orsfHelmet_trooper: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(trooper_helmet);

    model = QPATHTOF(helmets\trooper\ls_helmet_orsf_trooper.p3d);
    hiddenSelections[] = {"camo", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\trooper\data\camo1_co.paa),
        QPATHTOF(helmets\trooper\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\trooperHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = QPATHTOF(helmets\trooper\ls_helmet_orsf_trooper.p3d);
        hiddenSelections[] = {"camo", "visor"};
    };
};
