// Unit, type, display name
#define P1_HELMET(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneHelmet_phase1,LEGION,TYPE_OR_NAME): ls_cloneHelmet_phase1 { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 1 Helmet (DISPLAY_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\helmets\##TYPE_OR_NAME##_phase1_camo1_co.paa), \
            QPATHTOEF(characters_clone,helmets\phase1\data\visor_co.paa) \
        }; \
    }

#define P2_HELMET(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneHelmet_phase2,LEGION,TYPE_OR_NAME): ls_cloneHelmet_phase2 { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 2 Helmet (DISPLAY_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\helmets\##TYPE_OR_NAME##_phase2_camo1_co.paa), \
            QPATHTOEF(characters_clone,helmets\phase2\data\visor_co.paa) \
        }; \
    }

#define GM_HELMET(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneHelmet_galacticMarine,LEGION,TYPE_OR_NAME): ls_gar_phase2Insulated_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Galactic Marine Helmet (DISPLAY_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\helmets\##TYPE_OR_NAME##_galacticMarine_camo1_co.paa) \
        }; \
    }

#define SCOUT_HELMET(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneHelmet_scout,LEGION,TYPE_OR_NAME): ls_cloneHelmet_scout { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Scout Helmet (DISPLAY_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\helmets\##TYPE_OR_NAME##_scout_camo1_co.paa), \
            QPATHTOF(units\##LEGION##\data\helmets\##TYPE_OR_NAME##_scout_camo1_co.paa) \
        }; \
    }

#define ATRT_HELMET(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneHelmet_atrtDriver,LEGION,TYPE_OR_NAME): ls_cloneHelmet_atrtDriver { \
        author = AUTHOR; \
        displayName = QUOTE(Clone AT-RT Driver Helmet (DISPLAY_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\helmets\##TYPE_OR_NAME##_atrtDriver_camo1_co.paa), \
            QPATHTOF(units\##LEGION##\data\helmets\##TYPE_OR_NAME##_atrtDriver_camo1_co.paa) \
        }; \
    }

#define P1_UNIFORM(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneUniform_phase1,LEGION,TYPE_OR_NAME): ls_cloneUniform_phase2 { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 1 Armor (DISPLAY_NAME)); \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(TRIPLES(ls_clone_phase1,LEGION,TYPE_OR_NAME)); \
        }; \
    }
#define P1_UNIT(LEGION,TYPE_OR_NAME) \
    class TRIPLES(ls_clone_phase1,LEGION,TYPE_OR_NAME): ls_clone_phase2_base { \
        scope = 1; \
        uniformClass = QUOTE(TRIPLES(ls_cloneUniform_phase1,LEGION,TYPE_OR_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\uniforms\##TYPE_OR_NAME##_phase1_upper_co.paa), \
            QPATHTOF(units\##LEGION##\data\uniforms\##TYPE_OR_NAME##_phase1_lower_co.paa), \
            QPATHTOEF(characters_clone,uniforms\phase2\data\undersuit_co.paa) \
        }; \
    }

#define P2_UNIFORM(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneUniform_phase2,LEGION,TYPE_OR_NAME): ls_cloneUniform_phase2 { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 2 Armor (DISPLAY_NAME)); \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(TRIPLES(ls_clone_phase2,LEGION,TYPE_OR_NAME)); \
        }; \
    }
#define P2_UNIT(LEGION,TYPE_OR_NAME) \
    class TRIPLES(ls_clone_phase2,LEGION,TYPE_OR_NAME): ls_clone_phase2_base { \
        scope = 1; \
        uniformClass = QUOTE(TRIPLES(ls_cloneUniform_phase2,LEGION,TYPE_OR_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\uniforms\##TYPE_OR_NAME##_phase2_upper_co.paa), \
            QPATHTOF(units\##LEGION##\data\uniforms\##TYPE_OR_NAME##_phase2_lower_co.paa), \
            QPATHTOEF(characters_clone,uniforms\phase2\data\undersuit_co.paa) \
        }; \
    }

#define SCOUT_UNIFORM(LEGION,TYPE_OR_NAME,DISPLAY_NAME) \
    class TRIPLES(ls_cloneUniform_scout,LEGION,TYPE_OR_NAME): ls_cloneUniform_scout { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Scout Armor (DISPLAY_NAME)); \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(TRIPLES(ls_clone_scout,LEGION,TYPE_OR_NAME)); \
        }; \
    }
#define SCOUT_UNIT(LEGION,TYPE_OR_NAME) \
    class TRIPLES(ls_clone_scout,LEGION,TYPE_OR_NAME): ls_clone_scout_base { \
        scope = 1; \
        uniformClass = QUOTE(TRIPLES(ls_cloneUniform_scout,LEGION,TYPE_OR_NAME)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##LEGION##\data\uniforms\##TYPE_OR_NAME##_scout_camo1_co.paa), \
            QPATHTOF(units\##LEGION##\data\uniforms\##TYPE_OR_NAME##_scout_camo2_co.paa) \
        }; \
    }


// Legacy Armors
#define LEGACY_P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase1,var1,var2): ls_gar_phase1_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase1_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1\data\visor_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1\data\illum_co.paa) \
        }; \
    }

