// Ambient movement sounds
BushCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01", 0.63095701, 1, 100};
BushCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02", 0.63095701, 1, 100};
BushCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03", 0.63095701, 1, 100};
soundBushCrash[] = {
    "BushCrash1", 0.33000001,
    "BushCrash2", 0.33000001,
    "BushCrash3", 0.33000001
};
buildCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01", 3.1622801, 1, 200};
buildCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02", 3.1622801, 1, 200};
buildCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03", 3.1622801, 1, 200};
buildCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04", 3.1622801, 1, 200};
buildCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05", 3.1622801, 1, 200};
buildCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06", 3.1622801, 1, 200};
soundBuildingCrash[] = {
    "buildCrash0", 0.16599999,
    "buildCrash1", 0.16599999,
    "buildCrash2", 0.16599999,
    "buildCrash3", 0.16599999,
    "buildCrash4", 0.16599999,
    "buildCrash5", 0.16599999
};
woodCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01", 3.1622801, 1, 200};
woodCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02", 3.1622801, 1, 200};
woodCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03", 3.1622801, 1, 200};
woodCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04", 3.1622801, 1, 200};
woodCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05", 3.1622801, 1, 200};
woodCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06", 3.1622801, 1, 200};
soundWoodCrash[] = {
    "woodCrash0", 0.16599999,
    "woodCrash1", 0.16599999,
    "woodCrash2", 0.16599999,
    "woodCrash3", 0.16599999,
    "woodCrash4", 0.16599999,
    "woodCrash5", 0.16599999
};
ArmorCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01", 3.1622801, 1, 200};
ArmorCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02", 3.1622801, 1, 200};
ArmorCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03", 3.1622801, 1, 200};
ArmorCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04", 3.1622801, 1, 200};
ArmorCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05", 3.1622801, 1, 200};
ArmorCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06", 3.1622801, 1, 200};
soundArmorCrash[] = {
    "ArmorCrash0", 0.16599999,
    "ArmorCrash1", 0.16599999,
    "ArmorCrash2", 0.16599999,
    "ArmorCrash3", 0.16599999,
    "ArmorCrash4", 0.16599999,
    "ArmorCrash5", 0.16599999
};

//aat sounds
soundEngineOnInt[] = {QPATHTOEF(sounds,vehicles\aat\start_int.wss), 0.79432797, 1};
soundEngineOffInt[] = {QPATHTOEF(sounds,vehicles\aat\stop_int.wss), 0.79432797, 1};
soundEngineOnExt[] = {QPATHTOEF(sounds,vehicles\aat\start_ext.wss), 1.99526, 1, 100};
soundEngineOffExt[] = {QPATHTOEF(sounds,vehicles\aat\stop_ext.wss), 1.99526, 1, 100};
// Get in/out sounds
soundGetIn[] = {"\A3\Sounds_F_EPB\Tracked\noises\get_in_out.wss", 0.56234097, 1};
soundGetOut[] = {"\A3\Sounds_F_EPB\Tracked\noises\get_in_out.wss", 0.56234097, 1, 20 };
// Top hatch sounds
soundTurnIn[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out.wss", 1.77828, 1, 20 };
soundTurnOut[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out.wss", 1.77828, 1, 20 };
soundTurnInInternal[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out.wss", 1.77828, 1, 20};
soundTurnOutInternal[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out.wss", 1.77828, 1, 20};
// potential custom damage/impact sounds
soundDammage[] = {"", 0.56234097, 1};

class Sounds: Sounds {
    // External sounds w/out gas
    class Idle_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 4, 1, 200 };
        frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
    };

    class Engine {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 4.48808, 1, 240 };
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
    };

    class Engine1_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine1_ext.wss), 5.6501598, 1, 280 };
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
    };

    class Engine2_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine2_ext.wss), 6.3396001, 1, 320 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
    };

    class Engine3_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine3_ext.wss), 7.1131301, 1, 360 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
    };

    class Engine4_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine4_ext.wss), 7.98104, 1, 400 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
    };

    class Engine5_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine5_ext.wss), 8.9548903, 1, 440 };
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
    };

    // External sounds w/ gas
    class IdleThrust {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 5.6501598, 1, 200 };
        frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
    };

    class EngineThrust {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 7.1131301, 1, 200 };
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
    };

    class Engine1_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 8.9548903, 1, 230 };
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
    };

    class Engine2_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 10.0475, 1, 290 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
    };

    class Engine3_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 8.9548903, 1, 350 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
    };

    class Engine4_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 11.27353, 1, 400 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
    };

    class Engine5_Thrust_ext {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_ext.wss), 12.64913,  1, 450 };
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
    };

    // Interior Sounds w/out gas
    class Idle_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 2, 1};
        frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
    };

    class Engine_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 1.41589, 1};
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
    };

    class Engine1_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine1_int.wss), 1.58866, 1};
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
    };

    class Engine2_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine2_int.wss), 1.7825, 1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
    };

    class Engine3_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine3_int.wss), 2, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
    };

    class Engine4_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine4_int.wss), 2.24404, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
    };

    class Engine5_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine5_int.wss), 2.5178499, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
    };

    // Internal Sounds w/ gas
    class IdleThrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 2.5178499, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
    };

    class EngineThrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 1.58866, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
    };

    class Engine1_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 1.7825, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
    };

    class Engine2_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 1.7825, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
    };

    class Engine3_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 2, 1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
    };

    class Engine4_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 2.24404, 1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
    };

    class Engine5_Thrust_int {
        sound[] = {QPATHTOEF(sounds,vehicles\aat\engine\engine_int.wss), 2.5178499,  1 };
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
    };
};
