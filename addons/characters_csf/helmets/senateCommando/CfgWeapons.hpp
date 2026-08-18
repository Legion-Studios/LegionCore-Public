class ls_csfHelmet_senateCommando: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(senateCommando_helmet);

    model = QPATHTOF(helmets\senateCommando\ls_helmet_csf_senateCommando.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\senateCommando\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\senateCommandoHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\senateCommando\ls_helmet_csf_senateCommando.p3d);
        hiddenSelections[] = {"camo1"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 20;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 20;
                passThrough = 0.5;
            };
        };
    };
};

class ls_csfHelmet_senateCommando_guardsman: ls_csfHelmet_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_guardsman_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\senateCommando\data\guardsman_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\senateCommandoHelmet_guardsman_ui_ca.paa);
};

class ls_csfHelmet_senateCommando_lieutenant: ls_csfHelmet_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_lieutenant_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\senateCommando\data\lieutenant_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\senateCommandoHelmet_lieutenant_ui_ca.paa);
};

class ls_csfHelmet_senateCommando_captain: ls_csfHelmet_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_captain_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\senateCommando\data\captain_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\senateCommandoHelmet_captain_ui_ca.paa);
};

class ls_csfHelmet_senateCommando_hologram: ls_csfHelmet_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_hologram_helmet);

    model = QPATHTOF(helmets\senateCommando\ls_helmet_csf_senateCommando.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\senateCommando\ls_helmet_csf_senateCommando_hologram.p3d);
    };
};
