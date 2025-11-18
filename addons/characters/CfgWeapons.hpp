class CfgWeapons {
    class H_HelmetB;
    class H_HelmetO_ViperSP_hex_F: H_HelmetB {
        class ItemInfo;
    };
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE HELMET==";
        descriptionShort = "";

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        ace_hearing_hasEHP = 0;
        subItems[] = {};

        class ItemInfo: ItemInfo {
            author = AUTHOR; // BI define author, not used in-game but might as well
            modelSides[] = {ALL_SIDES};
            hiddenSelections[] = {};
            allowedSlots[] = {TYPE_HEADGEAR, TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};
            mass = 10;
        };
    };

    class Uniform_Base;
    class U_I_CombatUniform: Uniform_Base {
        class ItemInfo;
    };
    class ls_uniform_base: U_I_CombatUniform {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE UNIFORM==";
        descriptionShort = "";

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        // Done only in the case that we make future changes
        class ItemInfo: ItemInfo {
            uniformModel = "-";
            containerClass = "Supply100";
        };
    };

    #include "uniforms\naval\CfgWeapons.hpp"
    #include "uniforms\pathfinder\CfgWeapons.hpp"
    #include "uniforms\spacer\CfgWeapons.hpp"

    class Vest_NoCamo_Base;
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class ls_vest_base: V_PlateCarrier1_rgr {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE VEST==";
        descriptionShort = "";

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);


        class ItemInfo: ItemInfo {
            uniformModel = "";
            hiddenSelections[] = {};

            class HitpointsProtectionInfo {
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
            };
        };
    };

    #include "vests\flakJacket\CfgWeapons.hpp"
    #include "vests\holster\CfgWeapons.hpp"
    #include "vests\poncho\CfgWeapons.hpp"
    #include "vests\spacer\CfgWeapons.hpp"

    class Binocular;
    class NVGoggles: Binocular {
        class ItemInfo;
    };

    class ls_nvg_base: NVGoggles {
        scope = 0;
        author = AUTHOR;

        visionMode[] = {"Normal", "NVG"};
        thermalMode[] = {0, 1};

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformModel = "";
            hiddenSelections[] = {};
        };
    };

    class ls_nvg_invisible: ls_nvg_base {
        scope = 1;
        author = AUTHOR;

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelOptics = QPATHTOF(equipment\nvg\ls_optic_dummy.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};

        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(equipment\nvg\ls_optic_dummy.p3d);
            modelOff = QPATHTOF(equipment\nvg\ls_optic_dummy.p3d);
            hiddenSelections[] = {};
        };
    };
    #include "equipment\goggles\CfgWeapons.hpp"
    #include "equipment\visor\CfgWeapons.hpp"
    // Helmets
    #include "helmets\cqcm\CfgWeapons.hpp"
    #include "helmets\gunslinger\CfgWeapons.hpp"
    #include "helmets\jockey\CfgWeapons.hpp"
    #include "helmets\m1\CfgWeapons.hpp"
    #include "helmets\reinforcedService\CfgWeapons.hpp"
    #include "helmets\service\CfgWeapons.hpp"
};
