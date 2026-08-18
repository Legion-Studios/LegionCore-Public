thrustCoef[] = {
    1.16 * 2.4,
    1.15 * 1.75,
    1.14 * 1.5,
    1.14 * 1.1,
    1.13 * 1,
    1.12 * 1,
    1.1 * 1,
    1.07 * 1,
    0.99 * 1,
    0.2 * 1,
    0,
    0,
    0
};
draconicForceXCoef = 4;
draconicForceYCoef = 4;
draconicForceZCoef = 4;
draconicTorqueXCoef[] = {6.5};
draconicTorqueYCoef[] = {1, 2, 3, 3.3, 4, 3.6, 3.4, 3.2, 3, 2.9, 2.8};
elevatorSensitivity = 1.5;
elevatorControlsSensitivityCoef = 6;

elevatorCoef[] = {0.9, 0.9, 0.95, 1, 1.1, 1.2, 1.2, 1.3, 1.25, 1.2, 1.15, 1.1, 1};
envelope[] = {0, 0.01, 0.2, 4, 6, 7.6, 8.4, 9.2, 9.4, 9.6, 9.7, 9.8, 8, 1};
rudderCoef[] = {1.6, 2, 2, 2.9, 2.8, 2, 1};
rudderControlsSensitivityCoef = 2;
rudderInfluence = 0.9 * 2;
VTOLYawInfluence = 6 * 4;
VTOLRollInfluence = 6 * 5;
VTOLPitchInfluence = 3.5;
landingAoa = 10 * 3.1415 / 180;
landingSpeed = 0;
wheelSteeringSensitivity = 1.5;
airBrake = 1;
airBrakeFrictionCoef = 100;
flaps = 1;
flapsFrictionCoef = 0.3;
fuelCapacity = 2000;
altFullForce = 4000;
altNoForce = 11000;
angleOfIndicence = 3.1415 / 180;
stallSpeed = 0;
aileronSensitivity = 1.7;
aileronCoef[] = {0.6, 0.8, 1, 1.1, 1.2, 1.2, 0.4};
aileronControlsSensitivityCoef=4;

class RotorLibHelicopterProperties {
    RTDconfig = "A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
    autoHoverCorrection[] = {3.2, 0, 0};
    defaultCollective = 0.805;
    retreatBladeStallWarningSpeed = 83;
    maxTorque = 3300;
    stressDamagePerSec = 0.01;
    maxHorizontalStabilizerLeftStress = 8000;
    maxHorizontalStabilizerRightStress = 8000;
    maxVerticalStabilizerStress = 4000;
    horizontalWingsAngleCollMin = 0;
    horizontalWingsAngleCollMax = 0;
    maxMainRotorStress = 225000;
    maxTailRotorStress = 225000;
};
