class CfgVehicles {
    class ls_helmet_groundHolder_base;
    class B_Soldier_f;
    class ls_blufor_unit_base: B_Soldier_f {
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

    class O_Soldier_f;
    class ls_opfor_unit_base: O_Soldier_f {
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
    };

    class I_Soldier_f;
    class ls_indfor_unit_base: I_Soldier_f {
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
    // Helmet Groundholders
    #include "helmets\gunslinger\CfgVehicles.hpp"
    #include "helmets\jockey\CfgVehicles.hpp"
    #include "helmets\m1\CfgVehicles.hpp"
    #include "helmets\reinforcedService\CfgVehicles.hpp"
    #include "helmets\service\CfgVehicles.hpp"
};
