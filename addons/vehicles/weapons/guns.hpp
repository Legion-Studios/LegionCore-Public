class ls_20mw_P64E1_RC: Cannon_30mm_Plane_CAS_02_F {
    displayName = "P64E1 20mw Rotary Cannon";
    nameSound = "cannon";
    cursor = "EmptyCursor";
    cursorAim = "mg";
    showAimCursorInternal = 0;
    magazines[] = {
        "ls_magazine_20mm_PS56D_x676"
    };
    canLock = 0;
    ballisticsComputer = 1 + 2 + 4 + 16;
    FCSMaxLeadSpeed = 1800;
    FCSZeroingDelay = 0.5;
    maxZeroing = 2500;
    aiDispersionCoefY = 0.5;
    aiDispersionCoefX = 0.5;
    modes[] = {
        "manual",
        "close",
        "short",
        "medium",
        "far"
    };

    class GunParticles {};

    class manual: CannonCore {
        displayName = "P64E1 20mw Rotary Cannon";
        displayNameShort = "P64E1";
        autoFire = 1;
        shotFromTurret=0;
        textureType = "fullAuto";

        soundContinuous = 0;
        soundBurst = 0;
        reloadTime = 0.01;
        dispersion = 0.00436332;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 10;
        minRange = 0;
        minRangeProbab = 0.01;
        midRange = 1;
        midRangeProbab = 0.01;
        maxRange = 2;
        maxRangeProbab = 0.01;

        sounds[] = {"StandardSound"};
        class StandardSound {
            // soundSetShot[] = {""}; // TODO
            begin1[] = {"A3\Sounds_F\weapons\cannon\20mm\20mm_1", 3.1622777, 1, 1200};
        };
    };

    class close: manual {
        aiBurstTerminable = 1;
        showToPlayer = 0;
        burst = 20;
        burstRangeMax = 47;
        aiRateOfFire = 0.500000;
        aiRateOfFireDispersion = 1;
        aiRateOfFireDistance = 50;
        minRange = 0;
        minRangeProbab = 0.100000;
        midRange = 50;
        midRangeProbab = 0.850000;
        maxRange = 400;
        maxRangeProbab = 0.950000;
    };

    class short: close {
        aiBurstTerminable = 1;
        showToPlayer = 0;
        burst = 22;
        burstRangeMax = 42;
        aiRateOfFire = 1;
        aiRateOfFireDispersion = 2;
        aiRateOfFireDistance = 200;
        minRange = 200;
        minRangeProbab = 0.850000;
        midRange = 400;
        midRangeProbab = 0.950000;
        maxRange = 1000;
        maxRangeProbab = 0.750000;
    };

    class medium: close {
        aiBurstTerminable = 1;
        showToPlayer = 0;
        burst = 22;
        burstRangeMax = 38;
        aiRateOfFire = 2;
        aiRateOfFireDispersion = 2;
        aiRateOfFireDistance = 800;
        minRange = 800;
        minRangeProbab = 0.850000;
        midRange = 1400;
        midRangeProbab = 0.400000;
        maxRange = 1800;
        maxRangeProbab = 0.150000;
    };

    class far: close {
        aiBurstTerminable = 1;
        showToPlayer = 0;
        burst = 15;
        burstRangeMax = 25;
        aiRateOfFire = 4;
        aiRateOfFireDispersion = 4;
        aiRateOfFireDistance = 1400;
        minRange = 1400;
        minRangeProbab = 0.500000;
        midRange = 1800;
        midRangeProbab = 0.150000;
        maxRange = 2500;
        maxRangeProbab = 0.050000;
    };
};
