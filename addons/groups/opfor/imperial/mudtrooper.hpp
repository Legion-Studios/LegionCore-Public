class imperial_baseInfantry_mudtroopers {
    name = "Infantry (MudTroopers)";

    class base_imperial_mudtroopers_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
        side = OPFOR;
        faction = "LS_imperial";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

        class Unit0 {
            side = OPFOR;
            vehicle = "ls_imperial_army_squadleader_mudtrooper";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_imperial_army_armored_mudtrooper";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_imperial_army_heavy_mudtrooper";
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class Unit3: Unit2 {
            position[] = {10, -10, 0};
        };
    };


    class base_imperial_mudtroopers_squad: base_imperial_mudtroopers_fireteam {
        name = "Squad";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_mudtrooper";
            rank="PRIVATE";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_armored_mudtrooper";
            rank = "CORPORAL";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at_mudtrooper";
        };
        class Unit4: Unit0 {
            vehicle = "ls_imperial_army_marksman_mudtrooper";
            position[] = {-10, -10, 0};
        };
        class Unit5: Unit2 {
            vehicle = "ls_imperial_army_heavy_mudtrooper";
            rank = "CORPORAL";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit3 {
            vehicle = "ls_imperial_army_armored_mudtrooper";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_imperial_army_armored_mudtrooper";
            position[] = {20, -20, 0};
        };
    };

    class base_imperial_mudtroopers_at: base_imperial_mudtroopers_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_mudtrooper";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_at_mudtrooper";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at_mudtrooper";
        };
    };

    class base_imperial_mudtroopers_aa: base_imperial_mudtroopers_at {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_HeavyAA_mudtrooper";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_HeavyAA_mudtrooper";
        };
    };

    class base_imperial_mudtroopers_sentry: base_imperial_mudtroopers_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_armored_mudtrooper";
            rank = "CORPORAL";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_mudtrooper";
            rank = "PRIVATE";
        };
    };

    class base_imperial_mudtroopers_marksmanPair: base_imperial_mudtroopers_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_marksman_mudtrooper";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_marksman_mudtrooper";
        };
    };

    class base_imperial_mudtroopers_mgTeam: base_imperial_mudtroopers_fireteam {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_mudtrooper";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_heavy_mudtrooper";
        };
    };
};
