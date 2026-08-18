class CfgRecoils {
    // Mostly remove kickBack as it would cause it to detach from the mount
    class ls_recoil;
    class ls_recoil_atrt: ls_recoil {
        kickBack[] = {0, 0.01};
        permanent = 0.2;
        temporary = 0.05;
    };
};
