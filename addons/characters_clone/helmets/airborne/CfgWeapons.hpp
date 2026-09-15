class ls_cloneHelmet_airborne: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(airborne_helmet);

    model = QPATHTOF(helmets\airborne\ls_helmet_clone_airborne.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\airborne\data\camo1_co.paa),
        QPATHTOF(helmets\airborne\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\airborneHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\airborne\ls_helmet_clone_airborne.p3d);
        hiddenSelections[] = {"camo1", "visor"};
    };
};
