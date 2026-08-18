#define SPACING(NUMBER) (NUMBER * 5)

#define GROUP_10(FACTION_NAME,SIDE_NUMBER,A,B,C,D,E,F,G,H,I,J) \
    class Unit0 { \
        side = SIDE_NUMBER; \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,A)); \
        rank = "SERGEANT"; \
        position[] = { 0, 0, 0 }; \
    }; \
    class Unit1: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,B)); \
        rank = "CORPORAL"; \
        position[] = { SPACING(1), SPACING(-1), 0 }; \
    }; \
    class Unit2: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,C)); \
        position[] = { SPACING(-1), SPACING(-1), 0 }; \
    }; \
    class Unit3: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,D)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(2), SPACING(-2), 0 }; \
    }; \
    class Unit4: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,E)); \
        position[] = { SPACING(-2), SPACING(-2), 0 }; \
    }; \
    class Unit5: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,F)); \
        position[] = { SPACING(3), SPACING(-3), 0 }; \
    }; \
    class Unit6: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,G)); \
        position[] = { SPACING(-3), SPACING(-3), 0 }; \
    }; \
    class Unit7: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,H)); \
        position[] = { SPACING(4), SPACING(-4), 0 }; \
    }; \
    class Unit8: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,I)); \
        position[] = { SPACING(-4), SPACING(-4), 0 }; \
    }; \
    class Unit9: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,J)); \
        position[] = { SPACING(5), SPACING(-5), 0 }; \
    }

#define GROUP_SQUAD(FACTION_NAME,SIDE_NUMBER,A,B,C,D,E,F,G,H,I) \
    class Unit0 { \
        side = SIDE_NUMBER; \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,A)); \
        rank = "SERGEANT"; \
        position[] = { SPACING(0), SPACING(0), 0 }; \
    }; \
    class Unit1: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,B)); \
        rank = "CORPORAL"; \
        position[] = { SPACING(1), SPACING(-1), 0 }; \
    }; \
    class Unit2: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,C)); \
        position[] = { SPACING(-1), SPACING(-1), 0 }; \
    }; \
    class Unit3: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,D)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(2), SPACING(-2), 0 }; \
    }; \
    class Unit4: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,E)); \
        position[] = { SPACING(-2), SPACING(-2), 0 }; \
    }; \
    class Unit5: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,F)); \
        position[] = { SPACING(3), SPACING(-3), 0 }; \
    }; \
    class Unit6: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,G)); \
        position[] = { SPACING(-3), SPACING(-3), 0 }; \
    }; \
    class Unit7: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,H)); \
        position[] = { SPACING(4), SPACING(-4), 0 }; \
    }; \
    class Unit8: Unit3 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,I)); \
        position[] = { SPACING(-4), SPACING(-4), 0 }; \
    }

#define GROUP_FIRETEAM(FACTION_NAME,SIDE_NUMBER,A,B,C,D,E) \
    class Unit0 { \
        side = SIDE_NUMBER; \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,A)); \
        rank = "CORPORAL"; \
        position[] = { SPACING(0), SPACING(0), 0 }; \
    }; \
    class Unit1: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,B)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(1), SPACING(-1), 0 }; \
    }; \
    class Unit2: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,C)); \
        position[] = { SPACING(-1), SPACING(-1), 0 }; \
    }; \
    class Unit3: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,D)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(2), SPACING(-2), 0 }; \
    }; \
    class Unit4: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,E)); \
        position[] = { SPACING(-2), SPACING(-2), 0 }; \
    }

#define GROUP_4TEAM(FACTION_NAME,SIDE_NUMBER,A,B,C,D) \
    class Unit0 { \
        side = SIDE_NUMBER; \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,A)); \
        rank = "CORPORAL"; \
        position[] = { SPACING(0), SPACING(0), 0 }; \
    }; \
    class Unit1: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,B)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(1), SPACING(-1), 0 }; \
    }; \
    class Unit2: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,C)); \
        position[] = { SPACING(-1), SPACING(-1), 0 }; \
    }; \
    class Unit3: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,D)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(2), SPACING(-2), 0 }; \
    }

