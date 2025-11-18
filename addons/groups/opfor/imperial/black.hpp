class imperial_baseInfantry_blackcamo {
    name = "Infantry (Black)";

    class base_imperial_blackcamo_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
        side = OPFOR;
        faction = "LS_imperial";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

        class Unit0 {
            side = OPFOR;
            vehicle = "ls_imperial_army_squadleader_black";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_imperial_army_armored_black";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_imperial_army_heavy_black";
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class Unit3: Unit2 {
            position[] = {10, -10, 0};
        };
    };


    class base_imperial_blackcamo_squad: base_imperial_blackcamo_fireteam {
        name = "Squad";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_black";
            rank="PRIVATE";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_armored_black";
            rank = "CORPORAL";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at_black";
        };
        class Unit4: Unit0 {
            vehicle = "ls_imperial_army_marksman_black";
            position[] = {-10, -10, 0};
        };
        class Unit5: Unit2 {
            vehicle = "ls_imperial_army_heavy_black";
            rank = "CORPORAL";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit3 {
            vehicle = "ls_imperial_army_armored_black";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_imperial_army_armored_black";
            position[] = {20, -20, 0};
        };
    };

    class base_imperial_blackcamo_at: base_imperial_blackcamo_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_black";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_at_black";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at_black";
        };
    };

    class base_imperial_blackcamo_aa: base_imperial_blackcamo_at {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_HeavyAA_black";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_HeavyAA_black";
        };
    };

    class base_imperial_blackcamo_sentry: base_imperial_blackcamo_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_armored_black";
            rank = "CORPORAL";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_black";
            rank = "PRIVATE";
        };
    };

    class base_imperial_blackcamo_marksmanPair: base_imperial_blackcamo_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_marksman_black";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_marksman_black";
        };
    };

    class base_imperial_blackcamo_mgTeam: base_imperial_blackcamo_fireteam {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy_black";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_heavy_black";
        };
    };
};
