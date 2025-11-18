class ls_gar_rex_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Captain Rex's Helmet (Uncolored)";

    model = QPATHTOF(helmets\rex\ls_gar_rex_helmet.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\rex\data\helmet_co.paa),
        QPATHTOF(helmets\rex\data\visor_co.paa)
    };
    picture = QPATHTOEF(characters_clone_legacy,_ui\rex_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\rex\ls_gar_rex_helmet.p3d);
        hiddenSelections[] = {"camo1", "visor"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};
