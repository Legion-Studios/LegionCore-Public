class CfgRecoils {
    class recoil_default;
    class ls_recoil: recoil_default {
        muzzleOuter[] = {0.3, 0.4, 0.3, 0.2};
        kickBack[] = {0.02, 0.03};
        permanent = 0.03;
        temporary = 0.002;
    };

    class ls_recoil_scatterMuzzle: ls_recoil {
        muzzleOuter[] = {0.3, 1, 0.3, 0.2};
        muzzleInner[] = {0, 0, 0.1, 0.1};
        kickBack[] = {0.03, 0.06};
        permanent = 0.2;
        temporary = 0.3;
    };
};
