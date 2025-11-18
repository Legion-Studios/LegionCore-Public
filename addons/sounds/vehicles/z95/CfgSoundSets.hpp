class ls_z95_EngineLowExt_SoundSet {
    soundShaders[] = {
        "ls_z95_EngineExtlow_SoundShader"
    };
    volumeFactor = 1;
    spatial = 1;
    loop = 1;
    sound3DProcessingType = "JetExt_Close_3DProcessingType";
};
class ls_z95_EngineExt_SoundSet {
    soundShaders[] = {
        "ls_z95_EngineExt_SoundShader"
    };
    volumeFactor = 1.1;
    spatial = 1;
    loop = 1;
    sound3DProcessingType = "JetExt_Close_3DProcessingType";
    occlusionFactor = 0.44999999;
    obstructionFactor = 0.34999999;
};
class ls_z95_EngineInt_SoundSet {
    soundShaders[] = {
        "ls_z95_EngineLowInt_SoundShader"
    };
    volumeFactor = 1.2;
    spatial = 0;
    loop = 1;
    sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
};
class ls_z95_WindNoiseExt_SoundSet {
    soundShaders[] = {
        "ls_z95_WindNoiseExt_SoundShader"
    };
    volumeFactor = 1;
    spatial = 1;
    loop = 1;
    sound3DProcessingType = "JetExt_Close_3DProcessingType";
};
class ls_z95_ForsageExt_SoundSet {
    soundShaders[] = {
        "ls_z95_ForsageExt_SoundShader"
    };
    volumeFactor = 0.75;
    spatial = 1;
    loop = 1;
    volumeCurve = "InverseSquare1Curve";
    sound3DProcessingType = "JetExt_Close_3DProcessingType";
    occlusionFactor = 0.45;
    obstructionFactor = 0.35;
};
class ls_z95_ForsageInt_SoundSet {
    soundShaders[] = {
        "ls_z95_ForsageInt_SoundShader"
    };
    volumeFactor = 1.25;
    spatial = 0;
    loop = 1;
    sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
};

class ls_z95_Shot_SoundSet {
    soundShaders[] = {
        "ls_z95_midshot_SoundShader",
    };
    volumeFactor = 1;
    frequencyRandomizer = 1;
    frequencyRandomizerMin = 0.35;
    volumeCurve = "ls_weapons_basic_volumecurve";
    sound3DProcessingType = "ls_weapons_3dprocessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
