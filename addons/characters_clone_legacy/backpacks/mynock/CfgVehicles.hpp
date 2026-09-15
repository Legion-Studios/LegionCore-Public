class ls_gar_glidepackClosed_backpack: B_Parachute  {
    scope = 2;
    author = AUTHOR;
    displayName = "CDV-24 'Mynock' Glidepack";

    model = QPATHTOF(backpacks\mynock\ls_mynock_backpack.p3d);
    hiddenSelections[] = {"pack", "wing"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\mynock\data\pack_co.paa),
        QPATHTOF(backpacks\mynock\data\wing_co.paa)
    };

    EGVAR(equipment,saveParachuteInventory) = 1;

    maximumLoad = 100;
    parachuteClass = "ls_misc_glidepack_parachute";
    ace_hasReserveParachute = 0;
    ace_reserveParachute = "";
};

class ls_gar_glidepackClosedLR_backpack: ls_gar_glidepackClosed_backpack  {
    scope = 2;
    author = AUTHOR;
    displayName = "CDV-25 'Mynock' Glidepack [LR]";

    maximumLoad = 80;
    parachuteClass = "ls_misc_glidepack_parachute_radio";

    tf_hasLRradio = 1;
    tf_range = 10000;
    tf_subtype = "digital_lr";
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "ls_radios_cloneLR";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
};

class ls_misc_glidepack_parachute: Steerable_Parachute_F {
    scope = 1;
    author = AUTHOR;
    displayName = "CDV-24 'Mynock' Glidepack";

    model = QPATHTOF(backpacks\mynock\ls_mynock_parachute.p3d);
    hiddenSelections[] = {"pack", "wing"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\mynock\data\pack_co.paa),
        QPATHTOF(backpacks\mynock\data\wing_co.paa)
    };

    EGVAR(equipment,deleteOnExit) = 1;

    driverAction = "ls_driver_mynock";
    animationOpen = QPATHTOEF2(animations,data\vehicle\mynock\ls_mynock_open.rtm);
    animationDrop = "";
    driverCanEject = 1;

    thrustDeccel = 2;
    thrustNormal = 20;
    thrustAccel = 30;
    minRotationZ = -0.9;
    maxRotationZ = 0.9;
    minRotationX = -0.5;
    maxRotationX = 0.5;
    maxSensitivityHorizontal = 0.1;
    maxSensitivityVertical = 0.1;
    deltaValueVertical = 0.001;
    deltaValueHorizontal = 0.001;
    turnForceScale = 0.01;
    minGravity = -1.0;
    normalGravity = -3.0;
    maxGravity = -4.0;
    distanceLevel1 = 20.0;
    distanceLevel2 = 40.0;
    minLiftThrust = -40.0;
    maxLiftThrust = -10.0;
    minLiftDuration = 1.0;
    maxLiftDuration = 5;
    liftThreshold = 0.99;
    airInfluence = 0.8;
    liftGravity = -40.0;
    openingTime = 0;
    duration = 0.001;
    unitInfoType = "RscUnitInfoParachute";
};

class ls_misc_glidepack_parachute_radio: ls_misc_glidepack_parachute {
    scope = 2;
    author = AUTHOR;
    displayName = "CDV-25 'Mynock' Glidepack";

    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.7;
};
