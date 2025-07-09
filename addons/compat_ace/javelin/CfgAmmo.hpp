class ace_missileGuidance_type_Javelin;

class CfgAmmo {
    class M_Titan_AT;
    class ls_missile_at_base: M_Titan_AT {
        class ace_missileGuidance: ace_missileGuidance_type_Javelin {};
    };

    class M_Titan_AP;
    class ls_missile_ap_base: M_Titan_AP {
        class ace_missileGuidance: ace_missileGuidance_type_Javelin {};
    };

    class M_Titan_AA;
    class ls_missile_aa_base: M_Titan_AA {
        class ace_missileGuidance: ace_missileGuidance_type_Javelin {};
    };

    #include "cfg\ammo\plx.hpp"
    #include "cfg\ammo\e60r.hpp"
};
