class ls_mpl_Shot_SoundSet {
    soundShaders[] = {
        "ls_mpl_closeShot_SoundShader",
        "ls_mpl_midShot_SoundShader",
        "ls_mpl_distShot_SoundShader"
    };
    volumeFactor = 1;
    volumeCurve = "ls_weapons_basic_volumecurve";
    sound3DProcessingType = "ls_weapons_3dprocessor";
    spatial = 1;
    doppler = 0;
    loop = 0;
    frequencyFactor = 1.06;
    frequencyRandomizer = 0.8;
    frequencyRandomizerMin = 0.4;
    distanceFilter = "ls_weapons_lowpass_filter";
    soundShadersLimit = 7;
    obstructionFactor = 0.24;
    occlusionFactor = 0.18;
};
