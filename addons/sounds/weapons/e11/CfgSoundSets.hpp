class ls_e11_Shot_SoundSet {
    soundShaders[] = {"ls_e11_closure_SoundShader", "ls_e11_closeShot_SoundShader", "ls_e11_midShot_SoundShader", "ls_e11_distShot_SoundShader"};
    volumeFactor = 1.1;
    frequencyRandomizer = 0.5;
    frequencyRandomizerMin = 0.15;
    frequencyFactor = 0.95;
    volumeCurve = "ls_weapons_basic_volumeCurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
