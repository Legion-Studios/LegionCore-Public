class ls_rocket_Tail_SoundSet {
    soundShaders[] = {
        "ls_rocket_tailTrees_SoundShader",
        "ls_rocket_tailForest_SoundShader",
        "ls_rocket_tailMeadows_SoundShader",
        "ls_rocket_tailHouses_SoundShader"
    };
    volumeFactor = 1.3;
    frequencyRandomizer = 1;
    volumeCurve = "ls_weapons_vl_sin";
    sound3DProcessingType = "ls_weapons_tails_3dProcessor";
    distanceFilter = "ls_weapons_echo_lp_dia";
    spatial = 1;
    occlusionFactor = 0.25;
    obstructionFactor = 0;
    doppler = 0;
    loop = 0;
    soundShadersLimit = 2;
};
