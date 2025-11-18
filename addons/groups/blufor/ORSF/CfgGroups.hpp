    class orsf_baseInfantry {
    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

    class ORSF_infantry_squad {
            name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
            side = BLUFOR;
            faction = "ls_orsf";
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

            class Unit0 {
                side = BLUFOR;
                vehicle = "ls_orsf_trooper_Heavy";
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class Unit1: Unit0 {
                vehicle = "ls_orsf_trooper_AT";
                rank = "CORPORAL";
                position[] = {5, -5, 0};
            };
            class Unit2: Unit1 {
                vehicle = "ls_orsf_trooper";
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
                vehicle = "ls_orsf_trooper";
                position[] = {15, -15, 0};
            };
            class Unit6: Unit2 {
                vehicle = "ls_orsf_trooper_RTO";
                position[] = {-15, -15, 0};
            };
            class Unit7: Unit3 {
                vehicle = "ls_orsf_trooper_light";
                position[] = {20, -20, 0};
            };
        };

        class ORSF_weapons_squad: ORSF_infantry_squad {
            name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";

            class Unit0: Unit0 {};
            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper_Demo";
            };
            class Unit2: Unit2 {};
            class Unit3: Unit3 {
                vehicle = "ls_orsf_trooper_HeavyAA";
            };
            class Unit4: Unit4 {};
            class Unit5: Unit5 {
                vehicle = "ls_orsf_trooper_HeavyAT";
            };
            class Unit6: Unit6 {};
            class Unit7: Unit7 {};
        };

        class ORSF_infantry_team: ORSF_infantry_squad {
            name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";

            class Unit0: Unit0 {};
            class Unit1: Unit1 {};
            class Unit2: Unit2 {};
            class Unit3: Unit3 {};
        };

        class ORSF_at_team: ORSF_infantry_team {
            name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

            class Unit0: Unit0 {};
            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper_HeavyAT";
            };
            class Unit2: Unit2 {
                vehicle = "ls_orsf_trooper_AT";
            };
            class Unit3: Unit3 {
                vehicle = "ls_orsf_trooper_AT";
            };
        };

        class ORSF_aa_team: ORSF_at_team {
            name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

            class Unit0: Unit0 {};
            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper_AT";
            };
            class Unit2: Unit2 {
                vehicle = "ls_orsf_trooper_HeavyAA";
            };
            class Unit3: Unit3 {
                vehicle = "ls_orsf_trooper_HeavyAA";
            };
        };

        class ORSF_support_team: ORSF_infantry_team {
            name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";

            class Unit0: Unit0 {};
            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper";
            };
            class Unit2: Unit2 {
                vehicle = "ls_orsf_trooper_light";
            };
            class Unit3: Unit3 {
                vehicle = "ls_orsf_trooper_light";
            };
        };

        class ORSF_eod_team: ORSF_infantry_team {
            name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";

            class Unit0: Unit0 {};
            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper_Demo";
            };
            class Unit2: Unit2 {
                vehicle = "ls_orsf_trooper_Demo";
            };
            class Unit3: Unit3 {
                vehicle = "ls_orsf_trooper_Demo";
            };

        };

        class ORSF_mg_team: ORSF_infantry_team {
            name = "Support Gunner Team";

            class Unit0: Unit0 {};
            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper_Demo";
            };
            class Unit2: Unit2 {
                vehicle = "ls_orsf_trooper_Demo";
            };
        };

        class ORSF_infantry_sentry: ORSF_aa_team {
            name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

            class Unit0: Unit0 {
                rank = "CORPORAL";
            };

            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper";
                rank = "PRIVATE";
            };
        };

        class ORSF_sniper_team: ORSF_infantry_squad {
            name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";

            class Unit0: Unit0 {
                vehicle = "ls_orsf_trooper_Sniper";
            };
            class Unit1: Unit1 {
                vehicle = "ls_orsf_trooper_Heavy";
            };
        };
    };
