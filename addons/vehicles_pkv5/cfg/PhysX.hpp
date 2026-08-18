thrustDelay = 0.1; // How much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
maxSpeed = 90;
fuelCapacity = 14000;
brakeIdleSpeed = 1.0;
wheelCircumference = 2.15;

// Water
canFloat = 1;
waterPPInVehicle = 0;
waterResistanceCoef = 0.07;
waterLeakiness = 2.5;
waterSpeedFactor = 0.5;
waterAngularDampingCoef = 5;
waterLinearDampingCoefY = 2;
waterLinearDampingCoefX = 0.5;
maxFordingDepth = 0.5;
waterResistance = 1;

idleRpm = 700;
redRpm = 6640;

class complexGearbox {
    GearboxRatios[] = {
        "R2", -2.2,
        "N", 0,
        "D1", 4.7,
        "D2", 3.5,
        "D3", 2.6,
        "D4", 2,
        "D5", 1.5,
        "D6", 1.125,
        "D7", 0.6
    };
    TransmissionRatios[] = {"High", 15};
    gearBoxMode = "auto";
    moveOffGear = 1;
    driveString = "D";
    neutralString = "N";
    reverseString = "R";
    transmissionDelay=0.1;
};

simulation = "tankX";
dampersBumpCoef = 4.5;
clutchStrength = 180;
enginePower = 1200;
maxOmega = 310;
peakTorque = 7700;
tankTurnForce = 600000;
engineLosses = 25;
transmissionLosses = 15;

dampingRateFullThrottle = 0.3;
dampingRateZeroThrottleClutchEngaged = 3;
dampingRateZeroThrottleClutchDisengaged = 0.25;

torqueCurve[] = { {0.6061, 0.9298}, {0.6818, 0.9825}, {0.7197, 1}, {0.7576, 0.9825}, {0.8333, 0.9649}, {0.9091, 0.9123}, {1, 0.8246}
};
latency = 0.1;
switchTime = 0;

class Wheels {
    class L2 {
        boneName="Wheel_podkoloL1";
        center="Wheel_1_2_axis";
        boundary="Wheel_1_2_bound";
        damping=75;
        steering=0;
        side="left";
        weight=150;
        mass=150;
        MOI=25;
        latStiffX=25;
        latStiffY=200;
        longitudinalStiffnessPerUnitGravity=100000;
        maxBrakeTorque=40000;
        sprungMass=4000;
        springStrength=324000;
        springDamperRate=20000;
        dampingRate=1;
        dampingRateInAir=8830;
        dampingRateDamaged=10;
        dampingRateDestroyed=10000;
        maxDroop=0.15000001;
        maxCompression=0.15000001;
    };
    class L3: L2 {
        boneName="Wheel_podkoloL2";
        center="Wheel_1_3_axis";
        boundary="Wheel_1_3_bound";
    };
    class L4: L2 {
        boneName="Wheel_podkoloL3";
        center="Wheel_1_4_axis";
        boundary="Wheel_1_4_bound";
    };
    class L5: L2 {
        boneName="Wheel_podkoloL4";
        center="Wheel_1_5_axis";
        boundary="Wheel_1_5_bound";
    };
    class L6: L2 {
        boneName="Wheel_podkoloL5";
        center="Wheel_1_6_axis";
        boundary="Wheel_1_6_bound";
    };
    class L7: L2 {
        boneName="Wheel_podkoloL6";
        center="Wheel_1_7_axis";
        boundary="Wheel_1_7_bound";
    };
    class R2: L2 {
        boneName="Wheel_podkoloP1";
        center="Wheel_2_2_axis";
        boundary="Wheel_2_2_bound";
        side="right";
    };
    class R3: R2 {
        boneName="Wheel_podkoloP2";
        center="Wheel_2_3_axis";
        boundary="Wheel_2_3_bound";
    };
    class R4: R2 {
        boneName="Wheel_podkoloP3";
        center="Wheel_2_4_axis";
        boundary="Wheel_2_4_bound";
    };
    class R5: R2 {
        boneName="Wheel_podkoloP4";
        center="Wheel_2_5_axis";
        boundary="Wheel_2_5_bound";
    };
    class R6: R2 {
        boneName="Wheel_podkoloP5";
        center="Wheel_2_6_axis";
        boundary="Wheel_2_6_bound";
    };
    class R7: R2 {
        boneName="Wheel_podkoloP6";
        center="Wheel_2_7_axis";
        boundary="Wheel_2_7_bound";
    };
};
