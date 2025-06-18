armor = 400;
class HitPoints: HitPoints {
    class HitHull {
        armor = 2.5;
        convexComponent = "";
        depends = "0";
        explosionShielding = 3;
        material = -1;
        minimalHit = 0.01;
        name = "HitRotor1";
        passThrough = 0.1;
        radius = 0.45;
        visual = "Hit_RotorL";
    };
    class HitEngine {
        armor = 30;
        convexComponent = "HitEngine1";
        depends = "0";
        explosionShielding = 2;
        material = -1;
        minimalHit = 0.01;
        passThrough = 0.25;
        name = "HitEngine_point";
        visual = "HitEngine_destruct";
        radius = 0.5;
    };
    class HitEngine2: HitEngine {
        name = "HitEngine2_point";
        visual = "HitEngine2_destruct";
        convexComponent = "HitEngine2";
    };
    class HitEngine3: HitEngine {
        name = "HitEngine3_point";
        visual = "HitEngine3_destruct";
        convexComponent = "HitEngine3";
    };
    class HitEngine4: HitEngine {
        name = "HitEngine4_point";
        visual = "HitEngine4_destruct";
        convexComponent = "HitEngine4";
    };
    class HitEngine5: HitEngine {
        name = "HitEngine5_point";
        visual = "HitEngine5_destruct";
        convexComponent = "HitEngine5";
    };
    class HitEngine6: HitEngine {
        name = "HitEngine6_point";
        visual = "HitEngine6_destruct";
        convexComponent = "HitEngine6";
    };
};
