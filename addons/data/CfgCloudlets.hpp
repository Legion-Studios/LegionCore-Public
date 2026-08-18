class CfgCloudlets {
    class Blood;
    class Blood1;
    class Blood2;
    class Blood3;
    class BloodMist;
    class BloodUnderwater1;

    class IncinerateFire;
    class Missile0;
    class Refract;
    // class FuelFire1;

    class Default;
    class ls_sparks_1: Default {
        interval = 0.0009;
        lifeTime = 2.5;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        moveVelocity[] = {0, 0, 0};
        rotationVelocity = 1;
        weight = 100;
        volume = 0.01;
        rubbing = 0.3;
        size[] = {0.12, 0};
        sizeCoef = 1;
        color[] = {
            {1, 0.6, 0.4, -50}
        };
        colorCoef[] = {1, 1, 1, 1};
        emissiveColor[] = {
            {10, 6, 4, 1}
        };
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.1;
        lifeTimeVar = 5;
        position[] = {0, 0, 0};
        positionVar[] = {0.01, 0.01, 0.01};
        moveVelocityVar[] = {1, 3, 1};
        rotationVelocityVar = 0;
        sizeVar = 0;
        colorVar[] = {0.05, 0.05, 0.05, 5};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };

    class ls_sparks_2: ls_sparks_1 {
        interval = 0.01;
        lifeTime = 0.04;
        weight = 1.275;
        volume = 1;
        rubbing = 0;
        size[] = {0.45, 0.225, 0};
        lifeTimeVar = 0.02;
        positionVar[] = {0, 0, 0};
        moveVelocityVar[] = {0, 0, 0};
        sizeVar = 0.03;
    };

    // Lightning-esque effect
    class ls_electricSparks: Default {
        particleShape = "\A3\data_f\blesk1.p3d";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 1;
        animationName = "";
        particleType = "SpaceObject";
        timerPeriod = 1;
        lifeTime = 0.2;
        lifeTimeVar = 0;
        pos3D[] = {0, 0, 0};
        positionVar[] = {0.25, 0.25, 0};
        moveVelocity[] = {0, 0.35, 0};
        moveVelocityVar[] = {0.1, 0.1, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        weight = 10;
        volume = 7.9;
        rubbing = 0.005;
        size[] = {0.007, 0.007};
        sizeOverLifetime[] = {0.007, 0.007, 0.007};
        sizeVar = 0.25;
        color[] = {
            {0.91, 0.01, 0.01, 1},
            {0.9, 0.8, 0.1, 1},
            {0.9, 0.8, 0.1, 1}
        };
        colorVar[] = {0.9, 0.8, 0.1, 1};
        animationSpeed[] = {0.08};
        randomDirectionPeriod = 1;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0;
        randomDirectionIntensityVar = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        interval = 0.2;
        angleVar = 0;
    };

    class ls_cloudlet_RefractSmall: Default {
        ignoreWind = 1;
        angle = 0;
        angleVar = 1;
        animationName = "";
        animationSpeed[] = {2, 1};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        color[] = {
            {0.3, 0.3, 0.3, 0.01},
            {0.3, 0.3, 0.3, 0.26},
            {0.3, 0.3, 0.3, 0.24},
            {0.3, 0.3, 0.3, 0.22},
            {0.3, 0.3, 0.3, 0.16},
            {0.3, 0.3, 0.3, 0.08},
            {0.3, 0.3, 0.3, 0.02}
        };
        colorCoef[] = {1, 1, 1, 1.4};
        colorVar[] = {0, 0, 0, 0};
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.1;
        interval = 0.012;
        lifeTime = 2.5;
        lifeTimeVar = 0.5;
        moveVelocity[] = {0, 0.1, -1};
        moveVelocityVar[] = {0.1, 0.1, -0.1};
        moveVelocityVarConst[] = {0, 0, 0};
        onTimerScript = "";
        particleFSFrameCount = 1;
        particleFSIndex = 0;
        particleFSLoop = 0;
        particleFSNtieth = 1;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Refract.p3d";
        particleType = "Billboard";
        position[] = {0, 0, 0};
        positionVar[] = {0.5, 0, 0.5};
        positionVarConst[] = {0, 0, 0};
        randomDirectionIntensity = 0.05;
        randomDirectionIntensityVar = 0;
        randomDirectionPeriod = 0.1;
        randomDirectionPeriodVar = 0;
        rotationVelocity = 1;
        rotationVelocityVar = 20;
        rubbing = 0.1;
        size[] = {0.2, 0.5};
        sizeCoef = 1;
        sizeVar = 0.03;
        timerPeriod = 1;
        volume = 1;
        weight = 0.8;
    };

    class ls_cloudlet_ExhaustATRT: Default {
        angleVar = 360;
        blockAIVisibility = 0;
        color[] = {
            {0.22, 0.22, 0.22, 0.35},
            {0.25, 0.25, 0.25, 0.22},
            {0.25, 0.25, 0.25, 0.1},
            {0.25, 0.25, 0.25, 0.04},
            {0.25, 0.25, 0.25, 0.01}
        };
        colorCoef[] = {0.3, 0.3, 0.3, 1};
        interval = 0.03;
        lifeTime = 2;
        moveVelocityVar[] = {0.15, 0.2, 0.15};
        particleFSFrameCount = 8;
        particleFSIndex = 12;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        positionVar[] = {0.05, 0.05, 0.05};
        randomDirectionIntensity = 0.2;
        randomDirectionPeriod = 0.1;
        rubbing = 0.5;
        size[] = {0.15, 1.8, 2.8};
        sizeCoef = 0.9;
        sizeVar = 0.3;
        weight = 1.278;
    };

    #include "particleEffects\zelosianBlood\CfgCloudlets.hpp"
    #include "particleEffects\flamethrower\CfgCloudlets.hpp"
};
