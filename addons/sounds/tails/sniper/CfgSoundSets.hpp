class ls_sniper_Tail_SoundSet {
    soundShaders[] = {"ls_sniper_tailTrees_SoundShader", "ls_sniper_tailForest_SoundShader", "ls_sniper_tailMeadows_SoundShader", "ls_sniper_tailHouses_SoundShader"};
    volumeFactor = 1.1;
    frequencyRandomizer = 1;
    occlusionFactor = 0.3;
    obstructionFactor = 0;
    volumeCurve = "ls_weapons_vl_sin";
    sound3DProcessingType = "ls_weapons_tails_3dProcessor";
    distanceFilter = "ls_weapons_echo_lp_dia";
    spatial = 1;
    doppler = 0;
    loop = 0;
    soundShadersLimit = 2;
};