#define GROUP_3TEAM(FACTION_NAME,SIDE_NUMBER,A,B,C) \
    class Unit0 { \
        side = SIDE_NUMBER; \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,A)); \
        rank = "CORPORAL"; \
        position[] = { SPACING(0), SPACING(0), 0 }; \
    }; \
    class Unit1: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,B)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(1), SPACING(-1), 0 }; \
    }; \
    class Unit2: Unit1 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,C)); \
        position[] = { SPACING(-1), SPACING(-1), 0 }; \
    }

#define GROUP_2TEAM(FACTION_NAME,SIDE_NUMBER,A,B) \
    class Unit0 { \
        side = SIDE_NUMBER; \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,A)); \
        rank = "CORPORAL"; \
        position[] = { SPACING(0), SPACING(0), 0 }; \
    }; \
    class Unit1: Unit0 { \
        vehicle = QUOTE(TRIPLES(MAINPREFIX,FACTION_NAME,B)); \
        rank = "PRIVATE"; \
        position[] = { SPACING(1), SPACING(-1), 0 }; \
    }

#define CLONE_GROUPS(LEGION,PHASE) \
    class QUADS(ls_gar,PHASE,LEGION,infantry_squad) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0"; \
        side = BLUFOR; \
        faction = "ls_gar_legions"; \
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; \
        GROUP_SQUAD(TRIPLES(clone,PHASE,LEGION),BLUFOR,sergeant,at,dc15a,medic,supportGunner,RTO,dc15s,dc15a,dc15s); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,infantry_team): QUADS(ls_gar,PHASE,LEGION,infantry_squad) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0"; \
        class Unit0: Unit0 {}; \
        class Unit1: Unit1 {}; \
        class Unit2: Unit2 {}; \
        class Unit3: Unit3 {}; \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,weapons_squad): QUADS(ls_gar,PHASE,LEGION,infantry_squad) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0"; \
        GROUP_SQUAD(TRIPLES(clone,PHASE,LEGION),BLUFOR,sergeant,demo,supportGunner,dc15a,medic,heavyAT,RTO,sniper,dc15s); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,at_team): QUADS(ls_gar,PHASE,LEGION,infantry_team) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0"; \
        GROUP_4TEAM(TRIPLES(clone,PHASE,LEGION),BLUFOR,sergeant,heavyAT,AT,AT); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,aa_team): QUADS(ls_gar,PHASE,LEGION,infantry_team) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0"; \
        GROUP_4TEAM(TRIPLES(clone,PHASE,LEGION),BLUFOR,sergeant,heavyAA,heavyAA,DC15A); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,support_team): QUADS(ls_gar,PHASE,LEGION,infantry_team) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0"; \
        GROUP_4TEAM(TRIPLES(clone,PHASE,LEGION),BLUFOR,sergeant,supportGunner,medic,medic); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,eod_team): QUADS(ls_gar,PHASE,LEGION,infantry_team) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0"; \
        GROUP_4TEAM(TRIPLES(clone,PHASE,LEGION),BLUFOR,sergeant,demo,demo,demo); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,supportGunner_team): QUADS(ls_gar,PHASE,LEGION,infantry_team) { \
        name = CSTRING(supportGunnerTeam); \
        GROUP_3TEAM(TRIPLES(clone,PHASE,LEGION),BLUFOR,sergeant,supportGunner,supportGunner); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,infantry_sentry): QUADS(ls_gar,PHASE,LEGION,infantry_team) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0"; \
        GROUP_2TEAM(TRIPLES(clone,PHASE,LEGION),BLUFOR,DC15A,DC15A); \
    }; \
    class QUADS(ls_gar,PHASE,LEGION,sniper_sentry): QUADS(ls_gar,PHASE,LEGION,infantry_team) { \
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0"; \
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa"; \
        GROUP_2TEAM(TRIPLES(clone,PHASE,LEGION),BLUFOR,sniper,DC15A); \
    }
