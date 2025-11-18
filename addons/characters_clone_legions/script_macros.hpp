// Unit, type, display name
#define P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase1,var1,var2): ls_gar_phase1_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase1_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1\data\visor_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1\data\illum_co.paa) \
        }; \
    }

#define P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase2,var1,var2): ls_gar_phase2_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase2_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase2\data\visor_co.paa), \
        }; \
    }

#define P2_HELMET_NEW(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneHelmet_phase2,LEGION,TYPE_OR_NAME): ls_cloneHelmet_phase2 { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 2 Helmet (##DISPLAY_NAME##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##TYPE_OR_NAME##_phase2_camo1_co.paa), \
            QPATHTOEF(characters_clone,helmets\phase2\data\visor_co.paa) \
        }; \
    }

#define PILOT_P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_pilotPhase1,var1,var2): ls_gar_phase1Pilot_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Pilot Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase1Pilot_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1Pilot\data\lifesupport_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1Pilot\data\visor_co.paa) \
        }; \
    }

#define PILOT_P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_pilotPhase2,var1,var2): ls_gar_phase2Pilot_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Pilot Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase2Pilot_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase2Pilot\data\visor_co.paa) \
        }; \
    }

#define AIRBORNE_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_airborne,var1,var2): ls_cloneHelmet_airborne { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Airborne Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_airborne_camo1_co.paa), \
            QPATHTOEF(characters_clone,helmets\airborne\data\camo1_co.paa) \
        }; \
    }

#define ARF_P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase1Arf,var1,var2): ls_gar_phase1Arf_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone ARF Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_arf_camo1_co.paa), \
            "", \
            QPATHTOEF(characters_clone_legacy,helmets\arf\data\helmet_co.paa) \
        }; \
    }

#define ARF_P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase2Arf,var1,var2): ls_gar_phase2Arf_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone ARF Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_arf_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arf\data\camo2_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arf\data\helmet_co.paa) \
        }; \
    }

#define ARC_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_arc,var1,var2): ls_gar_arc_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone ARC Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_arc_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arc\data\visor_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arc\data\helmet_co.paa) \
        }; \
    }

#define ENGINEER_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_engineer,var1,var2): ls_gar_engineer_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Engineer Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_engineer_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\engineer\data\light_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\engineer\data\visor_co.paa) \
        }; \
    }

#define BARC_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_barc,var1,var2): ls_gar_barc_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone BARC Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_barc_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\barc\data\visor_co.paa) \
        }; \
    }

#define SPECOPS_P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase1SpecOp,var1,var2): ls_sob_phase1SpecOp_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Special Activities Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase1SpecOp_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1SpecOp\data\visor_co.paa) \
        }; \
    }

#define SPECOPS_P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase2SpecOp,var1,var2): ls_sob_phase2SpecOp_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Special Activities Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase2SpecOp_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase2SpecOp\data\visor_co.paa) \
        }; \
    }

#define GALACTIC_MARINE_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_galacticMarine,var1,var2): ls_gar_phase2Insulated_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Galactic Marine Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_galacticMarine_camo1_co.paa), \
        }; \
    }

#define COMMANDO_HELMET(var1,var2) \
    class DOUBLES(ls_cloneHelmet_commando,var1): ls_sob_commando_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Commando Katarn I Helmet (##var2##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\commandos\data\helmets\##var1##_camo1_co.paa), \
            QPATHTOF(units\commandos\data\helmets\##var1##_camo1_co.paa) \
        }; \
        EGVAR(activeCamo,camoItem) = "ls_sob_commando_helmet_activeCamo"; \
    }

#define PHASE2_UNIFORM(var1,var2,var3) \
    class TRIPLES(ls_cloneUniform,var1,var2): ls_gar_phase2_uniform { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 2 Trooper Armor (##var3##)); \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(TRIPLES(ls_clone,var1,var2)); \
        }; \
    }

#define MARSHALCOMMANDER_UNIFORM(var1,var2,var3) \
    class TRIPLES(ls_cloneUniform_marshalCommander,var1,var2): ls_gar_marshalCommander_uniform { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Marshal Commander Armor (##var3##)); \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(TRIPLES(ls_clone_marshalCommander,var1,var2)); \
        }; \
    }

#define COMMANDO_UNIFORM(var1,var2) \
    class DOUBLES(ls_cloneUniform_commando,var1): ls_sob_commando_uniform { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Commando Katarn I Armor (##var2##)); \
        EGVAR(activeCamo,camoItem) = "ls_sob_commando_uniform_activeCamo"; \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(DOUBLES(ls_clone_commando,var1)); \
        }; \
    }

#undef WEAPONS_LIST
#undef UNITS_LIST

#define WEAPONS_LIST ""

#define UNITS_LIST ""
