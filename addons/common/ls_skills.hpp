class ls_skills {
    class default {
        scope = 0;
        name = "";
        tooltip = "";
    };
    class medic: default {
        scope = 2;
        name = "$STR_A3_Medic";
        tooltip = CSTRING(skill_medic_tooltip);
    };
    class engineer: default {
        scope = 2;
        name = "$STR_B_Engineer_F0";
        tooltip = CSTRING(skill_engineer_tooltip);
    };
    class eod: default {
        scope = 2;
        name = "$STR_A3_C_IDAP_Man_EOD_01_F0";
        tooltip = CSTRING(skill_eod_tooltip);
    };
    class tech: default {
        scope = 2;
        name = CSTRING(skill_tech_name);
        tooltip = CSTRING(skill_tech_tooltip);
    };
    class pilot: default {
        scope = 2;
        name = "$STR_A3_C_man_pilot_F0";
        tooltip = CSTRING(skill_pilot_tooltip);
    };
    class crewman: default {
        scope = 2;
        name = "$STR_B_crew_F0";
        tooltip = CSTRING(skill_crewman_tooltip);
    };
};
