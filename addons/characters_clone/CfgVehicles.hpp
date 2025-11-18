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

    class B_Soldier_f;
    class ls_blufor_unit_base: B_Soldier_f {
        class HitPoints;
    };
    class ls_clone_unit_base: ls_blufor_unit_base {
        faction = "ls_gar";
        editorSubcategory = "ls_edsubcat_republic_clonesPhaseTwo";
        identityTypes[] = {"LanguageENG_F", "ls_head_clone"};
        genericNames = "ls_clone_p2_ct";
        nakedUniform = "lsd_gar_bodyGlove_uniform";

        linkedItems[] = {LINKED_ITEMS_CLONE};
        respawnLinkedItems[] = {LINKED_ITEMS_CLONE};
        weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
        respawnWeapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
        magazines[] = {ITEM_5("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s")};
        respawnMagazines[] = {ITEM_5("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s")};
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

    #include "units\pilot\CfgVehicles.hpp"
    #include "units\phase2\CfgVehicles.hpp"
    #include "units\scout\CfgVehicles.hpp"
};
