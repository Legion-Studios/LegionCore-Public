class HitPoints: HitPoints {
    class HitHull: HitHull {
        armor=1.8;
        material=-1;
        name = "hit_hull_point";
        visual = "-";
        armorComponent = "hit_hull";
        passThrough=1;
        minimalHit = 0.2;
        explosionShielding = 0.2;
        radius = 0.3;
    };
    class HitEngine: HitEngine {
        armor = 0.4;
        material=-1;
        name = "hit_engine_point";
        visual = "-";
        armorComponent = "hit_engine";
        passThrough = 0.2;
        minimalHit = 0.2;
        explosionShielding = 0.2;
        radius = 0.3;
    };
    class HitFuel: HitHull {
        armor = 0.3;
        armorComponent = "hit_fuel";
        explosionShielding = 0.6;
        material = -1;
        minimalHit = 0.1;
        name = "hit_fuel_point";
        passThrough = 0.1;
        radius = 0.3;
        visual = "-";
    };
    class HitLTrack: HitHull {
        armor = 0.5;
        name = "hitpoint_track_l";
        depends = "HitHull * 0.1";
        explosionShielding = 1.44;
        minimalHit = 0.08;
    };

    class HitRTrack: HitLTrack {
        name = "hitpoint_track_r";
    };
};
