class ls_cloneHelmet_phase1: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase1_helmet);

    model = QPATHTOF(helmets\phase1\ls_helmet_clone_p1.p3d);
    hiddenSelections[] = {
        "helmet",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase1\data\helmet_co.paa),
        QPATHTOF(helmets\phase1\data\visor_co.paa)
    };
    picture = QPATHTOF(data\ui\phase1Helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase1\ls_helmet_clone_p1.p3d);
        hiddenSelections[] = {
            "helmet",
            "visor"
        };
    };
};
