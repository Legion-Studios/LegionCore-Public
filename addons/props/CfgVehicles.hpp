class CBA_Extended_EventHandlers;

class CfgVehicles {
    class House_F;
    class FlagCarrier;
    class Reammobox_F;

    class Thing;
    class ls_static_base: Thing {
        scope = 0;
        author = AUTHOR;
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        editorPreview = "";
    };

    class ThingX;
    class Items_base_F: ThingX {
        class EventHandlers;
    };

    #include "bloodPools\CfgVehicles.hpp"
    #include "bottle\CfgVehicles.hpp"
    #include "commandPost\CfgVehicles.hpp"
    #include "computer\CfgVehicles.hpp"
    #include "disabledB1\CfgVehicles.hpp"
    #include "flags\CfgVehicles.hpp"
    #include "mse6\CfgVehicles.hpp"
    #include "radio\CfgVehicles.hpp"
    #include "resupply\CfgVehicles.hpp"
    #include "stimbox\CfgVehicles.hpp"
    #include "sweeper\CfgVehicles.hpp"
    #include "vulture\CfgVehicles.hpp"
};