#define LEGACY_P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase2,var1,var2): ls_gar_phase2_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase2_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase2\data\visor_co.paa), \
        }; \
    }
#define LEGACY_PILOT_P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_pilotPhase1,var1,var2): ls_gar_phase1Pilot_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Pilot Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase1Pilot_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1Pilot\data\lifesupport_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1Pilot\data\visor_co.paa) \
        }; \
    }

#define LEGACY_PILOT_P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_pilotPhase2,var1,var2): ls_gar_phase2Pilot_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Pilot Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase2Pilot_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase2Pilot\data\visor_co.paa) \
        }; \
    }

#define LEGACY_AIRBORNE_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_airborne,var1,var2): ls_cloneHelmet_airborne { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Airborne Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_airborne_camo1_co.paa), \
            QPATHTOEF(characters_clone,helmets\airborne\data\camo1_co.paa) \
        }; \
    }

#define LEGACY_ARF_P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase1Arf,var1,var2): ls_gar_phase1Arf_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone ARF Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_arf_camo1_co.paa), \
            "", \
            QPATHTOEF(characters_clone_legacy,helmets\arf\data\helmet_co.paa) \
        }; \
    }

#define LEGACY_ARF_P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase2Arf,var1,var2): ls_gar_phase2Arf_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone ARF Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_arf_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arf\data\camo2_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arf\data\helmet_co.paa) \
        }; \
    }

#define LEGACY_ARC_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_arc,var1,var2): ls_gar_arc_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone ARC Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_arc_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arc\data\visor_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\arc\data\helmet_co.paa) \
        }; \
    }

#define LEGACY_ENGINEER_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_engineer,var1,var2): ls_gar_engineer_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Engineer Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_engineer_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\engineer\data\light_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\engineer\data\visor_co.paa) \
        }; \
    }

#define LEGACY_BARC_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_barc,var1,var2): ls_gar_barc_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone BARC Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_barc_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\barc\data\visor_co.paa) \
        }; \
    }

#define LEGACY_SPECOPS_P1_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase1SpecOp,var1,var2): ls_sob_phase1SpecOp_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Special Activities Phase 1 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase1SpecOp_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase1SpecOp\data\visor_co.paa) \
        }; \
    }

#define LEGACY_SPECOPS_P2_HELMET(var1,var2,var3) \
    class TRIPLES(ls_cloneHelmet_phase2SpecOp,var1,var2): ls_sob_phase2SpecOp_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Special Activities Phase 2 Helmet (##var3##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\##var1##\data\helmets\##var2##_phase2SpecOp_camo1_co.paa), \
            QPATHTOEF(characters_clone_legacy,helmets\phase2SpecOp\data\visor_co.paa) \
        }; \
    }
