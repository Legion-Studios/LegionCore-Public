class ls_mediumBlaster_Tail_SoundSet {
    soundShaders[] = {
        "ls_mediumBlaster_tailTrees_SoundShader",
        "ls_mediumBlaster_tailForest_SoundShader",
        "ls_mediumBlaster_tailMeadows_SoundShader",
        "ls_mediumBlaster_tailHouses_SoundShader"
    };
    volumeFactor = 1;
    volumeCurve = "ls_weapons_vl_sin";
    frequencyRandomizer = 1;
    sound3DProcessingType = "ls_weapons_tails_3dProcessor";
    distanceFilter = "ls_weapons_echo_lp_dia";
    spatial = 1;
    occlusionFactor = 0.25;
    obstructionFactor = 0;
    doppler = 0;
    loop = 0;
    soundShadersLimit = 2;
};
