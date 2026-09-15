soundEngineOnExt[] = {QPATHTOEF(sounds,vehicles\hmp\hmp_start.wss), 0.794328, 1, 600};
soundEngineOnInt[] = {QPATHTOEF(sounds,vehicles\hmp\hmp_start.wss), 0.794328, 1};
soundEngineOffInt[] = {QPATHTOEF(sounds,vehicles\hmp\hmp_end.wss), 0.794328, 1};
soundEngineOffExt[] = {QPATHTOEF(sounds,vehicles\hmp\hmp_end.wss), 0.794328, 1, 600};
soundLocked[] = {QPATHTOEF(sounds,vehicles\laat\misc\lockOn_beep.wss), 1, 1};
soundIncommingMissile[] = {QPATHTOEF(sounds,vehicles\laat\misc\lockOn_alert_beep.wss), 0.316228, 1};

class sounds {
    class EngineInt {
        sound[] = {QPATHTOEF(sounds,vehicles\hmp\hmp_engine_1.wss), 1.25893, 1};
        frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
        volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
    };
    class EngineExt {
        sound[] = {QPATHTOEF(sounds,vehicles\hmp\hmp_engine_1.wss), 1.25893, 1, 600};
        frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
        volume = "camPos*((rotorSpeed-0.72)*4)";
    };
    class RainExt {
        sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext.wss", 1, 1, 100};
        frequency = 1;
        volume = "camPos * (rain - rotorSpeed/2) * 2";
    };
    class RainInt {
        sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open.wss", 1, 1, 100};
        frequency = 1;
        volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
    };
    class SlingLoadDownExt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT.wss", 1.25893, 1, 500};
        frequency = 1;
        volume = "camPos*(slingLoadActive factor [0,-1])";
    };
    class SlingLoadUpExt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT.wss", 1.25893, 1, 500};
        frequency = 1;
        volume = "camPos*(slingLoadActive factor [0,1])";
    };
    class SlingLoadDownInt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT.wss", 1, 1, 700};
        frequency = 1;
        volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
    };
    class SlingLoadUpInt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT.wss", 1, 1, 700};
        frequency = 1;
        volume = "(1-camPos)*(slingLoadActive factor [0,1])";
    };

    /*----------------------------------*/
    /*-----------  Environment ---------*/
    /*----------------------------------*/

    class WindInt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed.wss", "db-7", 1, 50};
        frequency = 1;
        volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
    };
    class GStress {
        sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b.wss", 0.316228, 1, 50};
        frequency = 1;
        volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
    };
    class rotorLowAlarmInt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low.wss", 0.316228, 1};
        frequency = 1;
        volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
    };
    class rotorLowAlarmExt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low.wss", 0.223872, 1, 20};
        frequency = 1;
        volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
    };
    class scrubLandInt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open.wss", 1, 1, 100};
        frequency = 1;
        volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
    };
    class scrubLandExt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt.wss", 1, 1, 100};
        frequency = 1;
        volume = "camPos * (scrubLand factor[0.02, 0.05])";
    };
    class scrubBuildingInt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt.wss", 1, 1, 100};
        frequency = 1;
        volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
    };
    class scrubBuildingExt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt.wss", 1, 1, 100};
        frequency = 1;
        volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
    };
    class scrubTreeInt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt.wss", 1, 1, 100};
        frequency = 1;
        volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
    };
    class scrubTreeExt {
        sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt.wss", 1, 1, 100};
        frequency = 1;
        volume = "camPos * ((scrubTree) factor [0, 0.01])";
    };
};
