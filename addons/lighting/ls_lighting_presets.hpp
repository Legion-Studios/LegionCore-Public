class GVAR(default) {
    enabled = 1;
    lightModes[] = {
        QGVAR(whiteHigh), QGVAR(whiteLow),
        QGVAR(redHigh), QGVAR(redLow),
        QGVAR(blueHigh), QGVAR(blueLow)
    };
    soundOn = QGVAR(activationOther);
    soundOff = QGVAR(deactivationOther);
    soundToggle = QGVAR(toggle);

    sources[] = {"right"};
    class left {
        attachBone = "head";
        attachBoneFollow = 1;
        attachOffset[] = {-0.175, -0.001, 0.135};
        attachVectorDir[] = {0, 0, 0};
        attachVectorUp[] = {0, 0, 0};
    };
    class right: left {
        attachOffset[] = {0.05, -0.001, 0.135};
    };
    class center: left {
        attachOffset[] = {-0.0575, 0.087, 0.2};
    };
};

class GVAR(clone_phase1): GVAR(default) {
    soundOn = QGVAR(activationRepublic);
    soundOff = QGVAR(deactivationRepublic);
};
class GVAR(clone_phase2): GVAR(default) {
    soundOn = QGVAR(activationRepublic);
    soundOff = QGVAR(deactivationRepublic);
    sources[] = {"left"};
};

class GVAR(clone_engineer): GVAR(default) {
    soundOn = QGVAR(activationRepublic);
    soundOff = QGVAR(deactivationRepublic);
    sources[] = {"center"};
};
