class CfgAmmo {
    class RocketCore;
    class RocketBase: RocketCore {
        class HitEffects;
    };
    class ls_bullet_z7_blue: RocketBase {
        scope = 2;
        author = AUTHOR;

        hit = 12;
        caliber = 1.8;
        indirectHit = 0;
        indirectHitRange = 0;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadiusHit = 8;
        suppressionRadiusBulletClose = 8;
        typicalSpeed = 800;
        timeToLive = 10;
        waterFriction = -0.3;
        airFriction = -0.00130094;
        airLock = 1;
        explosive = 0.2;
        explosionForceCoef = 1;
        coefGravity = 0.01;

        submunitionAmmo = "";
        submunitionConeAngle = 0;
        submunitionCount = 1;
        // warheadName = "";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 0;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -0.2};
        audibleFire = 20;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectfly = "ls_plasma_blue";
        effectsFire = "";
        effectsMissile = "ls_plasma_blue";
        effectFlare = "FlareShell";
        explosionType = "";
        fuseDistance = 0;
        thrust = 0.1;
        thrustTime = 2.5;
        tracerScale = 2.5;
        tracerStartTime = 0;
        tracerEndTime = 10;

        ace_caliber = 6.706;
        ace_bulletLength = 32.893;
        ace_bulletMass = 7.9704;
        ace_ammoTempMuzzleVelocityShifts[] = {
            -26.55, -25.47,
            -22.85, -20.12,
            -16.98, -12.8,
            -7.64, -1.53,
            5.96, 15.17,
            26.19
        };
        ace_ballisticCoefficients[] = {0.2};

        PLASMA_SOUNDS;
        PLASMA_EFFECTS;
    };
};
