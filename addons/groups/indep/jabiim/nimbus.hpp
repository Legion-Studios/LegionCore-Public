class NimbusCommando_infantry {
    name = "Nimbus Commandos";
    class NimbusCommando_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
        side = INDFOR;
        faction = "ls_jabiim";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

        class Unit0 {
            side = INDFOR;
            vehicle = "ls_jabiim_nimbusCommando_Heavy";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1: Unit0 {
            vehicle = "ls_jabiim_nimbusCommando_AT";
            rank = "CORPORAL";
            position[] = {5, -5, 0};
        };
        class Unit2: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando";
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
            vehicle = "ls_jabiim_nimbusCommando";
            position[] = {15, -15, 0};
        };
        class Unit6: Unit2 {
            vehicle = "ls_jabiim_nimbusCommando";
            position[] = {-15, -15, 0};
        };
        class Unit7: Unit3 {
            vehicle = "ls_jabiim_nimbusCommando";
            position[] = {20, -20, 0};
        };
    };

    class NimbusCommando_weapons_squad: NimbusCommando_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando_Heavy";
        };
        class Unit2: Unit2 {};
        class Unit3: Unit3 {
            vehicle = "ls_jabiim_nimbusCommando_heavyAA";
        };
        class Unit4: Unit4 {};
        class Unit5: Unit5 {
            vehicle = "ls_jabiim_nimbusCommando_heavyAT";
        };
        class Unit6: Unit6 {};
        class Unit7: Unit7 {};
    };

    class NimbusCommando_infantry_team: NimbusCommando_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {};
        class Unit2: Unit2 {};
        class Unit3: Unit3 {};
    };

    class NimbusCommando_at_team: NimbusCommando_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando_heavyAT";
        };
        class Unit2: Unit2 {
            vehicle = "ls_jabiim_nimbusCommando_AT";
        };
        class Unit3: Unit3 {
            vehicle = "ls_jabiim_nimbusCommando_AT";
        };
    };

    class NimbusCommando_aa_team: NimbusCommando_at_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando_AT";
        };
        class Unit2: Unit2 {
            vehicle = "ls_jabiim_nimbusCommando_heavyAA";
        };
        class Unit3: Unit3 {
            vehicle = "ls_jabiim_nimbusCommando_heavyAA";
        };
    };

    class NimbusCommando_eod_team: NimbusCommando_infantry_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando_Demo";
        };
        class Unit2: Unit2 {
            vehicle = "ls_jabiim_nimbusCommando_Demo";
        };
        class Unit3: Unit3 {
            vehicle = "ls_jabiim_nimbusCommando_Demo";
        };

    };

    class NimbusCommando_mg_team: NimbusCommando_infantry_team {
        name = "Support Gunner Team";

        class Unit0: Unit0 {};
        class Unit1: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando_Heavy";
        };
        class Unit2: Unit2 {
            vehicle = "ls_jabiim_nimbusCommando_Heavy";
        };
    };

    class NimbusCommando_sentry: NimbusCommando_aa_team {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        class Unit0: Unit0 {
            rank = "CORPORAL";
        };

        class Unit1: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando";
            rank = "PRIVATE";
        };
    };

    class NimbusCommando_sniper_team: NimbusCommando_infantry_squad {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";

        class Unit0: Unit0 {
            vehicle = "ls_jabiim_nimbusCommando_Sniper";
        };
        class Unit1: Unit1 {
            vehicle = "ls_jabiim_nimbusCommando_Sniper";
        };
    };
};
