class HitPoints: HitPoints {
    class HitHull: HitHull {
        armor = 0.8;
        material = -1;
        name = "hitpoint_hull";
        visual = "_hull";
        passThrough = 1;
        minimalHit = 0.14;
        explosionShielding = 2;
        radius = 0.25;
    };
    class HitEngine: HitEngine {
        armor = 1;
        material = -1;
        name = "hitpoint_engine";
        passThrough = 0.8;
        minimalHit = 0.24;
        explosionShielding = 1;
        radius = 0.33;
    };
    class HitFuel: HitFuel {
        armor = 1;
        material = -1;
        name = "hitpoints_fuel";
        passThrough = 0.8;
        minimalHit = 0.24;
        explosionShielding = 1;
        radius = 0.33;
    };
    class HitLTrack: HitLTrack {
        armor = 0.5;
        material = -1;
        name = "hitpoint_track_l";
        passThrough = 0;
        minimalHit = 0.08;
        explosionShielding = 1.44;
        radius = 0.3;
    };
    class HitRTrack: HitRTrack {
        armor = 0.5;
        material = -1;
        name = "hitpoint_track_r";
        passThrough = 0;
        minimalHit = 0.08;
        explosionShielding = 1.44;
        radius = 0.3;
    };
};
