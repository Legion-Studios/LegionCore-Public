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

    // Future proofing for when we have a custom model
    class ls_reinsertTerminal: Items_base_F {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Reinsert Terminal";

        editorcategory = "ls_edcat_statics";
        editorsubcategory = "ls_edsubcat_electronics";

        model = QPATHTOF(computer\ls_prop_smallComputer.p3d);
        hiddenselections[] = {
            "camo1", "camo2",
            "terminal1", "terminal2",
            "terminal3", "terminal4"
        };
        hiddenselectionstextures[] =  {
            QPATHTOF(computer\data\small\body_co.paa),
            QPATHTOF(computer\data\small\controls_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_smallComputer.jpg);

        vehicleClass = "Structures";
        simulation = "thingx";
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
