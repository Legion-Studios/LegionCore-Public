class Sounds {
    class EngineLowOut {
        sound[] = {QPATHTOEF(sounds,vehicles\cisdropship\engine_outside.wss), 1.1, 1, 3000};
        frequency = "1 min (rpm + 0.5)";
        volume = "camPos * 2 * (rpm factor [0.95, 0]) * (rpm factor [0, 0.95])";
    };
    class EngineHighIn {
        sound[] = {QPATHTOEF(sounds,vehicles\cisdropship\engine_high_inside.wss), 1, 1, 2500};
        frequency = "1 min (rpm + 0.5)";
        volume = "(1 - camPos) * 2 * (rpm factor [0.95, 0]) * (rpm factor [0, 0.95])";
    };
    class EngineHighOut {
        sound[] = {QPATHTOEF(sounds,vehicles\cisdropship\engine_high_outside.wss), 1.4, 1, 4000};
        frequency = 1;
        volume = "camPos * 4 * (rpm factor [0.5, 1.1]) * (rpm factor [1.1, 0.5])";
    };
    class EngineLowIn {
        sound[] = {QPATHTOEF(sounds,vehicles\cisdropship\engine_inside.wss), 1, 1, 2100};
        frequency = "1 min (rpm + 0.5)";
        volume = "(1 - camPos) * 2 * (rpm factor [0.95, 0]) * (rpm factor [0, 0.95])";
    };
    class RainExt {
        sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext.wss", 1.77828, 1, 100};
        frequency = 1;
        volume = "camPos * rain * (speed factor [50, 0])";
    };
    class RainInt {
        sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int.wss", 1, 1, 100};
        frequency = 1;
        volume = "(1-camPos) * rain * (speed factor [50, 0])";
    };
    class ForsageOut {
        sound[] = {QPATHTOEF(sounds,vehicles\cisdropship\forsage_outside.wss), 1.4, 1, 4000};
        frequency = 1;
        volume = "0.6 * machcone * engineOn * camPos * (thrust factor [0.6, 1.0])";
    };
    class ForsageIn {
        sound[] = {QPATHTOEF(sounds,vehicles\cisdropship\forsage_inside.wss), 1, 1, 2100};
        frequency = "1 min (rpm + 0.5) * (rpm factor [0, 1])";
        volume = "1 * engineOn * (1 - camPos) * (rpm factor [0.5, 1]) * (thrust factor [0.5, 1.0])";
    };
};
