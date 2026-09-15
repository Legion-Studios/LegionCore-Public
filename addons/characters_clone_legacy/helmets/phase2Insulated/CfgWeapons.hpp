class ls_gar_phase2Insulated_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper Insulated Phase 2 Helmet";

    model = QPATHTOF(helmets\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2Insulated\data\helmet_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d);
        hiddenSelections[] = {"camo1"};
    };
};
