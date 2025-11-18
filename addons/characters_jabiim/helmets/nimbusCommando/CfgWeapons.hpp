class ls_jabiimHelmet_nimbusCommando: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Nimbus Commando Helmet";

    model = QPATHTOF(helmets\nimbusCommando\ls_helmet_nimbusCommando.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\nimbusCommando\data\helmet_co.paa),
        QPATHTOF(helmets\nimbusCommando\data\visor_co.paa)
    };
    picture = QPATHTOF(data\ui\nimbusCommandoHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\nimbusCommando\ls_helmet_nimbusCommando.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 10;

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 8;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};

class ls_jabiimHelmet_nimbusCommando_grenadier: ls_jabiimHelmet_nimbusCommando {
    // WIP, missing some lods
    scope = 1;
    author = AUTHOR;
    displayName = "Nimbus Commando Helmet (Grenadier)";

    model = QPATHTOF(helmets\nimbusCommando\ls_helmet_nimbusCommando_grenadier.p3d);
    hiddenSelections[] = {"camo1", "camo2", "lobot"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\nimbusCommando\data\helmet_co.paa),
        QPATHTOF(helmets\nimbusCommando\data\visor2_co.paa),
        QPATHTOF(helmets\nimbusCommando\data\lobot_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\nimbusCommando\ls_helmet_nimbusCommando_grenadier.p3d);
        hiddenSelections[] = {"camo1", "camo2", "lobot"};
    };
};
