class HitPoints: HitPoints {
    class HitHull {
        armor = 999;
        convexComponent = "hull_hit";
        depends = "Total";
        explosionShielding = 1;
        material = 51;
        name = "hull_hit";
        passThrough = 1;
        visual = "zbytek";
        radius = 0.01;
    };
    class HitFuel {
        convexcomponent = "fuel_hit";
        hitpoint = "fuel_hit";
        name = "fuel_hit";
        explosionShielding = 2;
        radius = 0.1;
        visual = "";
        passthrough = 0.1;
        minimalhit = 0.1;
        material = -1;
        armor = 0.5;
    };
    class HitEngine {
        armor = 0.25;
        convexComponent = "engine_hit";
        explosionShielding = 2;
        material = 51;
        name = "engine_hit";
        hitpoint = "engine_hit";
        passThrough = 1;
        visual = "";
        radius = 0.2;
    };
    class HitHRotor {
        armor = 3;
        convexComponent = "main_rotor_hit";
        explosionShielding = 2.5;
        material = 51;
        name = "main_rotor_hit";
        passThrough = 0.1;
        visual = "";
        radius = 0.01;
    };
    class HitVRotor {
        armor = 3;
        convexComponent = "tail_rotor_hit";
        explosionShielding = 6;
        material = 51;
        name = "tail_rotor_hit";
        passThrough = 0.3;
        visual = "";
        radius = 0.01;
    };
    class HitAvionics {
        armor = 1;
        convexComponent = "avionics_hit";
        explosionShielding = 2;
        material = 51;
        name = "avionics_hit";
        passThrough = 1;
        visual = "";
        radius = 0.5;
    };
};
