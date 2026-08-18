class ls_droidBackpack_base: ls_backpack_base {
    scope = 0;
    tf_dialog = "ls_radios_droidLR";
    tf_encryptionCode = "tf_east_radio_code";
};

class ls_droidBackpack_b1: ls_droidBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_backpack);

    model = QPATHTOF(backpacks\b1\ls_backpack_droid_b1.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_ui_ca.paa);
};
class ls_droidBackpack_b1_geonosis: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_geonosis_ui_ca.paa);
};
class ls_droidBackpack_b1_training: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_training_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\training\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_training_ui_ca.paa);
};
class ls_droidBackpack_b1_advanced: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_advanced_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\advanced\camo1_co.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\data\advanced\camo1.rvmat)};
    picture = QPATHTOF(data\ui\b1Backpack_advanced_ui_ca.paa);
};

class ls_droidBackpack_b1_heavy: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_heavy_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\heavy_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_heavy_ui_ca.paa);
};
class ls_droidBackpack_b1_heavy_geonosis: ls_droidBackpack_b1_heavy {
    author = AUTHOR;
    displayName = CSTRING(b1_heavy_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\heavy_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_heavy_geonosis_ui_ca.paa);
};

class ls_droidBackpack_b1_grenadier: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\grenadier_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_grenadier_ui_ca.paa);
};
class ls_droidBackpack_b1_grenadier_geonosis: ls_droidBackpack_b1_grenadier {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\grenadier_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_grenadier_geonosis_ui_ca.paa);
};

class ls_droidBackpack_b1_saboteur: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_saboteur_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\saboteur_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_saboteur_ui_ca.paa);
};

class ls_droidBackpack_b1_firefighter: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_firefighter_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\firefighter_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_firefighter_ui_ca.paa);
};

class ls_droidBackpack_b1_crew: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_crew_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\crew_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_crew_ui_ca.paa);
};
class ls_droidBackpack_b1_crew_geonosis: ls_droidBackpack_b1_crew {
    author = AUTHOR;
    displayName = CSTRING(b1_crew_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\crew_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_crew_geonosis_ui_ca.paa);
};

class ls_droidBackpack_b1_marine: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_marine_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\marine_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_marine_ui_ca.paa);
};

class ls_droidBackpack_b1_engineer: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_engineer_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\engineer_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_engineer_ui_ca.paa);
};
class ls_droidBackpack_b1_engineer_geonosis: ls_droidBackpack_b1_engineer {
    author = AUTHOR;
    displayName = CSTRING(b1_engineer_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\engineer_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_engineer_geonosis_ui_ca.paa);
};

class ls_droidBackpack_b1_pilot: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_pilot_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\pilot_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_pilot_ui_ca.paa);
};
class ls_droidBackpack_b1_pilot_geonosis: ls_droidBackpack_b1_pilot {
    author = AUTHOR;
    displayName = CSTRING(b1_pilot_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\pilot_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_pilot_geonosis_ui_ca.paa);
};

class ls_droidBackpack_b1_security: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_security_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\security_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_security_ui_ca.paa);
};
class ls_droidBackpack_b1_security_geonosis: ls_droidBackpack_b1_security {
    author = AUTHOR;
    displayName = CSTRING(b1_security_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\security_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_security_geonosis_ui_ca.paa);
};

class ls_droidBackpack_b1_junkyard: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_junkyard_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\junkyard\camo1_co.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\data\junkyard\camo1.rvmat)};
    picture = QPATHTOF(data\ui\b1Backpack_junkyard_ui_ca.paa);
};


class ls_droidBackpack_b1_hologram: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_hologram_backpack);
    model = QPATHTOF(backpacks\b1\ls_backpack_droid_b1_hologram.p3d);
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\data\hologram\camo1.rvmat)};
};
class ls_droidBackpack_b1_simulation: ls_droidBackpack_b1_hologram {
    author = AUTHOR;
    displayName = CSTRING(b1_simulation_backpack);
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\redHologram_ca.paa)};
};

class ls_droidBackpack_b1_antenna: ls_droidBackpack_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_antenna_backpack);
    model = QPATHTOF(backpacks\b1\ls_backpack_droid_b1_antenna.p3d);
    picture = QPATHTOF(data\ui\b1Backpack_antenna_ui_ca.paa);
    tf_hasLRradio = 1;
};
class ls_droidBackpack_b1_antenna_geonosis: ls_droidBackpack_b1_antenna {
    author = AUTHOR;
    displayName = CSTRING(b1_antenna_geonosis_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\geonosis\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_antenna_geonosis_ui_ca.paa);
};
class ls_droidBackpack_b1_antenna_training: ls_droidBackpack_b1_antenna {
    author = AUTHOR;
    displayName = CSTRING(b1_antenna_training_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\training\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Backpack_antenna_training_ui_ca.paa);
};
class ls_droidBackpack_b1_antenna_advanced: ls_droidBackpack_b1_antenna {
    author = AUTHOR;
    displayName = CSTRING(b1_antenna_advanced_backpack);
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\data\advanced\camo1_co.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\data\advanced\camo1.rvmat)};
    picture = QPATHTOF(data\ui\b1Backpack_antenna_advanced_ui_ca.paa);
};

class ls_droidBackpack_b1_antenna_hologram: ls_droidBackpack_b1_antenna {
    author = AUTHOR;
    displayName = CSTRING(b1_antenna_hologram_backpack);
    model = QPATHTOF(backpacks\b1\ls_backpack_droid_b1_antenna_hologram.p3d);
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\data\hologram\camo1.rvmat)};
};
class ls_droidBackpack_b1_antenna_simulation: ls_droidBackpack_b1_antenna_hologram {
    author = AUTHOR;
    displayName = CSTRING(b1_antenna_simulation_backpack);
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\redHologram_ca.paa)};
};

class ls_droidBackpack_b1_marine_predef_at: ls_droidBackpack_b1_marine {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
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
class ls_droidBackpack_b1_advanced_predef_at: ls_droidBackpack_b1_advanced {
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
class ls_droidBackpack_b1_advanced_predef_heavyAT: ls_droidBackpack_b1_advanced {
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
class ls_droidBackpack_b1_advanced_predef_heavyAA: ls_droidBackpack_b1_advanced {
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_aa,2);
    };
};

class ls_droidBackpack_b1_saboteur_predef_demo: ls_droidBackpack_b1_saboteur {
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
class ls_droidBackpack_b1_advanced_predef_demo: ls_droidBackpack_b1_advanced {
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
