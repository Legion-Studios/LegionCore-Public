class CfgVehicles {
    class Items_base_F;
    class ace_explosives_place: Items_base_F {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    #include "explosives\CfgVehicles.hpp"
    #include "mines\CfgVehicles.hpp"

    class ls_mandalorian_demo_backpack;
    class ls_mandalorianBackpack_heavy_predef_demo: ls_mandalorian_demo_backpack {
        class TransportItems {
            ITEM_XX(ACE_M26_Clacker,1);
            ITEM_XX(ACE_Clacker,1);
            ITEM_XX(ACE_defusalKit,1);
        };
    };

    class ls_droidBackpack_b1;
    class ls_droidBackpack_b1_predef_saboteur: ls_droidBackpack_b1 {
        class TransportItems {
            ITEM_XX(ACE_defusalKit,1);
            ITEM_XX(ACE_M26_Clacker,1);
            ITEM_XX(ACE_Clacker,1);
        };
    };

    class ls_jabiimBackpack_nimbusCommando;
    class ls_jabiimBackpack_nimbusCommando_predef_demo: ls_jabiimBackpack_nimbusCommando {
        class TransportItems {
            ITEM_XX(ACE_defusalKit,1);
            ITEM_XX(ACE_M26_Clacker,1);
            ITEM_XX(ACE_Clacker,1);
        };
    };

    class ls_orsfBackpack_trooper;
    class ls_orsfBackpack_trooper_predef_demo: ls_orsfBackpack_trooper {
        class TransportItems {
            ITEM_XX(ACE_defusalKit,1);
            ITEM_XX(ACE_M26_Clacker,1);
            ITEM_XX(ACE_Clacker,1);
        };
    };

    class ls_supplies_emptyResupply;
    class ls_supplies_eodResupply: ls_supplies_emptyResupply {
        class TransportItems {
            ITEM_XX(ACE_defusalKit,5);
            ITEM_XX(ACE_M26_Clacker,5);
            ITEM_XX(ACE_Clacker,5);
        };
    };
};
