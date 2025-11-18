class cis_heavyInfantry: cis_baseInfantry {
    name = "Heavy Infantry";

    class heavy_b2_fireteam: base_b1_fireteam {
        class Unit0: Unit0 {
            vehicle = "ls_droid_b2";
        };
        class Unit1: Unit1 {
            vehicle = "ls_droid_b2";
        };
        class Unit2: Unit2 {
            vehicle = "ls_droid_b2";
        };
        class Unit3: Unit3 {
            vehicle = "ls_droid_b2";
        };
    };

    class heavy_b2_patrol: heavy_b2_fireteam {
        name = "Patrol";

        class Unit0: Unit0 {
            rank = "CORPORAL";
        };
        class Unit1: Unit1 {
            rank = "PRIVATE";
        };
    };
};
