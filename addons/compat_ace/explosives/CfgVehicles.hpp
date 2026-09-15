class CfgVehicles {
    class Items_base_F;
    class ace_explosives_place: Items_base_F {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    #include "explosives\CfgVehicles.hpp"
    #include "mines\CfgVehicles.hpp"

    // Add EOD items to pre-filled backpacks, adds `_predef_demo` to given class name
    ADD_DEMO_ITEMS(ls_cloneBackpack_heavy);
    ADD_DEMO_ITEMS(ls_mandalorianBackpack_demo);
    ADD_DEMO_ITEMS(ls_droidBackpack_b1_saboteur);
    ADD_DEMO_ITEMS(ls_jabiimBackpack_nimbusCommando);
    ADD_DEMO_ITEMS(ls_orsfBackpack_trooper);

    class ls_supplies_emptyResupply;
    class ls_supplies_eodResupply: ls_supplies_emptyResupply {
        DEMO_ITEMS(5);
    };
};
