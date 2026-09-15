class HitPoints: HitPoints {
    class HitLFWheel: HitLFWheel {
        armor = 300;
        passThrough = 0;
    };
    class HitLF2Wheel: HitLF2Wheel {
        armor = 300;
        passThrough = 0;
    };

    class HitRFWheel: HitRFWheel {
        armor = 300;
        passThrough = 0;
    };
    class HitRF2Wheel: HitRF2Wheel {
        armor = 300;
        passThrough = 0;
    };

    class HitFuel {
        armor = 0.6;
        material = -1;
        name = "hit_fueltank";
        armorComponent = "hit_fueltank";
        visual = "";
        passThrough = 0.2;
    };
    class HitEngine: HitEngine {
        armor = 0.50;
        material = 51;
        explosionShielding = 2;
        name = "hit_engine_main";
        armorComponent = "hit_engine_main";
        passThrough = 0.4;
        radius = 0.2;
    };
    class HitEngine2: HitEngine {
        armorComponent = "hit_engine_roof";
    };
    class HitEngine3: HitEngine {
        name = "hit_engine_m";
        armorComponent = "hit_engine_m";
    };
    class HitBody: HitBody {
        name = "body";
        visual = "camo1";
        passThrough = 1;
    };

    class HitGlass1: HitGlass1 {
        armor = 0.25;
    };
    class HitGlass2: HitGlass2 {
        armor = 0.25;
    };
    class HitGlass3: HitGlass3 {
        armor = 0.25;
    };
    class HitGlass4: HitGlass4 {
        armor = 0.25;
    };
};
