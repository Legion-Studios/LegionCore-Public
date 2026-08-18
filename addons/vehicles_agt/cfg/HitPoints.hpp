class HitPoints: HitPoints {
    class HitRFWheel {
        armor = 1;
        explosionShielding = 4;
        armorComponent = "hit_fr_wheel";
        material = -1;
        passThrough = 0.3;
        name = "wheel_fr_point";
        visual = "wheel_fr_destruct";
    };

    class HitLFWheel: HitRFWheel {
        armorComponent = "hit_fl_wheel";
        name = "wheel_fl_point";
        visual = "wheel_fl_destruct";
    };

    class HitLF2Wheel: HitRFWheel {
        armorComponent  = "hit_bl_wheel";
        name = "wheel_bl_point";
        visual = "wheel_bl_destruct";
    };

    class HitRF2Wheel: HitRFWheel {
        armorComponent = "hit_br_wheel";
        name = "wheel_br_point";
        visual = "wheel_br_destruct";
    };

    class HitEngine: HitEngine {
        visual = "engine_destruct";
        name = "engine_point";
        armorComponent = "hit_engine";
        armor = 0.5;
        material = -1;
        passThrough = 0.3;
    };

    class HitFuel: HitFuel {
        visual = "fuel_destruct";
    };

    class HitBody: HitBody {
        name = "karoserie";
        visual = "zbytek";
        armor = 0.5;
        material = -1;
        passThrough = 0.3;
    };
};
