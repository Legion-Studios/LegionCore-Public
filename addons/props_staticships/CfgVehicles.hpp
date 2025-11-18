class CfgVehicles {
    class House_F;
    class ls_staticShip_base: House_F {
        scope = 0;
        scopeCurator = 0;
        author = AUTHOR;

        editorCategory = "ls_edcat_staticShips";
        editorSubcategory = "ls_edsubcat_staticShips";

        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};

        destrType = "DestructNo";
        featureType = FEATURETYPE_TERRAIN;
    };

    // Note that these only work in Eden
    class ls_staticShip_multiPart_base: ls_staticShip_base {
        class EventHandlers {
            init = "call BIS_fnc_Destroyer01Init";
            attributesChanged3DEN = "call BIS_fnc_Destroyer01PosUpdate";
            dragged3DEN = "call BIS_fnc_Destroyer01PosUpdate";
            registeredToWorld3DEN = "call BIS_fnc_Destroyer01EdenInit";
            unregisteredFromWorld3DEN = "call BIS_fnc_Destroyer01EdenDelete";
        };
    };

    class ls_staticShipPart_base: ls_staticShip_base {
        scope = 0;
        reversed = 0;
        icon = "iconObject_1x1";
        mapSize = 70;
        armor = 1000000000000000000;
        hideUnitInfo = 1;
        featureType = 2;

        class Hitpoints {};
        class DestructionEffects {};
        class Damage {
            tex[] = {};
            mat[] = {};
        };
        class AnimationSources {};
        class UserActions {};
    };

    #include "acclamator\CfgVehicles.hpp"
    #include "administrator\CfgVehicles.hpp"
    #include "c9Cruiser\CfgVehicles.hpp"
    #include "coreship\CfgVehicles.hpp"
    #include "dby827\CfgVehicles.hpp"
    #include "diamondClassCruiser\CfgVehicles.hpp"
    #include "fg40\CfgVehicles.hpp"
    #include "hardcell\CfgVehicles.hpp"
    #include "lucrehulk\CfgVehicles.hpp"
    #include "mandator\CfgVehicles.hpp"
    #include "munificent\CfgVehicles.hpp"
    #include "providence\CfgVehicles.hpp"
    #include "quasar\CfgVehicles.hpp"
    #include "recusant\CfgVehicles.hpp"
    #include "sdsStealth\CfgVehicles.hpp"
    #include "subjugator\CfgVehicles.hpp"
    #include "venator\CfgVehicles.hpp"
};
