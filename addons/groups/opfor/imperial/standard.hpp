class imperial_baseInfantry {
    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

    class base_imperial_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
        side = OPFOR;
        faction = "LS_imperial";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

        class Unit0 {
            side = OPFOR;
            vehicle = "ls_imperial_army_squadleader";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_imperial_army_armored";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_imperial_army_heavy";
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class Unit3: Unit2 {
            position[] = {10, -10, 0};
        };
    };


    class base_imperial_squad: base_imperial_fireteam {
        name = "Squad";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy";
            rank="PRIVATE";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_armored";
            rank = "CORPORAL";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at";
        };
        class Unit4: Unit0 {
            vehicle = "ls_imperial_army_marksman";
            position[] = {-10, -10, 0};
        };
        class Unit5: Unit2 {
            vehicle = "ls_imperial_army_heavy";
            rank = "CORPORAL";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit3 {
            vehicle = "ls_imperial_army_armored";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_imperial_army_armored";
            position[] = {20, -20, 0};
        };
    };

    class base_imperial_at: base_imperial_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_at";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_at";
        };
    };

    class base_imperial_aa: base_imperial_at {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_HeavyAA";
        };
        class Unit3: Unit3 {
            vehicle = "ls_imperial_army_HeavyAA";
        };
    };

    class base_imperial_sentry: base_imperial_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_armored";
            rank = "CORPORAL";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy";
            rank = "PRIVATE";
        };
    };

    class base_imperial_marksmanPair: base_imperial_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

        class Unit0: Unit0 {
            vehicle = "ls_imperial_army_marksman";
        };
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_marksman";
        };
    };

    class base_imperial_mgTeam: base_imperial_fireteam {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_imperial_army_heavy";
        };
        class Unit2: Unit2 {
            vehicle = "ls_imperial_army_heavy";
        };
    };
};
