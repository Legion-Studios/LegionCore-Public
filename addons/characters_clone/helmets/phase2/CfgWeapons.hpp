class ls_cloneHelmet_phase2: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_helmet);

    model = QPATHTOF(helmets\phase2\ls_helmet_clone_p2.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2\data\helmet_co.paa),
        QPATHTOF(helmets\phase2\data\visor_co.paa)
    };
    picture = QPATHTOF(data\ui\phase2Helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase2\ls_helmet_clone_p2.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
    };
};
