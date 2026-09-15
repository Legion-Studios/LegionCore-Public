class ls_ugl_Shot_SoundSet {
    soundShaders[] = {"ls_ugl_closure_SoundShader", "ls_ugl_closeShot_SoundShader", "ls_ugl_midShot_SoundShader", "ls_ugl_distShot_SoundShader"};
    volumeFactor = 1.5;
    frequencyFactor = 0.9;
    frequencyRandomizer = 0.6;
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
