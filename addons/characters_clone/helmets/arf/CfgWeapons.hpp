class ls_cloneHelmet_arf: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(arf_helmet);

    model = QPATHTOF(helmets\arf\ls_helmet_clone_arf.p3d);
    hiddenSelections[] = {
        "helmet",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arf\data\helmet_co.paa),
        QPATHTOF(helmets\arf\data\helmet_co.paa)
    };
    picture = QPATHTOF(data\ui\arfHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\arf\ls_helmet_clone_arf.p3d);
        hiddenSelections[] = {
            "helmet",
            "visor"
        };
    };
};
