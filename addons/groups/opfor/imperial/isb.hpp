class imperial_baseInfantry_ISB {
    name = "Infantry (ISB)";

    class base_imperial_ISB_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
        side = OPFOR;
        faction = "LS_imperial";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

        class Unit0 {
            side = OPFOR;
            vehicle = "ls_imperial_army_squadleader_ISB";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_imperial_army_armored_ISB";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_imperial_army_heavy_ISB";
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class Unit3: Unit2 {
            position[] = {10, -10, 0};
        };
    };


    class base_imperial_ISB_squad: base_imperial_ISB_fireteam {
        name = "Squad";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_ISB";
            rank="PRIVATE";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_armored_ISB";
            rank = "CORPORAL";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at_ISB";
        };
        class Unit4: Unit0 {
            vehicle = "ls_imperial_army_marksman_ISB";
            position[] = {-10, -10, 0};
        };
        class Unit5: Unit2 {
            vehicle = "ls_imperial_army_heavy_ISB";
            rank = "CORPORAL";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit3 {
            vehicle = "ls_imperial_army_armored_ISB";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_imperial_army_armored_ISB";
            position[] = {20, -20, 0};
        };
    };

    class base_imperial_ISB_at: base_imperial_ISB_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_ISB";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_at_ISB";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at_ISB";
        };
    };

    class base_imperial_ISB_aa: base_imperial_ISB_at {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_HeavyAA_ISB";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_HeavyAA_ISB";
        };
    };

    class base_imperial_ISB_sentry: base_imperial_ISB_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_armored_ISB";
            rank = "CORPORAL";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_ISB";
            rank = "PRIVATE";
        };
    };

    class base_imperial_ISB_marksmanPair: base_imperial_ISB_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_marksman_ISB";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_marksman_ISB";
        };
    };

    class base_imperial_ISB_mgTeam: base_imperial_ISB_fireteam {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_isb";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_heavy_isb";
        };
    };
};
