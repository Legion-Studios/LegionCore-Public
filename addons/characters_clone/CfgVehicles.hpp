class CfgVehicles {
    class ls_helmet_groundHolder_base;
    #include "helmets\airborne\CfgVehicles.hpp"
    #include "helmets\arc\CfgVehicles.hpp"
    #include "helmets\arf\CfgVehicles.hpp"
    #include "helmets\phase1\CfgVehicles.hpp"
    #include "helmets\phase2\CfgVehicles.hpp"
    #include "helmets\phase2Pilot\CfgVehicles.hpp"
    #include "helmets\phase3Pilot\CfgVehicles.hpp"
    #include "helmets\scout\CfgVehicles.hpp"
    #include "helmets\atrtDriver\CfgVehicles.hpp"

    class Man;
    class CAManBase: Man {
        class HitPoints {
            class HitPelvis;
            class HitAbdomen;
            class HitDiaphragm;
            class HitChest;
            class HitBody;
            class HitArms;
            class HitHands;
            class HitLegs;
        };
    };
    class SoldierWB: CAManBase {};
    class B_Soldier_base_F: SoldierWB {};
    class B_Soldier_F: B_Soldier_base_F {};
    class ls_blufor_unit_base: B_Soldier_F {};
    class ls_clone_unit_base: ls_blufor_unit_base {
        faction = "ls_gar";
        editorSubcategory = "ls_edsubcat_republic_clone_phase2";
        identityTypes[] = {"LanguageENG_F", "ls_head_clone"};
        genericNames = "ls_clone_p2_ct";
        nakedUniform = "lsd_gar_bodyGlove_uniform";

        linkedItems[] = {LINKED_ITEMS_CLONE};
        respawnLinkedItems[] = {LINKED_ITEMS_CLONE};
        weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
        respawnWeapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
        magazines[] = {ITEM_5("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s")};
        respawnMagazines[] = {ITEM_5("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s")};

        class HitPoints: HitPoints {
            class HitPelvis: HitPelvis {
                armor = 9;
            };
            class HitAbdomen: HitAbdomen {
                armor = 9;
            };
            class HitDiaphragm: HitDiaphragm {
                armor = 9;
            };
            class HitChest: HitChest {
                armor = 9;
            };
            class HitArms: HitArms {
                armor = 4;
            };
            class HitHands: HitHands {
                armor = 4;
            };
            class HitLegs: HitLegs {
                armor = 4;
            };
            // "depends" requires the hitpoint to be defined after the ones it uses
            class HitBody: HitBody {};
            ADD_ACE_HITPOINTS;
        };
    };
    #include "uniforms\jediCommander\CfgVehicles.hpp"
    #include "uniforms\phase2\CfgVehicles.hpp"
    #include "uniforms\scout\CfgVehicles.hpp"

    class ls_backpack_base;
    class ls_cloneBackpack_base: ls_backpack_base {
        tf_dialog = "ls_radios_cloneLR";
        tf_encryptionCode = "tf_west_radio_code";
    };
    #include "backpacks\arc\CfgVehicles.hpp"
    #include "backpacks\beltbag\CfgVehicles.hpp"
    #include "backpacks\cdv\CfgVehicles.hpp"
    #include "backpacks\jt12\CfgVehicles.hpp"
    #include "backpacks\miniLR\CfgVehicles.hpp"
    #include "backpacks\miniLR_attachment\CfgVehicles.hpp"
    #include "backpacks\standard\CfgVehicles.hpp"

    class ls_item_groundHolder_base;
    #include "equipment\binoculars\CfgVehicles.hpp"
};
