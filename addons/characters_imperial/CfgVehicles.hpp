class CfgVehicles {
    class ls_helmet_groundHolder_base;

    #include "helmets\army\CfgVehicles.hpp"
    #include "helmets\kepi\CfgVehicles.hpp"

    class O_Soldier_f;
    class ls_opfor_unit_base: O_Soldier_f {
        class HitPoints;
    };
    class ls_imperial_unit_base: ls_opfor_unit_base {
        faction = "ls_imperial";
        editorSubcategory = "ls_edsubcat_imperial_army";
        genericNames = "ls_imperialArmy";

        class HitPoints: HitPoints {
            class HitAbdomen;
            class HitArms;
            class HitBody;
            class HitChest;
            class HitDiaphragm;
            class HitHands;
            class HitLeftArm;
            class HitLeftLeg;
            class HitLegs;
            class HitNeck;
            class HitPelvis;
            class HitRightArm;
            class HitRightLeg;
        };

        weapons[] = {"ls_weapon_e11_scoped", THROW_PUT};
        respawnWeapons[] = {"ls_weapon_e11_scoped", THROW_PUT};
        magazines[] = {
            ITEM_4("ls_magazine_e11"),
            ITEM_2("SmokeShell"),
            ITEM_2("ls_grenade_n20_magazine")
        };
        respawnMagazines[] = {
            ITEM_4("ls_magazine_e11"),
            ITEM_2("SmokeShell"),
            ITEM_2("ls_grenade_n20_magazine")
        };
    };

    #include "uniforms\army\CfgVehicles.hpp"

    class ls_backpack_base;

    #include "equipment\chestrig\CfgVehicles.hpp"
    #include "equipment\shoulderPouch\CfgVehicles.hpp"
    #include "equipment\satchel\CfgVehicles.hpp"
    #include "units\imperial.hpp"
};
