// Water
canFloat = 1;
waterLeakiness = 2.5;   // Deterimines the amount of water in liters that goes into the vehicle
waterPPInVehicle = 0;   // Affects if passengers see water in their compartment
waterAngularDampingCoef = 0.5;
waterResistanceCoef = 0.005;
waterSpeedFactor = 1;
waterSpeedCoef = 3;
accelAidForceCoef = 30;
accelAidForceSpd = 20;
waterLinearDampingCoefY = 10;
// // Default stuff
// thrustDelay = 0;
// engineStartSpeed = 1.5;
// brakeIdleSpeed = 1.78;
maxSpeed = 250;
// fuelCapacity = 30;
wheelCircumference = 2.277;
// antiRollbarForceCoef = 0;
// antiRollbarForceLimit = 0;
// antiRollbarSpeedMin = 0;
// antiRollbarSpeedMax = 0;
idleRpm = 1000;
redRpm = 7000;

// class complexGearbox
// {
//     GearboxRatios[] = {
//         "R1", -3.8,
//         "N", 0,
//         "D1", 3.8,
//         "D2", 2.15,
//         "D3", 1.55,
//         "D4", 1.15,
//         "D5", 0.9,
//         "D6", 0.674
//     };
//     AmphibiousRatios[] = {
//         "R1", -3.8,
//         "N", 0,
//         "D1", 3.8,
//         "D2", 2.15,
//         "D3", 1.55,
//         "D4", 1.15,
//         "D5", 0.9,
//         "D6", 0.674
//     };
//     TransmissionRatios[] = {"High", 4.7};
//     gearBoxMode = "auto";
//     moveOffGear=1;
//     driveString = "D";
//     neutralString = "N";
//     reverseString = "R";
//     transmissionDelay = 0.0099999998;
// };
// dampersBumpCoef = 0.025;
differentialType = "all_limited";
frontRearSplit = 0.45;
// frontBias = 1.3;
// rearBias = 1.3;
// centreBias = 2.5;
// clutchStrength = 8;
minOmega = 104.72;
maxOmega = 850;
enginePower=400;
peakTorque=3000;
// dampingRateFullThrottle = 0.15;
// dampingRateZeroThrottleClutchDisengaged = 0.1;
// dampingRateZeroThrottleClutchEngaged = 0.2;
// slowSpeedForwardCoef = 0.5;
// normalSpeedForwardCoef = 1;
torqueCurve[] = {
    {0, 0},
    {0.221759, 0.883333},
    {0.369599, 0.933333},
    {0.431199, 0.95},
    {0.492799, 0.933333},
    {0.739198, 0.916667},
    {0.923998, 0.866667},
    {0.985598, 0.783333}
};
changeGearMinEffectivity[] = {0.94999999, 0.15000001, 0.89999998, 0.89999998, 0.89999998, 0.89999998, 0.89999998, 0.80000001};
switchTime = 0.31;
latency = 1;
class Wheels {
    class LF {
        boneName = "wheel_lf_damper";
        steering = 1;
        side = "left";
        center = "wheel_lf_axis";
        boundary = "wheel_lf_bound";
        width = 0.2;
        mass = 4000;
        MOI = 5.3;
        dampingRate = 0.5;
        maxBrakeTorque = 3000;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0, -1, 0};
        suspForceAppPointOffset = "wheel_lf_axis";
        tireForceAppPointOffset = "wheel_lf_axis";
        maxCompression = 0.2;
        MaxDroop = 0.5;
        sprungMass = 2000;
        springStrength = 50000;
        springDamperRate = 6725;
        longitudinalStiffnessPerUnitGravity = 100000;
        latStiffX = 25;
        latStiffY = 18000;
        frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
    };
    class LR: LF {
        boneName = "wheel_lb_damper";
        steering = 0;
        center = "wheel_lb_axis";
        boundary = "wheel_lb_bound";
        suspForceAppPointOffset = "wheel_lb_axis";
        tireForceAppPointOffset = "wheel_lb_axis";
        maxHandBrakeTorque = 3000;
    };

    class RF: LF {
        side = "right";
        boneName = "wheel_rf_damper";
        center = "wheel_rf_axis";
        boundary = "wheel_rf_bound";
        suspForceAppPointOffset = "wheel_rf_axis";
        tireForceAppPointOffset = "wheel_rf_axis";
        steering = 1;
    };

    class RR: RF {
        boneName = "wheel_rb_damper";
        steering = 0;
        center = "wheel_rb_axis";
        boundary = "wheel_rb_bound";
        suspForceAppPointOffset = "wheel_rb_axis";
        tireForceAppPointOffset = "wheel_rb_axis";
        maxHandBrakeTorque = 3000;
    };
};
