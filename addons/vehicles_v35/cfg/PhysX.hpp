thrustDelay = 0.2;
engineStartSpeed = 1.2;brakeIdleSpeed = 1.78;
maxSpeed = 200;
fuelCapacity = 25;
wheelCircumference = 2.277;

antiRollbarForceCoef = 12;
antiRollbarForceLimit = 10000;
antiRollbarSpeedMin = 0;
antiRollbarSpeedMax = 100;

idleRpm = 1000;
redRpm = 7000;
minOmega = 104.72;
maxOmega = 733.038;

enginePower = 240;
peakTorque = 380;

torqueCurve[] = {
    {0.08, 0.30},
    {0.18, 0.52},
    {0.32, 0.70},
    {0.48, 0.85},
    {0.62, 0.95},
    {0.75, 0.98},
    {0.88, 0.88},
    {1, 0.78}
};

dampingRateFullThrottle = 0.15;
dampingRateZeroThrottleClutchEngaged = 0.2;
dampingRateZeroThrottleClutchDisengaged = 0.1;

clutchStrength = 3.5;
latency = 1;
switchTime = 0.31;

slowSpeedForwardCoef = 0.5;
normalSpeedForwardCoef = 1;

differentialType = "all_limited";
frontRearSplit = 0.45;
frontBias = 1.3;
rearBias = 1.3;
centreBias = 2.5;

changeGearMinEffectivity[] = {
    0.95,
    0.15,
    0.9,
    0.9,
    0.9,
    0.9,
    0.9,
    0.8
};

class complexGearbox {
    GearboxRatios[] = {
        "R1", -3.8,
        "N", 0,
        "D1", 3.8,
        "D2", 2.15,
        "D3", 1.55,
        "D4", 1.15,
        "D5", 0.9,
        "D6", 0.674
    };
    AmphibiousRatios[] = {
        "R1", -3.8,
        "N", 0,
        "D1", 3.8,
        "D2", 2.15,
        "D3", 1.55,
        "D4", 1.15,
        "D5", 0.9,
        "D6", 0.674
    };
    TransmissionRatios[] = {"High", 4.7};
    gearBoxMode = "auto";
    moveOffGear = 1;
    driveString = "D";
    neutralString = "N";
    reverseString = "R";
    transmissionDelay = 0.05;
};

simulation = "carx";
dampersBumpCoef = 0.025;

class Wheels {
    class LF {
        boneName = "wheel_1_1_damper";
        steering = 1;
        side = "left";
        center = "wheel_1_1_axis";
        boundary = "wheel_1_1_bound";
        width = 0.2;
        mass = 80;
        MOI = 5.3;
        dampingRate = 0.5;
        dampingRateDamaged = 1;
        dampingRateDestroyed = 1000;
        maxBrakeTorque = 3000;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0, -1, 0};
        suspForceAppPointOffset = "wheel_1_1_axis";
        tireForceAppPointOffset = "wheel_1_1_axis";
        maxCompression = 0.12;
        mMaxDroop = 0.06;
        //sprungMass = 272.5;
        springStrength = 12000;
        springDamperRate = 3000;
        longitudinalStiffnessPerUnitGravity = 100000;
        latStiffX = 25;
        latStiffY = 18000;
        frictionVsSlipGraph[] = {
            {0, 1},
            {0.5, 1},
            {1, 1}
        };
    };
    class LR: LF {
        boneName = "wheel_1_2_damper";
        steering = 0;
        center = "wheel_1_2_axis";
        boundary = "wheel_1_2_bound";
        suspForceAppPointOffset = "wheel_1_2_axis";
        tireForceAppPointOffset = "wheel_1_2_axis";
        maxHandBrakeTorque = 3000;
    };

    class RF: LF {
        boneName = "wheel_2_1_damper";
        side = "right";
        center = "wheel_2_1_axis";
        boundary = "wheel_2_1_bound";
        suspForceAppPointOffset = "wheel_2_1_axis";
        tireForceAppPointOffset = "wheel_2_1_axis";
        steering = 1;
        springStrength = 16000;
        springDamperRate = 4500;
    };

    class RR: RF {
        boneName = "wheel_2_2_damper";
        steering = 0;
        center = "wheel_2_2_axis";
        boundary = "wheel_2_2_bound";
        suspForceAppPointOffset = "wheel_2_2_axis";
        tireForceAppPointOffset = "wheel_2_2_axis";
        maxHandBrakeTorque = 3000;
    };
};
