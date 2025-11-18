class ls_dc15l_Shot_SoundSet {
    soundShaders[] = {"ls_dc15l_closure_SoundShader", "ls_dc15l_closeShot_SoundShader", "ls_dc15l_midShot_SoundShader", "ls_dc15l_distShot_SoundShader"};
    volumeFactor = 1.1;
    frequencyRandomizer = 1;
    frequencyRandomizerMin = 0.35;
    volumeCurve = "ls_weapons_basic_volumeCurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
