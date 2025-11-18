class ls_nvg_honorGuard: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayname = "Honor Guard Visor";

    model = QPATHTOF(equipment\visor\ls_nvg_honorGuard.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\goggles\data\goggles_ca.paa)};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\visor\ls_nvg_honorGuard.p3d);
        modelOff = QPATHTOF(equipment\visor\ls_nvg_honorGuard.p3d);
    };
};
