class mandalorian_traditionalInfantry {
    name = "Traditional Warriors";

    class traditional_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
        side = INDFOR;
        faction = "ls_mandalorians";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

        class Unit0 {
            side = INDFOR;
            vehicle = "ls_mandalorian_traditionalHeavy";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_mandalorian_traditionalAT";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_mandalorian_traditionalWarrior";
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
            vehicle = "ls_mandalorian_traditionalWarrior";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit2 {
            vehicle = "ls_mandalorian_traditionalRTO";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_mandalorian_traditionalMedic";
            position[] = {20, -20, 0};
        };
    };

    class traditional_weapons_squad: traditional_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalSupportGunner";
        };
        class Unit2: Unit2 {};
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_traditionalHeavyAA";
        };
        class Unit4: Unit4 {};
        class Unit5: Unit5 {
            vehicle = "ls_mandalorian_traditionalHeavyAT";
        };
        class Unit6: Unit6 {};
        class Unit7: Unit7 {};
    };

    class traditional_infantry_team: traditional_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {};
        class Unit3: Unit3 {};
    };

    class traditional_at_team: traditional_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalHeavyAT";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_traditionalAT";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_traditionalAT";
        };
    };

    class traditional_aa_team: traditional_at_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalAT";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_traditionalHeavyAA";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_traditionalHeavyAA";
        };
    };

    class traditional_support_team: traditional_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalWarrior";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_traditionalMedic";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_traditionalMedic";
        };
    };

    class traditional_eod_team: traditional_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalDemo";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_traditionalDemo";
        };
        class Unit3: Unit3 {
            vehicle = "ls_mandalorian_traditionalDemo";
        };

    };

    class traditional_mg_team: traditional_infantry_team {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalSupportGunner";
        };
        class Unit2: Unit2 {
            vehicle = "ls_mandalorian_traditionalSupportGunner";
        };
    };

    class traditional_infantry_sentry: traditional_aa_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            rank = "CORPORAL";
        };

        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalWarrior";
            rank = "PRIVATE";
        };
    };

    class traditional_sniper_team: traditional_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";

        class Unit0: Unit0 {
            vehicle = "ls_mandalorian_traditionalMarksman";
        };
        class Unit1: Unit1 {
            vehicle = "ls_mandalorian_traditionalHeavy";
        };
    };
};
