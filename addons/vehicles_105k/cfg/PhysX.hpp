canFloat = 1;
waterLeakiness = 2.5; // Deterimines the amount of water in liters that goes into the vehicle
waterPPInVehicle = 0; // Affects if passengers see water in their compartment
waterAngularDampingCoef = 0.5;
waterResistanceCoef = 0.005;
waterSpeedFactor = 1;
waterSpeedCoef = 3;
accelAidForceCoef = 30;
accelAidForceSpd = 20;
waterLinearDampingCoefY = 10;
waterResistance = 1;  // if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
// engineShiftY= -1;
terrainCoef = 2.0;    // different surface affects this car more, stick to tarmac
turnCoef = 2.5;       // should match the wheel turn radius
precision = 10;       // how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach
brakeDistance = 3.0;  // how many internal waypoints should the AI plan braking in advance
acceleration = 15;    // how fast acceleration does the AI think the car has
thrustDelay = 0;
engineStartSpeed = 1.5;
brakeIdleSpeed = 1.78;
maxSpeed = 248;
fuelCapacity = 30;
wheelCircumference = 2.277;
antiRollbarForceCoef = 0;
antiRollbarForceLimit = 0;
antiRollbarSpeedMin = 0;
antiRollbarSpeedMax = 0;
idleRpm = 1000;
redRpm = 7000;

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
    transmissionDelay = 0.0099999998;
};
simulation = "carx";
dampersBumpCoef = 0.025;
differentialType = "all_limited";
frontRearSplit = 0.45;
frontBias = 1.3;
rearBias = 1.3;
centreBias=2.5;
clutchStrength = 8;
minOmega = 104.72;
maxOmega = 800;
enginePower = 350;
peakTorque = 3000;
dampingRateFullThrottle = 0.15;
dampingRateZeroThrottleClutchDisengaged = 0.1;
dampingRateZeroThrottleClutchEngaged = 0.2;
slowSpeedForwardCoef = 0.5;
normalSpeedForwardCoef = 1;
torqueCurve[] = {
    {0, 0},
    {0.235619, 0.883333},
    {0.392699, 0.933333},
    {0.458149, 0.95},
    {0.523599, 0.933333},
    {0.785398, 0.916667},
    {0.981748, 0.866667},
    {1.047198, 0.783333}
};
changeGearMinEffectivity[] = {0.94999999, 0.15000001, 0.89999998, 0.89999998, 0.89999998, 0.89999998, 0.89999998, 0.80000001};
switchTime = 0.31;
latency = 1;
class Wheels {
    class LF {
        boneName = "wheel_1_1_damper";
        steering = 1;
        side = "left";
        center = "wheel_1_1_axis";
        boundary = "wheel_1_1_bound";
        width = 0.2;
        mass = 250;
        MOI = 5.3;
        dampingRate = 0.5;
        maxBrakeTorque = 3000;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0, -1, 0};
        suspForceAppPointOffset = "wheel_1_1_axis";
        tireForceAppPointOffset = "wheel_1_1_axis";
        maxCompression = 0.1;
        mMaxDroop = 0.05;
        sprungMass = 272.5;
        springStrength = 27250;
        springDamperRate = 6725;
        longitudinalStiffnessPerUnitGravity = 100000;
        latStiffX = 25;
        latStiffY = 18000;
        frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
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
        center = "wheel_2_1_axis";
        boundary = "wheel_2_1_bound";
        suspForceAppPointOffset = "wheel_2_1_axis";
        tireForceAppPointOffset = "wheel_2_1_axis";
        steering = 1;
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
