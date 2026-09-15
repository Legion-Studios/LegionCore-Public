class CfgFactionClasses {
    class ls_gar {
        displayName = CSTRING(faction_gar);
        side = BLUFOR;
        icon = QPATHTOEF(data,insignias\republic_ca.paa);
        flag = QPATHTOEF(data,flags\flag_republic_ca.paa);
    };

    class ls_gar_legions: ls_gar {
        displayName = CSTRING(faction_garLegions);
    };

    class ls_jedi {
        displayName = CSTRING(faction_jediOrder);
        side = BLUFOR;
        icon = QPATHTOEF(data,insignias\jedi_ca.paa);
        flag = QPATHTOEF(data,flags\flag_jedi_ca.paa);
    };

    class ls_csf {
        displayName = CSTRING(faction_csf);
        side = BLUFOR;
    };

    class ls_orsf {
        displayName = CSTRING(faction_orsf);
        side = BLUFOR;
    };

    class ls_cis {
        displayName = CSTRING(faction_cis);
        side = OPFOR;
        icon = QPATHTOEF(data,insignias\cis_ca.paa);
        flag = QPATHTOEF(data,flags\flag_cis_ca.paa);
    };

    class ls_mandalorians {
        displayName = CSTRING(faction_mandalorians);
        side = INDFOR;
        icon = QPATHTOEF(data,insignias\mandalorian_ca.paa);
        flag = QPATHTOEF(data,flags\flag_mandalorian_ca.paa);
    };

    class ls_civilians {
        displayName = CSTRING(faction_civilians);
        side = CIVILIAN;
    };

    class ls_pirates {
        displayName = CSTRING(faction_pirates);
        side = OPFOR;
    };

    class ls_mercenaries {
        displayName = CSTRING(faction_mercenaries);
        side = INDFOR;
    };

    class ls_memefor {
        displayName = CSTRING(faction_memefor);
        side = INDFOR;
    };

    class ls_jabiim {
        displayName = CSTRING(faction_jabiim);
        side = INDFOR;
    };

    class ls_imperial {
        displayName = CSTRING(faction_galacticEmpire);
        side = OPFOR;
        icon = QPATHTOEF(data,insignias\imperial_ca.paa);
        flag = QPATHTOEF(data,flags\flag_imperial_ca.paa);
    };

    class ls_rebel {
        displayName = CSTRING(faction_rebelAlliance);
        side = BLUFOR;
        icon = QPATHTOEF(data,insignias\rebelAlliance_ca.paa);
        flag = QPATHTOEF(data,flags\flag_rebelAlliance_ca.paa);
    };

    class ls_newRepublic {
        displayName = CSTRING(faction_newRepublic);
        side = BLUFOR;
    };
};
