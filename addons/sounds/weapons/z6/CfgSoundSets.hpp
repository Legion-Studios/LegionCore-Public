class ls_z6_Shot_SoundSet {
    soundShaders[] = {"ls_z6_closure_SoundShader", "ls_z6_closeShot_SoundShader", "ls_z6_midShot_SoundShader", "ls_z6_distShot_SoundShader"};
    volumeFactor = 1;
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

class ls_z6_supercharge_Shot_SoundSet {
    soundShaders[] = {"ls_z6_supercharge_closure_SoundShader", "ls_z6_supercharge_closeShot_SoundShader", "ls_z6_supercharge_midShot_SoundShader", "ls_z6_supercharge_distShot_SoundShader"};
    volumeFactor = 1.3;
    frequencyRandomizer = 1;
    frequencyRandomizerMin = 0.4;
    volumeCurve = "ls_weapons_basic_volumeCurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
