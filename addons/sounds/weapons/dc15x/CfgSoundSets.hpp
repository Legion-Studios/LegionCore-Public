class ls_dc15x_Shot_SoundSet {
    soundShaders[] = {"ls_dc15x_closure_SoundShader", "ls_dc15x_closeShot_SoundShader", "ls_dc15x_midShot_SoundShader", "ls_dc15x_distShot_SoundShader"};
    volumeFactor = 1.2;
    frequencyRandomizer = 0.75;
    frequencyRandomizerMin = 0.25;
    volumeCurve = "ls_weapons_basic_volumeCurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
