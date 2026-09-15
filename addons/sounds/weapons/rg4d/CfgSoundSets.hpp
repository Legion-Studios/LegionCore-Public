class ls_rg4d_Shot_SoundSet {
    soundShaders[] = {"ls_rg4d_closure_SoundShader", "ls_rg4d_closeShot_SoundShader", "ls_rg4d_midShot_SoundShader", "ls_rg4d_distShot_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 0.5;
    frequencyRandomizerMin = 0.15;
    volumeCurve = "ls_weapons_basic_volumeCurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
