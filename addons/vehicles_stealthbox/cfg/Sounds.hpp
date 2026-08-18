attenuationEffectType = "CarAttenuation";

soundGetIn[] = {"", "db-5", 1};
soundGetOut[] = {"", "db-5", 1, 40};
soundDammage[] = {"", "db-5", 1};
soundEngineOnInt[] = {"", "db-8", 1.0}; // have separate interior and exterior sounds
soundEngineOnExt[] = {"", "db-7", 1.0, 200};
soundEngineOffInt[] = {"", "db-8", 1.0};
soundEngineOffExt[] = {"", "db-7", 1.0, 200};
soundGear[] = {"", "db-8", 1.0};

/* ---- CRASHES START ---- */

buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", "db0", 1, 200};
buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", "db0", 1, 200};
buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", "db0", 1, 200};
buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", "db0", 1, 200};
soundBuildingCrash[] = {
    "buildCrash0", 0.25,
    "buildCrash1", 0.25,
    "buildCrash2", 0.25,
    "buildCrash3", 0.25
};

WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", "db0", 1, 200};
WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", "db0", 1, 200};
WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", "db0", 1, 200};
WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", "db0", 1, 200};
soundWoodCrash[] = {
    "woodCrash0", 0.25,
    "woodCrash1", 0.25,
    "woodCrash2", 0.25,
    "woodCrash3", 0.25
};

armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", "db0", 1, 200};
armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", "db0", 1, 200};
armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", "db0", 1, 200};
armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", "db0", 1, 200};
soundArmorCrash[] = {
    "ArmorCrash0", 0.25,
    "ArmorCrash1", 0.25,
    "ArmorCrash2", 0.25,
    "ArmorCrash3", 0.25
};

/* ---- CRASHES  END ---- */

class Sounds {
    class Idle_ext {
        sound[] = {"", "db-13", 1,150};
        frequency = QUOTE(0.9 + HZ_IDLE * 0.2);
        volume = QUOTE(engineOn * camPos * VOLUME_IDLE);
    };
    class Engine {
        sound[] = {"", 2, 1, 200};
        frequency = QUOTE(0.8 + HZ_RPM1 * 0.2);
        volume = QUOTE(engineOn * camPos * VOLUME_RPM1);
    };
    class Engine1_ext {
        sound[] = {"", 2, 1, 240};
        frequency = QUOTE(0.8 + HZ_RPM2 * 0.2);
        volume = QUOTE(engineOn * camPos * VOLUME_RPM2);
    };
    class Engine2_ext {
        sound[] = {"", 2, 1, 280};
        frequency = QUOTE(0.8 + HZ_RPM3 * 0.2);
        volume = QUOTE(engineOn * camPos * VOLUME_RPM3);
    };
    class Engine3_ext {
        sound[] = {"", 2, 1, 320};
        frequency = QUOTE(0.8 + HZ_RPM4 * 0.2);
        volume = QUOTE(engineOn * camPos * VOLUME_RPM4);
    };
    class Engine4_ext {
        sound[] = {"", 2, 1, 360};
        frequency = QUOTE(0.8 + HZ_RPM5 * 0.2);
        volume = QUOTE(engineOn * camPos * VOLUME_RPM5);
    };
    class Engine5_ext {
        sound[] = {"", 2, 1, 420};
        frequency = QUOTE(0.95 + HZ_RPM6 * 0.15);
        volume = QUOTE(engineOn * camPos * VOLUME_RPM6);
    };

    /*   hatchback external sounds with gas  */

