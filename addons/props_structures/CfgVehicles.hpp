class CfgVehicles {
    class House_F;

    class ls_House_F: House_F {
        scope = 0;
        scopeCurator = 0;
        author = AUTHOR;
        editorCategory = "ls_edcat_statics";
    };

    #include "FOB\CfgVehicles.hpp"
    #include "hallway\CfgVehicles.hpp"
    #include "landing_pad\CfgVehicles.hpp"
    #include "platforms\CfgVehicles.hpp"
    #include "stone_cover\CfgVehicles.hpp"
    #include "turbo_tank\CfgVehicles.hpp"
};
