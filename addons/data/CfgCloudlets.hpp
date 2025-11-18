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
        moveVelocity[] = {0, 0, 0};
        moveVelocityVar[] = {0.175, 0.175, 0};
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

    #include "particleEffects\zelosianBlood\CfgCloudlets.hpp"
    #include "particleEffects\flamethrower\CfgCloudlets.hpp"
};
