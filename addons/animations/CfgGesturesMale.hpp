class CfgGesturesMale {
    class States {
        class GestureReloadBase;
        class ls_reload_default: GestureReloadBase {
            speed = 0;
            leftHandIKBeg = 0;
            leftHandIKEnd = 0;
            leftHandIKCurve[] = {
                0.01, 1,
                0.04, 0,
                0.94, 0,
                0.98, 1
            };
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
            rightHandIKCurve[] = {1};
            weaponIK = 1;
            preload = 1;

            headBobStrength = -1;
            headBobMode = 2;
            disableWeapons = 1;
            disableWeaponsLong = 1;
        };
        class ls_reload_acpa_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_acpa.rtm);
            speed = 0.2;
        };
        class ls_reload_acpa_pump_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_acpa_pump.rtm);
            speed = -1;
            leftHandIKCurve[] = {
                0.1, 1,
                0.14, 0,
                0.94, 0,
                0.98, 1
            };
        };
        class ls_reload_acpr_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_acpr.rtm);
            speed = 0.35;
        };
        class ls_reload_dc17s_dual_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_dc17s_dual.rtm);
            speed = -2.5;
            enableOptics = 0;
            weaponIK = 2;
            leftHandIKCurve[] = {
                0.01, 1,
                0.03, 0,
                0.94, 0,
                1, 1
            };
        };
        class ls_reload_ls150_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_ls150.rtm);
            speed = 0.15;
            leftHandIKCurve[] = {
                0.1, 1,
                0.14, 0,
                0.94, 0,
                0.98, 1
            };
        };
        class ls_reload_westar35s_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_westar35s.rtm);
            speed = 0.4;
        };
        class ls_reload_westar35sa_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_westar35sa.rtm);
            speed = -2.4;
        };
        class ls_reload_westar35sGL_state: ls_reload_default {
            file = QPATHTOF(data\weapons\reload\ls_reload_westar35sGL.rtm);
            speed = 0.7;
        };
    };
};
