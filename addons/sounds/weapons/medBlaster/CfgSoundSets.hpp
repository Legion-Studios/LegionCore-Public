class ls_mediumBlaster_Shot_SoundSet {
    soundShaders[] = {
        "ls_mediumBlaster_Closure_SoundShader",
        "ls_mediumBlaster_closeShot_SoundShader",
        "ls_mediumBlaster_midShot_SoundShader",
        "ls_mediumBlaster_distShot_SoundShader"
    };
    volumeFactor = 1.1;
    frequencyRandomizer = 0.75;
    volumeCurve = "ls_weapons_basic_volumecurve";
    sound3DProcessingType = "ls_weapons_3dprocessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor=0.15;
    obstructionFactor=0.30000001;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
