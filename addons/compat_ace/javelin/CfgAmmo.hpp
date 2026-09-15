class ace_missileGuidance_type_Javelin;

class CfgAmmo {
    class M_Titan_AT;
    class ls_missile_at_base: M_Titan_AT {
        manuverability = 0;
        class ace_missileGuidance: ace_missileGuidance_type_Javelin {};
    };

    class M_Titan_AP;
    class ls_missile_ap_base: M_Titan_AP {
        manuverability = 0;
        class ace_missileGuidance: ace_missileGuidance_type_Javelin {};
    };

    class M_Titan_AA;
    class ls_missile_aa_base: M_Titan_AA {
        manuverability = 0;
        class ace_missileGuidance: ace_missileGuidance_type_Javelin {};
    };
    // Our SACLOS uses vanilla guidance

    class ls_missile_plx1_at: ls_missile_at_base {
        class ace_missileGuidance: ace_missileGuidance {
            enabled = 1;
        };
    };
    class ls_missile_plx1_ap: ls_missile_ap_base {
        class ace_missileGuidance: ace_missileGuidance {
            enabled = 1;
        };
    };
    class ls_missile_plx1_aa: ls_missile_aa_base {
        class ace_missileGuidance: ace_missileGuidance {
            enabled = 1;
        };
    };

    class ls_missile_e60r_at: ls_missile_at_base {
        class ace_missileGuidance: ace_missileGuidance {
            enabled = 1;
        };
    };
    class ls_missile_e60r_ap: ls_missile_ap_base {
        class ace_missileGuidance: ace_missileGuidance {
            enabled = 1;
        };
    };
    class ls_missile_e60r_aa: ls_missile_aa_base {
        class ace_missileGuidance: ace_missileGuidance {
            enabled = 1;
        };
    };
};
