class ls_wristblaster_B2_Shot_SoundSet {
    soundShaders[] = {"ls_wristblaster_B2_closure_SoundShader", "ls_wristblaster_B2_closeShot_SoundShader", "ls_wristblaster_B2_midShot_SoundShader", "ls_wristblaster_B2_distShot_SoundShader"};
    volumeFactor = 1;
    frequencyFactor = 0.9;
    frequencyRandomizer = 0.1;
    frequencyRandomizerMin = 0.05;
    volumeCurve = "ls_weapons_basic_volumeCurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};

class ls_wristblaster_droideka_Shot_SoundSet {
    soundShaders[] = {"ls_wristblaster_droideka_closure_SoundShader", "ls_wristblaster_droideka_closeShot_SoundShader", "ls_wristblaster_droideka_midShot_SoundShader", "ls_wristblaster_droideka_distShot_SoundShader"};
    volumeFactor = 0.8;
    frequencyFactor = 0.9;
    frequencyRandomizer = 0.9;
    frequencyRandomizerMin = 0.05;
    volumeCurve = "ls_weapons_basic_volumeCurve";
    sound3DProcessingType = "ls_weapons_3dProcessor";
    distanceFilter = "ls_weapons_lowpass_filter";
    occlusionFactor = 0.25;
    obstructionFactor = 0.3;
    spatial = 1;
    doppler = 0;
    loop = 0;
};
