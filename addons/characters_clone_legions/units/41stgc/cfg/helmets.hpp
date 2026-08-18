LEGACY_P1_HELMET(41stgc,trooper,41st GC);
LEGACY_P1_HELMET(41stgc,draa,41st GC [Draa]);
LEGACY_P1_HELMET(41stgc,gree,41st GC [Gree]);
// P2_HELMET(41stgc,trooper,41st GC);
// P2_HELMET_NEW(41stgc,gree,41st GC [Gree]);

class ls_cloneHelmet_phase2_41stgc_trooper: ls_gar_phase2_helmet {
    author = AUTHOR;
    displayName = "Clone Trooper Helmet (41st GC)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41stgc\data\helmets\trooper_phase2_camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase2\data\visor_co.paa)
    };
};

class ls_cloneHelmet_phase2_41stgc_gree: ls_gar_phase2_helmet {
    author = AUTHOR;
    displayName = "Clone Trooper Helmet (41st Gree)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41stgc\data\helmets\gree_phase2_camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase2\data\visor_co.paa)
    };
};
