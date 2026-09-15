class CfgVehicles {
    class B_Soldier_F;
    class ls_blufor_unit_base: B_Soldier_F {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE BLUFOR UNIT==";
        icon = "ls_iconMan";

        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};

        weapons[] = {THROW_PUT};
        respawnWeapons[] = {THROW_PUT};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {ITEM_3("FirstAidKit")};
        respawnItems[] = {ITEM_3("FirstAidKit")};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };

    class SoldierEB;
    class O_Soldier_base_F: SoldierEB {
        class HitPoints {
            class HitNeck;
            class HitPelvis;
            class HitAbdomen;
            class HitDiaphragm;
            class HitChest;
            class HitArms;
            class HitHands;
            class HitLegs;
        };
    };
    class O_Soldier_F: O_Soldier_base_F {};
    class ls_opfor_unit_base: O_Soldier_F {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE OPFOR UNIT==";
        icon = "ls_iconMan";

        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};

        weapons[] = {THROW_PUT};
        respawnWeapons[] = {THROW_PUT};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {ITEM_3("FirstAidKit")};
        respawnItems[] = {ITEM_3("FirstAidKit")};
        linkedItems[] = {};
        respawnLinkedItems[] = {};

        // O_Solider_base_F has stronger armor, so lower it back to what CAManBase uses for consistency
        class HitPoints: HitPoints {
            class HitNeck: HitNeck {
                armor = 1;
            };
            class HitPelvis: HitPelvis {
                passThrough = 0.8;
            };
            class HitAbdomen: HitAbdomen {
                armor = 1;
                passThrough = 0.8;
            };
            class HitDiaphragm: HitDiaphragm {
                armor = 1;
                passThrough = 0.8;
                explosionShielding = 6;
            };
            class HitChest: HitChest {
                armor = 1;
                passThrough = 0.8;
                explosionShielding = 6;
            };
            class HitArms: HitArms {
                armor = 3;
                passThrough = 1;
                explosionShielding = 1;
            };
            class HitHands: HitHands {
                armor = 3;
                passThrough = 1;
                explosionShielding = 1;
            };
            class HitLegs: HitLegs {
                armor = 3;
                passThrough = 1;
                explosionShielding = 1;
            };
            ADD_ACE_HITPOINTS;
        };
    };

    class I_Soldier_F;
    class ls_indfor_unit_base: I_Soldier_F {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE INDFOR UNIT==";
        icon = "ls_iconMan";

        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};

        weapons[] = {THROW_PUT};
        respawnWeapons[] = {THROW_PUT};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {ITEM_3("FirstAidKit")};
        respawnItems[] = {ITEM_3("FirstAidKit")};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };

    #include "uniforms\naval\CfgVehicles.hpp"
    #include "uniforms\pathfinder\CfgVehicles.hpp"
    #include "uniforms\spacer\CfgVehicles.hpp"

    class Civilian_F;
    class ls_civilian_unit_base: Civilian_F {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE CIVILIAN UNIT==";
        icon = "ls_iconMan";

        weapons[] = {THROW_PUT};
        respawnWeapons[] = {THROW_PUT};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {ITEM_3("FirstAidKit")};
        respawnItems[] = {ITEM_3("FirstAidKit")};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };

    class B_Kitbag_rgr;
    class ls_backpack_base: B_Kitbag_rgr {
        scope = 0;
        author = AUTHOR;
        displayName = "==BASE BACKPACK==";
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
        editorCategory = "ls_edcat_groundholders";

        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_range = 10000;
        tf_subtype = "digital_lr";
    };

    class B_Parachute;
    class Steerable_Parachute_F;
    #include "backpacks\hawkbat\CfgVehicles.hpp"
    #include "equipment\chestrig\CfgVehicles.hpp"
    #include "equipment\shoulderPouch\CfgVehicles.hpp"

    class ls_helmet_groundHolder_base;
    #include "helmets\gunslinger\CfgVehicles.hpp"
    #include "helmets\jockey\CfgVehicles.hpp"
    #include "helmets\m1\CfgVehicles.hpp"
    #include "helmets\reinforcedService\CfgVehicles.hpp"
    #include "helmets\service\CfgVehicles.hpp"
};
