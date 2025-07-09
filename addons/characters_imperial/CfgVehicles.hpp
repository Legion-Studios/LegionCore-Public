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

        class HitPoints: HitPoints {};
    };

    #include "uniforms\army\CfgVehicles.hpp"

    class ls_backpack_base;

    #include "equipment\chestrig\CfgVehicles.hpp"
    #include "equipment\shoulderPouch\CfgVehicles.hpp"
    #include "equipment\satchel\CfgVehicles.hpp"

};
