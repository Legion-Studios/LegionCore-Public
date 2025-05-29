class CfgVehicles {
    class O_Soldier_f;
    class ls_opfor_unit_base: O_Soldier_f {
        class HitPoints;
    };
    class ls_droid_base: ls_opfor_unit_base {
        faction = "ls_cis";
        editorSubcategory = "ls_edsubcat_cis_standardDroids";

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";

        weapons[] = {"ls_weapon_e5", THROW_PUT};
        respawnWeapons[] = {"ls_weapon_e5", THROW_PUT};
        linkedItems[] = {LINKED_ITEMS_DROID};
        respawnLinkedItems[] = {LINKED_ITEMS_DROID};

        #include "cfg\droidSounds.hpp"

        class HitPoints: HitPoints {};
    };
    #include "uniforms\b1\CfgVehicles.hpp"
    #include "units\b1.hpp"
    #include "uniforms\b2\CfgVehicles.hpp"
    #include "uniforms\bx\CfgVehicles.hpp"
    #include "units\bx.hpp"

    class ls_helmet_groundHolder_base;
    #include "helmets\b1\CfgVehicles.hpp"

    class ls_backpack_base;
    #include "backpacks\b1\CfgVehicles.hpp"
};