#define LEGACY_COMMANDO_HELMET(var1,var2) \
    class DOUBLES(ls_cloneHelmet_commando,var1): ls_sob_commando_helmet { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Commando Katarn I Helmet (##var2##)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\commandos\data\helmets\##var1##_camo1_co.paa), \
            QPATHTOF(units\commandos\data\helmets\##var1##_camo1_co.paa) \
        }; \
        EGVAR(activeCamo,camoItem) = "ls_sob_commando_helmet_activeCamo"; \
    }

#define LEGACY_PHASE2_UNIFORM(var1,var2,var3) \
    class TRIPLES(ls_cloneUniform,var1,var2): ls_gar_phase2_uniform { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Phase 2 Trooper Armor (##var3##)); \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(TRIPLES(ls_clone,var1,var2)); \
        }; \
    }

#define LEGACY_MARSHALCOMMANDER_UNIFORM(var1,var2,var3) \
    class TRIPLES(ls_cloneUniform_marshalCommander,var1,var2): ls_gar_marshalCommander_uniform { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Marshal Commander Armor (##var3##)); \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(TRIPLES(ls_clone_marshalCommander,var1,var2)); \
        }; \
    }

#define LEGACY_COMMANDO_UNIFORM(var1,var2) \
    class DOUBLES(ls_cloneUniform_commando,var1): ls_sob_commando_uniform { \
        author = AUTHOR; \
        displayName = QUOTE(Clone Commando Katarn I Armor (##var2##)); \
        EGVAR(activeCamo,camoItem) = "ls_sob_commando_uniform_activeCamo"; \
        class ItemInfo: ItemInfo { \
            uniformClass = QUOTE(DOUBLES(ls_clone_commando,var1)); \
        }; \
    }

#define DEFAULT_MAGS ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")
#define UNIT_CLASS_NAME(LEGION,PHASE,ROLE) ls_clone_##PHASE##_##LEGION##_##ROLE

#define HELMET_CLASS(LEGION,PHASE,TYPE_OR_NAME) ls_cloneHelmet_##PHASE##_##LEGION##_##TYPE_OR_NAME
#define TROOPER_HELMET(LEGION,PHASE) HELMET_CLASS(LEGION,PHASE,trooper)

#define UNIFORM_CLASS(LEGION,PHASE,TYPE_OR_NAME) ls_cloneUniform_##PHASE##_##LEGION##_##TYPE_OR_NAME
#define TROOPER_UNIFORM(LEGION,PHASE) UNIFORM_CLASS(LEGION,PHASE,trooper)

#define UNIT_COMMON(LEGION,PHASE,TYPE_OR_NAME) \
    scope = 2; \
    author = AUTHOR; \
    uniformClass = QUOTE(TROOPER_UNIFORM(LEGION,PHASE)); \
    faction = "ls_gar_legions"; \
    editorSubcategory = QUOTE(DOUBLES(ls_edsubcat_clone,LEGION)); \
    editorPreview = QPATHTOF(data\ui\editorPreviews\LEGION\UNIT_CLASS_NAME(LEGION,PHASE,TYPE_OR_NAME).jpg)

#define SPAWN_UNITS_FULL(LEGION,PHASE) \
    class UNIT_CLASS_NAME(LEGION,PHASE,DC15A): UNIT_CLASS_NAME(standard,phase2,DC15A) { \
        UNIT_COMMON(LEGION,PHASE,DC15A); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,DC15S): UNIT_CLASS_NAME(standard,phase2,DC15S) { \
        UNIT_COMMON(LEGION,PHASE,DC15S); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,breacher): UNIT_CLASS_NAME(standard,phase2,breacher) { \
        UNIT_COMMON(LEGION,PHASE,breacher); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,RTO): UNIT_CLASS_NAME(standard,phase2,RTO) { \
        UNIT_COMMON(LEGION,PHASE,RTO); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,supportGunner): UNIT_CLASS_NAME(standard,phase2,supportGunner) { \
        UNIT_COMMON(LEGION,PHASE,supportGunner); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,sniper): UNIT_CLASS_NAME(standard,phase2,sniper) { \
        UNIT_COMMON(LEGION,PHASE,sniper); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", QUOTE(TRIPLES(ls_cloneNVG,PHASE,visor)), LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", QUOTE(TRIPLES(ls_cloneNVG,PHASE,visor)), LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,AT): UNIT_CLASS_NAME(standard,phase2,AT) { \
        UNIT_COMMON(LEGION,PHASE,AT); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,heavyAT): UNIT_CLASS_NAME(standard,phase2,heavyAT) { \
        UNIT_COMMON(LEGION,PHASE,heavyAT); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,heavyAA): UNIT_CLASS_NAME(standard,phase2,heavyAA) { \
        UNIT_COMMON(LEGION,PHASE,heavyAA); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,demo): UNIT_CLASS_NAME(standard,phase2,demo) { \
        UNIT_COMMON(LEGION,PHASE,demo); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,medic): UNIT_CLASS_NAME(standard,phase2,medic) { \
        UNIT_COMMON(LEGION,PHASE,medic); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_basic", LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,sergeant): UNIT_CLASS_NAME(standard,phase2,sergeant) { \
        UNIT_COMMON(LEGION,PHASE,sergeant); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_recon", QUOTE(TRIPLES(ls_cloneNVG,PHASE,rangefinder)), LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_recon", QUOTE(TRIPLES(ls_cloneNVG,PHASE,rangefinder)), LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,lieutenant): UNIT_CLASS_NAME(standard,phase2,lieutenant) { \
        UNIT_COMMON(LEGION,PHASE,lieutenant); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_lieutenant", QUOTE(TRIPLES(ls_cloneNVG,PHASE,rangefinder)), LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_lieutenant", QUOTE(TRIPLES(ls_cloneNVG,PHASE,rangefinder)), LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,captain): UNIT_CLASS_NAME(standard,phase2,captain) { \
        UNIT_COMMON(LEGION,PHASE,captain); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_officer", QUOTE(TRIPLES(ls_cloneNVG,PHASE,rangefinder)), LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_officer", QUOTE(TRIPLES(ls_cloneNVG,PHASE,rangefinder)), LINKED_ITEMS_CLONE}; \
    }; \
    class UNIT_CLASS_NAME(LEGION,PHASE,commander): UNIT_CLASS_NAME(standard,phase2,commander) { \
        UNIT_COMMON(LEGION,PHASE,commander); \
        linkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_officer", QUOTE(TRIPLES(ls_cloneNVG,PHASE,commander)), LINKED_ITEMS_CLONE}; \
        respawnlinkedItems[] = {QUOTE(TROOPER_HELMET(LEGION,PHASE)), "ls_cloneVest_officer", QUOTE(TRIPLES(ls_cloneNVG,PHASE,commander)), LINKED_ITEMS_CLONE}; \
    }

#define SPAWN_UNITS_CLASSES(LEGION,PHASE) \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,DC15A)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,DC15S)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,breacher)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,RTO)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,supportGunner)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,sniper)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,AT)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,heavyAT)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,heavyAA)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,demo)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,medic)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,sergeant)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,lieutenant)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,captain)), \
    QUOTE(UNIT_CLASS_NAME(LEGION,PHASE,commander))
