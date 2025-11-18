class mandalorian_deathwatchInfantry {
    name = "Deathwatch";

    class deathwatch_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
        side = OPFOR;
        faction = "ls_cis";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

        class Unit0 {
            side = OPFOR;
            vehicle = "ls_mandalorian_deathwatchHeavy";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_mandalorian_deathwatchAT";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_mandalorian_deathwatchWarrior";
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class Unit3: Unit2 {
            position[] = {10, -10, 0};
        };
        class Unit4: Unit0 {
            position[] = {-10, -10, 0};
        };
        class Unit5: Unit1 {
            vehicle = "ls_mandalorian_deathwatchWarrior";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit2 {
            vehicle = "ls_mandalorian_deathwatchRTO";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_mandalorian_deathwatchMedic";
            position[] = {20, -20, 0};
        };
    };

    class deathwatch_weapons_squad: deathwatch_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchSupportGunner";
        };
        class Unit2: Unit2 {};
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_deathwatchHeavyAA";
        };
        class Unit4: Unit4 {};
        class Unit5: Unit5 {
            vehicle = "ls_mandalorian_deathwatchHeavyAT";
        };
        class Unit6: Unit6 {};
        class Unit7: Unit7 {};
    };

    class deathwatch_infantry_team: deathwatch_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {};
        class Unit3: Unit3 {};
    };

    class deathwatch_at_team: deathwatch_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchHeavyAT";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_deathwatchAT";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_deathwatchAT";
        };
    };

    class deathwatch_aa_team: deathwatch_at_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchAT";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_deathwatchHeavyAA";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_deathwatchHeavyAA";
        };
    };

    class deathwatch_support_team: deathwatch_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchWarrior";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_deathwatchMedic";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_deathwatchMedic";
        };
    };

    class deathwatch_eod_team: deathwatch_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchDemo";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_deathwatchDemo";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_deathwatchDemo";
        };

    };

    class deathwatch_mg_team: deathwatch_infantry_team {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchSupportGunner";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_deathwatchSupportGunner";
        };
    };

    class deathwatch_infantry_sentry: deathwatch_aa_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            rank = "CORPORAL";
        };
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchWarrior";
            rank = "PRIVATE";
        };
    };

    class deathwatch_sniper_team: deathwatch_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

        class Unit0: Unit0 {
            vehicle = "ls_mandalorian_deathwatchMarksman";
        };
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_deathwatchHeavy";
        };
    };
};
