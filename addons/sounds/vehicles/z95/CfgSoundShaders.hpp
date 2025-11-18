class ls_z95_ForsageExt_SoundShader {
    samples[]= {
        {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_forsage_ext", 1}
    };
    frequency = 1.1;
    volume = "0.6 * machcone * engineOn * camPos * (thrust factor [0.6, 1.0])";
    range = 1500;
    rangeCurve[] = {
        {0, 1},
        {200, 0.75},
        {1000, 0.25},
        {1500, 0}
    };
};

class ls_z95_WindNoiseExt_SoundShader {
    samples[] = {
        {QPATHTOF(vehicles\z95\z95_eng_ext.ogg), 1}
    };
    frequency = "3*(speed factor[1, 200])";
    volume = "0.6 * machcone * 4 * camPos * (speed factor [1, 200])";
    range = 200;
};

class ls_z95_EngineExt_SoundShader {
    samples[] = {
        {QPATHTOF(vehicles\z95\z95_eng_ext.ogg), 1}
    };
    frequency = 1;
    volume = "0.6 * machcone * camPos * (rpm factor [0.5, 1])";
    range = 4000;
    rangeCurve[] = {
        {0, 0},
        {50, 1},
        {4000, 1}
    };
};

class ls_z95_EngineExtlow_SoundShader {
    samples[] = {
        {QPATHTOF(vehicles\z95\z95_eng_ext.ogg), 1}
    };
    frequency = 1;
    volume = "0.6 * machcone*camPos*(rpm factor [0.5, 1])";
    range = 4000;
    rangeCurve[] = {
        {0, 0},
        {50, 1},
        {4000, 1}
    };
};

class ls_z95_EngineLowInt_SoundShader {
    samples[] = {
        {QPATHTOF(vehicles\z95\z95_eng_int.ogg), 1}
    };
    frequency = "1.0 min (rpm + 0.5)*(rpm factor[0, 1])";
    volume = "1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])";
};

class ls_z95_ForsageInt_SoundShader {
    samples[] = {
        {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_forsage_int", 1}
    };
    frequency = "1.0 min (rpm + 0.5)*(rpm factor[0, 1])";
    volume = "1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0])";
};