    class IdleThrust {
        sound[] = {"", "db-6", 1, 200};
        frequency = QUOTE(0.9 + HZ_IDLE * 0.2);
        volume = QUOTE(engineOn * camPos * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_IDLE);
    };
    class EngineThrust {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 1, 1, 250};
        frequency = QUOTE(0.8 + HZ_RPM1 * 0.2);
        volume = QUOTE(engineOn * camPos * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM1);
    };
    class Engine1_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 1, 1, 280};
        frequency = QUOTE(0.8 + HZ_RPM2 * 0.2);
        volume = QUOTE(engineOn * camPos * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM2);
    };
    class Engine2_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 1, 1, 320};
        frequency = QUOTE(0.8 + HZ_RPM3 * 0.2);
        volume = QUOTE(engineOn * camPos * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM3);
    };
    class Engine3_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 1, 1, 360};
        frequency = QUOTE(0.8 + HZ_RPM4 * 0.2);
        volume = QUOTE(engineOn * camPos * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM4);
    };
    class Engine4_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 1, 1, 400};
        frequency = QUOTE(0.8 + HZ_RPM5 * 0.3);
        volume = QUOTE(engineOn * camPos * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM5);
    };
    class Engine5_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 1, 1, 450};
        frequency = QUOTE(0.9 + HZ_RPM6 * 0.2);
        volume = QUOTE(engineOn * camPos * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM6);
    };

    /*  end external sounds with gas */

    /* hatchback internal sounds without gas */

    class Idle_int {
        sound[] = {"", "db-15", 1};
        frequency = QUOTE(0.9 + HZ_IDLE * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * VOLUME_IDLE);
    };
    class Engine_int {
        sound[] = {"", "db-14", 1};
        frequency = QUOTE(0.8 + HZ_RPM1 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * VOLUME_RPM1);
    };
    class Engine1_int {
        sound[] = {"", "db-12", 1};
        frequency = QUOTE(0.8 + HZ_RPM2 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * VOLUME_RPM2);
    };
    class Engine2_int {
        sound[] = {"", "db-11", 1};
        frequency = QUOTE(0.8 + HZ_RPM3 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * VOLUME_RPM3);
    };
    class Engine3_int {
        sound[] = {"", "db-10", 1};
        frequency = QUOTE(0.8 + HZ_RPM4 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * VOLUME_RPM4);
    };
    class Engine4_int {
        sound[] = {"", "db-9", 1};
        frequency = QUOTE(0.8 + HZ_RPM5 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * VOLUME_RPM5);
    };
    class Engine5_int {
        sound[] = {"", "db-6", 1};
        frequency = QUOTE(0.95 + HZ_RPM6 * 0.15);
        volume = QUOTE(engineOn * (1 - camPos) * VOLUME_RPM6);
    };

    /* hatchback internal sounds with gas */

    class IdleThrust_int {
        sound[] = {"", "db-10", 1};
        frequency = QUOTE(0.9 + HZ_IDLE * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_IDLE);
    };
    class EngineThrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 2, 1};
        frequency = QUOTE(0.8 + HZ_RPM1 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM1);
    };
    class Engine1_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 2, 1};
        frequency = QUOTE(0.8 + HZ_RPM2 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM2);
    };
    class Engine2_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 2, 1};
        frequency = QUOTE(0.8 + HZ_RPM3 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM3);
    };
    class Engine3_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 2, 1};
        frequency = QUOTE(0.8 + HZ_RPM4 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM4);
    };
    class Engine4_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 2, 1};
        frequency = QUOTE(0.8 + HZ_RPM5 * 0.3);
        volume = QUOTE(engineOn * (1 - camPos) * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM5);
    };
    class Engine5_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\mr_box_stealthy_yeetus_boogaloo.wss), 2, 1};
        frequency = QUOTE(0.9 + HZ_RPM6 * 0.2);
        volume = QUOTE(engineOn * (1 - camPos) * (0.4 + (0.6 * WARP_FACTOR(thrust,0.1,1))) * VOLUME_RPM6);
    };
    class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
    };
    /*  end internal sounds with gas */

    /*----------------------------------*/
    /*-----------  TIRES EXT -----------*/
    /*----------------------------------*/

    class TiresRockOut {
        sound[] = {"", "db-6", 1.0, 60};
        frequency = "1";
        volume = "camPos*rock*(speed factor [2, 20])";
    };
    class TiresSandOut {
        sound[] = {"", "db-6", 1.0, 60};
        frequency = "1";
        volume = "camPos*sand*(speed factor [2, 20])";
    };
    class TiresGrassOut {
        sound[] = {"", "db-6", 1.0, 60};
        frequency = "1";
        volume = "camPos*grass*(speed factor [2, 20])";
    };
    class TiresMudOut {
        sound[] = {"", "db-6", 1.0, 60};
        frequency = "1";
        volume = "camPos*mud*(speed factor [2, 20])";
    };
    class TiresGravelOut {
        sound[] = {"", "db-6", 1.0, 60};
        frequency = "1";
        volume = "camPos*gravel*(speed factor [2, 20])";
    };
    class TiresAsphaltOut {
        sound[] = {"", "db-6", 1.0, 60};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor [2, 20])";
    };
    class NoiseOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3.wss", "db-8", 1.0, 90};
        frequency = "1";
        volume = "camPos*(damper0 max 0.02)*(speed factor [0, 8])";
    };

    /*--------------------------------*/
    /*-----------  TIRES INT ---------*/
    /*--------------------------------*/

    class TiresRockIn {
        sound[] = {"", "db-6", 1.0};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor [2, 20])";
    };
    class TiresSandIn {
        sound[] = {"", "db-6", 1.0};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor [2, 20])";
    };
    class TiresGrassIn {
        sound[] = {"", "db-6", 1.0};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor [2, 20])";
    };
    class TiresMudIn {
        sound[] = {"", "db-6", 1.0};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor [2, 20])";
    };
    class TiresGravelIn {
        sound[] = {"", "db-6", 1.0};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor [2, 20])";
    };
    class TiresAsphaltIn {
        sound[] = {"", "db-6", 1.0};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor [2, 20])";
    };
    class NoiseIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3.wss", "db-12", 1.0};
        frequency = "1";
        volume = "(damper0 max 0.1)*(speed factor [0, 8])*(1-camPos)"; // Definition of inside sounds
    };

    /*-----------------------------------------------------------------------------*/
    /*-------------- external sounds for screeching tires on the road -------------*/
    /*-----------------------------------------------------------------------------*/

    /* sounds on the road */

    class breaking_ext_road {
        sound[] = {"", "db-3", 1, 80};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * asphalt * (LongSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(2,15)]));
    };

    class acceleration_ext_road {
        sound[] = {"", "db-3", 1, 80};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * asphalt * (LongSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(15,2)]));
    };
    class turn_left_ext_road {
        sound[] = {"", "db-3", 1, 80};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * asphalt * (latSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(2,15)]));
    };

    class turn_right_ext_road {
        sound[] = {"", "db-3", 1, 80};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * asphalt * (latSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(2,15)]));
    };

    /*---------------------------------------------------------*/
    /* external sounds for screeching tires on other surfaces  */
    /*---------------------------------------------------------*/

    class breaking_ext_dirt {
        sound[] = {"", "db-3", 1, 60};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * (1 - asphalt) * (LongSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(1,15)]));
    };
    class acceleration_ext_dirt {
        sound[] = {"", "db-3", 1, 60};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * (1 - asphalt) * (LongSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(15,1)]));
    };
    class turn_left_ext_dirt {
        sound[] = {"", "db-3", 1, 60};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * (1 - asphalt) * (latSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(1,15)]));
    };
    class turn_right_ext_dirt {
        sound[] = {"", "db-3", 1, 60};
        frequency = 1;
        volume = QUOTE(engineOn * camPos * (1 - asphalt) * (latSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(1,15)]));
    };

    /*------------------------------------------------------------------------------*/
    /*-------------- internal sounds for screeching tires on the road --------------*/
    /*------------------------------------------------------------------------------*/

    class breaking_int_road {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * asphalt * (1 - camPos) * (LongSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(2,15)]));
    };
    class acceleration_int_road {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * asphalt * (1 - camPos) * (LongSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(15,2)]));
    };
    class turn_left_int_road {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * asphalt * (1 - camPos) * (latSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(2,15)]));
    };
    class turn_right_int_road {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * asphalt * (1 - camPos) * (latSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(2,15)]));
    };

    /*-----------------------------------------------------------------------------------*/
    /*-------------- internal sounds for screeching tires on other surfaces -------------*/
    /*-----------------------------------------------------------------------------------*/
    class breaking_int_dirt {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * (1 - asphalt) * (1 - camPos) * (LongSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(2,15)]));
    };
    class acceleration_int_dirt {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * (1 - asphalt) * (1 - camPos) * (LongSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(15,2)]));
    };
    class turn_left_int_dirt {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * (1 - asphalt) * (1 - camPos) * (latSlipDrive factor [ARR_2(0.1,0.4)]) * (speed factor [ARR_2(2,15)]));
    };
    class turn_right_int_dirt {
        sound[] = {"", "db-10", 1};
        frequency = 1;
        volume = QUOTE(engineOn * (1 - asphalt) * (1 - camPos) * (latSlipDrive factor [ARR_2(-0.1,-0.4)]) * (speed factor [ARR_2(2,15)]));
    };
};
