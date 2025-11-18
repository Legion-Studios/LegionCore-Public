class cis_specialOperations: cis_baseInfantry {
    name = "Special Operations";

    class specops_bx_fireteam: base_b1_fireteam {
        class Unit0: Unit0 {
            vehicle = "ls_droid_bx_captain";
        };
        class Unit1: Unit1 {
            vehicle = "ls_droid_bx";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_bx_assassain";
        };
        class Unit3: Unit3 {
            vehicle = "ls_droid_bx";
        };
    };

    class specops_bx_diplomaticEscort: specops_bx_fireteam {
        name = "Diplomatic Escort";
        ls_dispenser_available = -1;

        class Unit0: Unit0 {
            vehicle = "ls_droid_bx_diplomat";
        };
        class Unit1: Unit1 {
            vehicle = "ls_droid_bx_diplomat";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_bx_diplomat";
        };
    };

    class specops_bx_citadelGuard: specops_bx_fireteam {
        name = "Citadel Guard";
        ls_dispenser_available = -1;

        class Unit0: Unit0 {
            vehicle = "ls_droid_bx_security";
        };
        class Unit1: Unit1 {
            vehicle = "ls_droid_bx_security";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_bx_security";
        };
    };
};
