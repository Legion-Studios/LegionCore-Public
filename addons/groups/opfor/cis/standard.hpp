class cis_baseInfantry {
    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
    EGVAR(dispenser,available) = 1;

    class base_b1_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
        side = OPFOR;
        faction = "ls_cis";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

        class Unit0 {
            side = OPFOR;
            vehicle = "ls_droid_b1_squadLeader";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_droid_b1";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_droid_b1_heavy";
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class Unit3: Unit2 {
            position[] = {10, -10, 0};
        };
    };

    class base_security_team: base_b1_fireteam {
        name = "Security Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_droid_b1_security";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_b1_security";
        };
        class Unit3: Unit3 {
            vehicle = "ls_droid_b1_security";
        };
    };

    class base_b1_squad: base_b1_fireteam {
        name = "Squad";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_droid_b1_heavy";
            rank = "PRIVATE";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_b1";
            rank = "CORPORAL";
        };
        class Unit3: Unit3 {
            vehicle = "ls_droid_b1_at";
        };
        class Unit4: Unit0 {
            vehicle = "ls_droid_b1_marksman";
            position[] = {-10, -10, 0};
        };
        class Unit5: Unit2 {
            vehicle = "ls_droid_b1_heavy";
            rank = "CORPORAL";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit3 {
            vehicle = "ls_droid_b1";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_droid_b1";
            position[] = {20, -20, 0};
        };
    };

    class base_b1_at: base_b1_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_droid_b1_heavy";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_b1_at";
        };
        class Unit3: Unit3 {
            vehicle = "ls_droid_b1_at";
        };
    };

    class base_b1_aa: base_b1_at {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {
            vehicle = "ls_droid_b1_heavyAA";
        };
        class Unit3: Unit3 {
            vehicle = "ls_droid_b1_heavyAA";
        };
    };

    class base_b1_sentry: base_b1_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            vehicle = "ls_droid_b1";
            rank = "CORPORAL";
        };
        class Unit1: Unit1 {
            vehicle = "ls_droid_b1_heavy";
            rank = "PRIVATE";
        };
    };

    class base_b1_marksmanPair: base_b1_fireteam {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

        class Unit0: Unit0 {
            vehicle = "ls_droid_b1_marksman";
        };
        class Unit1: Unit1 {
            vehicle = "ls_droid_b1_marksman";
        };
    };

    class base_b1_mgTeam: base_b1_fireteam {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_droid_b1_heavy";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_b1_heavy";
        };
    };
};
