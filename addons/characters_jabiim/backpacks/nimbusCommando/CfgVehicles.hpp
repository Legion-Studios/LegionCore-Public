class ls_jabiimBackpack_nimbusCommando: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Nimbus Commando Backpack";

    model = QPATHTOF(backpacks\nimbusCommando\ls_backpack_nimbusCommando.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\nimbusCommando\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\nimbusCommandoBackpack_ui_ca.paa);

    maximumLoad = 280;
    mass = 40;
};
class ls_jabiimBackpack_nimbusCommando_predef_at: ls_jabiimBackpack_nimbusCommando {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
};
class ls_jabiimBackpack_nimbusCommando_predef_heavyAT: ls_jabiimBackpack_nimbusCommando {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_at,1);
        MAG_XX(ls_magazine_e60r_ap,1);
    };
};
class ls_jabiimBackpack_nimbusCommando_predef_heavyAA: ls_jabiimBackpack_nimbusCommando {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_aa,2);
    };
};
class ls_jabiimBackpack_nimbusCommando_predef_demo: ls_jabiimBackpack_nimbusCommando {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_explosive_detpack_magazine,5);
        MAG_XX(ls_grenade_n20_magazine,8);
    };

    class TransportItems {
        ITEM_XX(MineDetector,1);
    };
};
