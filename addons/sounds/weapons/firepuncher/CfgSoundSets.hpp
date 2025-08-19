class ls_firepuncher_Shot_SoundSet {
    soundShaders[] = {"ls_firepuncher_closure_SoundShader", "ls_firepuncher_closeShot_SoundShader", "ls_firepuncher_midShot_SoundShader", "ls_firepuncher_distShot_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 1;
    frequencyRandomizerMin = 0.35;
    volumeCurve = "ls_weapons_basic_volumecurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};

class ls_firepuncher_suppressed_Shot_SoundSet {
    soundShaders[] = {"ls_firepuncher_suppressed_closeShot_SoundShader", "ls_firepuncher_suppressed_distShot_SoundShader"};
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
