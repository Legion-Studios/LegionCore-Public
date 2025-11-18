class ls_orsfBackpack_trooper: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Special Tactics Trooper Backpack";

    model = QPATHTOF(backpacks\trooper\ls_backpack_orsf_trooper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\trooper\data\camo1_co.paa)};
    // picture = QPATHTOF(data\ui\trooperBackpack_ui_ca.paa);

    maximumLoad = 160;
};

class ls_orsfBackpack_trooper_radio: ls_orsfBackpack_trooper {
    scope = 2;
    author = AUTHOR;
    displayName = "Special Tactics Radio Backpack";

    model = QPATHTOF(backpacks\trooper\ls_backpack_orsf_trooper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\trooper\data\camo1_co.paa)};

    maximumLoad = 120;

    tf_hasLRradio = 1;
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
};
class ls_orsfBackpack_trooper_predef_at: ls_orsfBackpack_trooper {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
};
class ls_orsfBackpack_trooper_predef_heavyAT: ls_orsfBackpack_trooper {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_plx1_at,1);
        MAG_XX(ls_magazine_plx1_ap,1);
    };
};
class ls_orsfBackpack_trooper_predef_heavyAA: ls_orsfBackpack_trooper {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_plx1_aa,2);
    };
};
class ls_orsfBackpack_trooper_predef_demo: ls_orsfBackpack_trooper {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_explosive_detpack_magazine,5);
        MAG_XX(ls_grenade_n20_magazine,8);
    };

    class TransportItems {
        ITEM_XX(MineDetector,1);
    };
};
