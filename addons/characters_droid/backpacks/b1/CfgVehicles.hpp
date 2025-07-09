class ls_droidBackpack_base: ls_backpack_base {
    scope = 0;

    tf_dialog = "ls_radios_droidLR";
    tf_encryptionCode = "tf_east_radio_code";
};

class ls_droidBackpack_b1: ls_droidBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "B1 Comlink Booster";

    model = QPATHTOF(backpacks\b1\ls_backpack_droid_b1.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_ui_ca.paa);
};

class ls_droidBackpack_b1_crew: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = "B1 Comlink Booster (Crew)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\crew_camo1_co.paa)};
};

class ls_droidBackpack_b1_geonosis: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = "B1 Comlink Booster (Geonosis)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis_camo1_co.paa)};
};

class ls_droidBackpack_b1_training: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = "B1 Comlink Booster (Training)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\training_camo1_co.paa)};
};

class ls_droidBackpack_b1_hologram: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = "B1 Comlink Booster (Hologram)";
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\data\hologram_camo1.rvmat)};
};

class ls_droidBackpack_b1_simulation: ls_droidBackpack_b1_hologram {
    author = AUTHOR;
    displayName = "B1 Comlink Booster (Simulation)";
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\redHologram_ca.paa)};
};

class ls_droidBackpack_b1_antenna: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = "Droid Antenna Array";
    model = QPATHTOF(backpacks\b1\ls_backpack_droid_b1_antenna.p3d);
    tf_hasLRradio = 1;
};

class ls_droidBackpack_b1_antenna_geonosis: ls_droidBackpack_b1_antenna {
    author = AUTHOR;
    displayName = "Droid Antenna Array (Geonosis)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis_camo1_co.paa)};
};

class ls_droidBackpack_b1_antenna_training: ls_droidBackpack_b1_antenna {
    author = AUTHOR;
    displayName = "Droid Antenna Array (Training)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\training_camo1_co.paa)};
};

class ls_droidBackpack_b1_antenna_hologram: ls_droidBackpack_b1_antenna {
    author = AUTHOR;
    displayName = "Droid Antenna Array (Hologram)";
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\data\hologram_camo1.rvmat)};
};

class ls_droidBackpack_b1_antenna_simulation: ls_droidBackpack_b1_antenna_hologram {
    author = AUTHOR;
    displayName = "Droid Antenna Array (Simulation)";
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\redHologram_ca.paa)};
};

class ls_droidBackpack_b1_predef_at: ls_droidBackpack_b1 {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
};

class ls_droidBackpack_b1_geonosis_predef_at: ls_droidBackpack_b1_geonosis {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
};

class ls_droidBackpack_b1_training_predef_at: ls_droidBackpack_b1_training {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
};

class ls_droidBackpack_b1_predef_heavyAT: ls_droidBackpack_b1 {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_at,1);
        MAG_XX(ls_magazine_e60r_ap,1);
    };
};

class ls_droidBackpack_b1_geonosis_predef_heavyAT: ls_droidBackpack_b1_geonosis {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_at,1);
        MAG_XX(ls_magazine_e60r_ap,1);
    };
};

class ls_droidBackpack_b1_training_predef_heavyAT: ls_droidBackpack_b1_training {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_at,1);
        MAG_XX(ls_magazine_e60r_ap,1);
    };
};

class ls_droidBackpack_b1_predef_heavyAA: ls_droidBackpack_b1 {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_aa,2);
    };
};

class ls_droidBackpack_b1_geonosis_predef_heavyAA: ls_droidBackpack_b1_geonosis {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_aa,2);
    };
};

class ls_droidBackpack_b1_training_predef_heavyAA: ls_droidBackpack_b1_training {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_aa,2);
    };
};

class ls_droidBackpack_b1_predef_saboteur: ls_droidBackpack_b1 {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_explosive_detpack_magazine,5);
        MAG_XX(APERSBoundingMine_Range_Mag,2);
        MAG_XX(IEDLandBig_Remote_Mag,1);
    };
    class TransportItems {
        ITEM_XX(MineDetector,1);
    };
};
