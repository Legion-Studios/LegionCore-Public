class ls_mandalorianBackpack_light: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Daypack";

    model = QPATHTOF(backpacks\light\ls_backpack_mandalorian_light.p3d);
    hiddenSelections[] = {
        "camo1",
        "bacta",
        "rto"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\light\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\lightBackpack_ui_ca.paa);
};

class ls_mandalorianBackpack_medic: ls_mandalorianBackpack_light {
    author = AUTHOR;
    displayName = "Mandalorian Medic Daypack";
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\light\data\camo1_medic_co.paa),
        QPATHTOF(backpacks\light\data\camo1_medic_co.paa)
    };
};

class ls_mandalorianBackpack_radio: ls_mandalorianBackpack_light {
    author = AUTHOR;
    displayName = "Mandalorian Radio Daypack";
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\light\data\camo1_co.paa),
        "",
        QPATHTOF(backpacks\light\data\camo1_co.paa)
    };

    tf_dialog = "ls_radios_cloneLR_mini";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode = "tf_independent_radio_code";
    tf_hasLRradio = 1;
    tf_range = 20000;
    tf_subtype = "digital_lr";
};

class ls_mandalorianBackpack_predef_marksman: ls_mandalorianBackpack_light {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_mercenarySniper,6);
        MAG_XX(ls_magazine_westar35sa,4);
    };
    class TransportItems {
        ITEM_XX(FirstAidKit,3);
    };
};

class ls_mandalorianBackpack_radio_predef_rto: ls_mandalorianBackpack_radio {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_westar35c,3);
        MAG_XX(ls_magazine_westar35sa,4);
    };
    class TransportItems {
        ITEM_XX(FirstAidKit,3);
    };
};

class ls_mandalorianBackpack_medic_predef_medic: ls_mandalorianBackpack_medic {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_westar35c,3);
        MAG_XX(ls_magazine_westar35sa,4);
    };

    class TransportItems {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(Medikit,1);
    };
};

// Deprecated
class ls_mandalorian_light_backpack: ls_mandalorianBackpack_light {
    scope = 1;
};
class ls_mandalorian_medic_backpack: ls_mandalorianBackpack_medic {
    scope = 1;
};
class ls_mandalorian_rto_backpack: ls_mandalorianBackpack_radio {
    scope = 1;
};
