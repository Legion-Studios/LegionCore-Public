class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateVisual;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;

class CfgVehicles {
    class Plane;
    class Plane_Base_F: Plane {
        class HitPoints;
    };
    class VTOL_Base_F: Plane_Base_F {
        class AnimationSources;
        class Components;
        class HitPoints: HitPoints {
            class HitHull;
        };
        class ViewPilot;
    };
    class ls_vehicle_starsaber_base: VTOL_Base_F {
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 40;
        gearretracting = 1;
        scope = 0;
        hiddenSelections[] = {"camo1"};
        model = QPATHTOF(ls_vehicle_starsaber.p3d);
        picture = QPATHTOF(data\ui\starsaber_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\starsaber_icon_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_starsaber.jpg);
        editorSubcategory = "ls_edsubcat_planes";
        destrType = "DestructWreck";
        driverAction = "pilot_VTOL_02";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverCompartments = "Compartment1";
        driverCanEject = 1;
        driverLeftHandAnimName = "throttle";
        driverRightHandAnimName = "joystick";
        driverleftleganimname = "pedal";
        driverrightleganimname = "pedal";
        memoryPointTaskMarker = "TaskMarker_1_pos";
        memoryPointsGetInDriver = "GetIn_pilot_pos";
        memoryPointsGetInDriverDir = "GetIn_pilot_dir";
        memoryPointsGetInCargo = "GetIn_pilot_pos";
        memoryPointsGetInCargoDir = "GetIn_pilot_dir";
        memoryPointLRocket = "Missile_L_pos";
        memorypointlmissile = "Missile_L_pos";
        memoryPointRRocket = "Missile_R_pos";
        memorypointRmissile = "Missile_R_pos";
        memoryPointCM[] = {"flare_l_pos", "flare_r_pos"};
        memoryPointCMDir[] = {"flare_l_dir", "flare_r_dir"};
        extCameraPosition[] = {0, 1, -15};
        headGforceLeaningFactor[] = {0.01, 0.0002, 0.01};
        class ViewPilot: ViewPilot {
            initAngleX = 0;
        };
        cargoAction[] = {"passenger_generic01_foldhands"};
        cargoGetInAction[] = {"GetInHigh"};
        cargoGetOutAction[] = {"GetOutHigh"};
        cargoCompartments[] = {"Compartment3"};

        class WingVortices {
            class WingTipLeft {
                effectName = "WingVortices";
                position = "Vapor_Trail_Left";
            };
            class WingTipRight {
                effectName = "WingVortices";
                position = "Vapor_Trail_Right";
            };
        };
        class Exhausts {
            class Exhaust_main {
                position = "exhaust_l_pos";
                direction = "exhaust_l_dir";
                effect = "ExhaustsEffectPlane";
            };
            class Exhaust_main2 {
                position = "exhaust_r_pos";
                direction = "exhaust_r_dir";
                effect = "ExhaustsEffectPlane";
            };
        };
        antiRollbarForceCoef = 0;
        antiRollbarForceLimit = 0;
        antiRollbarSpeedMin = 50;
        antiRollbarSpeedMax = 300;

        class MarkerLights {
            class PositionRed {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 75;
                name = "PositionLight_red_1_pos";
                drawLight = 1;
                drawLightSize = 0.15;
                drawLightCenterSize = 0.04;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.75;
                    hardLimitEnd = 1;
                };
            };
            class PositionGreen: PositionRed {
                color[] = {0, 0.8, 0};
                ambient[] = {0, 0.08, 0};
                name = "PositionLight_green_1_pos";
            };
            class CollisionRed: PositionRed {
                color[] = {0.9, 0.15, 0.1};
                ambient[] = {0.09, 0.015, 0.01};
                name = "CollisionLight_red_1_pos";
                blinking = 1;
                blinkingPattern[] = {0.2, 1.3};
                blinkingPatternGuarantee = 0;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.08;
            };
        };
        class damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(data\camo1.rvmat), "A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext01_damage.rvmat", "A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext01_destruct.rvmat"
            };
        };
        accuracy = 0.5;
        driverForceOptics = "false";
        armor = 50;
        armorStructural = 2;
        explosionShielding = 1;
        epeImpulseDamageCoef = 50;
        waterLeakiness = 8;
        waterResistanceCoef = 0.03;
        ejectSpeed[] = {0, -2, 0};
        damageResistance = 0.0004;
        laserScanner = 1;
        showAllTargets = 4;
        showCrewAim = 0;
        radarTargetSize = 0.15;
        visualTargetSize = 0.2;
        irTargetSize = 0.2;
        lockDetectionSystem = 2 + 8 + 4 + 16;
        incomingMissileDetectionSystem = 2 + 8 + 16;
        maximumLoad = 3000;
        supplyRadius = 5;
        getInRadius = 3;
        selectionRotorStill = "Rotors_static";
        selectionRotorMove = "Rotors_blur";
        cabinOpening = 1;

        memorypointGun[] = {"laserSmall_r_pos", "laserSmall_l_pos", "laserSmaller_r_pos", "laserSmaller_l_pos"};
        gunBeg[] = {"laserSmall_r_dir", "laserSmall_l_dir", "laserSmaller_r_dir", "laserSmaller_l_dir"};
        gunEnd[] = {"laserSmall_r_pos", "laserSmall_l_pos", "laserSmaller_r_pos", "laserSmaller_l_pos"};

        weapons[] = {
            "ls_20mw_P64E1_RC",
            "missiles_DAR",
            "ls_weapon_CMFlareLauncher"
        };
        magazines[] = {
            "ls_magazine_20mm_PS56D_x676",
            "ls_magazine_20mm_PS56D_x676",
            "24Rnd_missiles",
            "24Rnd_missiles",
            "24Rnd_missiles",
            "Laserbatteries",
            "ls_mag_120rnd_CMFlare_green",
            "ls_mag_120rnd_CMFlare_green"
        };
        minGunElev = -5;
        maxGunElev = 5;
        minGunTurn = 8;
        maxGunTurn = 8;
        maxSpeed = 1300;
        landingAoa = 0.113446;
        landingSpeed = 250;
        engineMOI = 16;
        stallSpeed = 190;
        stallWarningTreshold = 0.07;
        wheelSteeringSensitivity = 1.5;
        airBrake = 1;
        airBrakeFrictionCoef = 10;
        flaps = 1;
        flapsFrictionCoef = 0.32;
        gearsUpFrictionCoef = 10;
        airFriction0[] = {75, 50, 12};
        airFriction1[] = {75, 50, 12};
        airFriction2[] = {75, 50, 12};
        airFrictionCoefs0[] = {0, 0, 0};
        airFrictionCoefs1[] = {0.1, 0.5, 0.0066};
        airFrictionCoefs2[] = {0.001, 0.005, 6.8e-005};
        angleOfIndicence = 0.0523599;
        envelope[] = {0, 0.11, 0.43, 0.97, 1.72, 2.69, 3.87, 5.27, 6.89, 8.72, 9.7, 9.6, 9.2, 8.5, 8.2, 8};
        altNoForce = 13000;
        altFullForce = 10000;
        throttleToThrustLogFactor = 2;
        thrustCoef[] = {1.76, 1.69, 1.62, 1.68, 1.74, 1.81, 1.89, 1.95, 1.96, 1.96, 1.92, 1.4, 1, 0.9, 0.6, 0.2};
        aileronSensitivity = 1.23;
        aileronCoef[] = {0.4, 0.5, 0.8, 0.95, 1.02, 1.04, 1.03, 1.01, 1, 0.7, 0.6, 0.55, 0.5, 0.45, 0.4, 0.35};
        elevatorSensitivity = 1.3;
        elevatorCoef[] = {0.6, 0.9, 0.5, 0.4, 0.35, 0.3, 0.3};
        rudderInfluence = 0.9;
        maxOmega = 2000;
        rudderCoef[] = {1.6, 2, 2, 2.9, 3, 2.5, 2};
        aileronControlsSensitivityCoef = 4;
        elevatorControlsSensitivityCoef = 4.5;
        rudderControlsSensitivityCoef = 6;
        draconicForceXCoef = 6;
        draconicForceYCoef = 5.5;
        draconicForceZCoef = 6.5;
        draconicTorqueXCoef = 2.1;
        draconicTorqueYCoef = 1;
        vtol = 4;
        VTOLPitchInfluence = 2;
        VTOLRollInfluence = 10;
        VTOLYawInfluence = 12;
        acceleration = 175;
        fuelCapacity = 1500;
        defaultUserMFDvalues[] = {0.15000001, 1, 0.15000001, 1};

        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armorComponent = "Hull_Component";
                armor = 3;
                explosionShielding = 0.75;
                name = "HitHull";
                passThrough = 0.5;
                visual = "zbytek";
                radius = 0.30000001;
                minimalHit = 0.02;
                depends = "0";
                material = -1;
            };
            class HitEngine: HitHull {
                armor = 1.1;
                explosionShielding = 0.75;
                name = "HitEngine";
                passThrough = 0.1;
                visual = "Hit_Engine";
                radius = 0.2;
                minimalHit = 0.0099999998;
            };
            class HitGlass: HitHull {
                armorComponent = "Hit_Glass";
                armor = 0.25;
                explosionShielding = 0.5;
                name = "HitGlass";
                visual = "camo2";
                radius = 0.2;
                minimalHit = 0.0099999998;
            };
            class HitGear: HitHull {
                armorComponent = "Hit_Gear";
                armor = 0.25;
                explosionShielding = 0.5;
                name = "hitgear";
                radius = 0.2;
                minimalHit = 0.0099999998;
            };
            class HitEngine2: HitEngine {
                name = "HitEngine2";
                visual = "Hit_Engine2";
            };
            class HitAvionics: HitHull {
                armor = 2;
                explosionShielding = 0.75;
                name = "HitAvionics";
                passThrough = 0.2;
                visual = "Hit_Avionics";
                radius = 0.2;
                depends = "0";
            };
            class HitFuel: HitHull {
                armor = 2.75;
                explosionShielding = 0.5;
                name = "HitFuel";
                passThrough = 0.5;
                visual = "Hit_Fuel";
                radius = 0.08;
                minimalHit = 0.0099999998;
                depends = "(hitEngine1 + hitEngine2) / 4";
            };
            class HitLAileron: HitHull {
                armor = 1.1;
                explosionShielding = 0.5;
                name = "HitLAileron";
                passThrough = 0;
                visual = "Hit_AileronL";
                radius = 0.1;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitRAileron: HitLAileron {
                name = "HitRAileron";
                visual = "Hit_AileronR";
            };
            class HitLCRudder: HitHull {
                armor = 1;
                explosionShielding = 0.5;
                name = "HitLCRudder";
                passThrough = 0;
                visual = "Hit_RudderL";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitRRudder: HitLCRudder {
                armor = 1;
                explosionShielding = 0.5;
                name = "HitRRudder";
                passThrough = 0;
                visual = "Hit_RudderR";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitLCElevator: HitHull {
                armor = 1;
                explosionShielding = 0.5;
                name = "HitLCElevator";
                passThrough = 0;
                visual = "Hit_ElevatorL";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitRElevator: HitLCElevator {
                armor = 1;
                explosionShielding = 0.5;
                name = "HitRElevator";
                passThrough = 0;
                visual = "Hit_ElevatorR";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
        };
        class AnimationSources: AnimationSources {};
        lightOnGear = 1;
        aggregateReflectors[] = {{
            "Light_1",
            "Light_2",
            "Light_3",
            "Light_4",
            "Light_5"
        }};

        class MFD {
            class AirplaneHUD {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.082, 0.408, 0.7, 1};
                helmetMountedDisplay = 1;
                helmetPosition[] = {-0.0375, 0.0375, 0.1};
                helmetRight[] = {0.075, 0, 0};
                helmetDown[] = {0, -0.075, 0};
                font = "";
                turret[] = {-2};
                class Bones {
                    class HUDCenter {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                    };
                    class HorizonBankSource {
                        type = "rotational";
                        source = "HorizonBank";
                        center[] = {0.5, 0.5};
                        min = -6.2831;
                        max = 6.2831;
                        minAngle = -360;
                        maxAngle = 360;
                    };
                    class HorizonDiveSource {
                        source = "horizonDive";
                        type = "linear";
                        min = -1;
                        max = 1;
                        minPos[] = {0.5, 2.5};
                        maxPos[] = {0.5, -1.5};
                    };
                    class VelocityVector {
                        type = "vector";
                        source = "velocityToView";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class ForwardVector {
                        type = "vector";
                        source = "forward";
                        pos0[] = {0, 0};
                        pos10[] = {0.234, 0.23};
                    };
                    class WeaponAim {
                        type = "vector";
                        source = "weaponToView";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class TargetingPodDir {
                        source = "pilotcameratoview";
                        type = "vector";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class TargetingPodTarget {
                        source = "pilotcameratargettoview";
                        type = "vector";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class SliderDiveSource {
                        type = "linear";
                        source = "horizonDive";
                        min = "RAD(-10)";
                        max = "RAD(10)";
                        minPos[] = {0.105, 0.38};
                        maxPos[] = {0.105, 0.54};
                    };
                    class SliderDiveSource30: SliderDiveSource {
                        min = "RAD(10)";
                        max = "RAD(30)";
                        minPos[] = {0, -0.04};
                        maxPos[] = {0, "0)"};
                    };
                    class SliderDiveSource90: SliderDiveSource30 {
                        min = "RAD(30)";
                        max = "RAD(90)";
                        minPos[] = {0, -0.04};
                    };
                    class SliderDiveSource30m: SliderDiveSource {
                        min = "RAD(-30)";
                        max = "RAD(-10)";
                        minPos[] = {0, 0};
                        maxPos[] = {0, 0.04};
                    };
                    class SliderDiveSource90m: SliderDiveSource30m {
                        min = "RAD(-90)";
                        max = "RAD(-30)";
                        maxPos[] = {0, 0.04};
                    };
                    class SliderAltitudeSource {
                        type = "linear";
                        source = "altitudeAGL";
                        sourceOffset = -3;
                        min = 0;
                        max = 1000;
                        minPos[] = {0.885, 0.2};
                        maxPos[] = {0.885, 0.375};
                    };
                    class GForceSource {
                        type = "linear";
                        source = "gmeter";
                        sourceScale = 0.15;
                        min = -1;
                        max = 3;
                        minPos[] = {0.105, 0.7};
                        maxPos[] = {0.105, 0.86};
                    };
                    class SliderVSpeedSource {
                        type = "linear";
                        source = "vspeed";
                        min = -15;
                        max = 15;
                        minPos[] = {0.795, 0.6};
                        maxPos[] = {0.795, 0.84};
                    };
                    class ImpactPoint {
                        type = "vector";
                        source = "ImpactPointToView";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class ImpactPointRockets {
                        type = "vector";
                        source = "ImpactPointToView";
                        pos0[] = {0.5, 0.565};
                        pos10[] = {0.734, 0.795};
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPointToView";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class rtdRPM1 {
                        type = "linear";
                        source = "rpm";
                        min = 0.1;
                        max = 1;
                        minPos[] = {0, -0.075};
                        maxPos[] = {0, 0};
                    };
                    class rtdRPM2: rtdRPM1 {
                        source = "rpm";
                    };
                    class Limit0109 {
                        type = "limit";
                        limits[] = {0.1, 0.1, 0.9, 0.9};
                    };
                    class Target {
                        source = "targettoview";
                        type = "vector";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class ThrustVectoringRotation {
                        type = "rotational";
                        source = "vtolvectoring";
                        sourceScale = 100;
                        center[] = {0.06, 0.145};
                        min = 0;
                        max = 100;
                        minAngle = 0;
                        maxAngle = -90;
                        aspectRatio = 0.982906;
                    };
                    class MissileFlightTimeRot1 {
                        type = "rotational";
                        source = "MissileFlightTime";
                        sourceScale = 0.46;
                        center[] = {0, 0};
                        min = 0;
                        max = 0.5;
                        minAngle = 0;
                        maxAngle = 18;
                        aspectRatio = 0.982906;
                    };
                    class MissileFlightTimeRot2: MissileFlightTimeRot1 {
                        maxAngle = 36;
                        max = 1;
                    };
                    class MissileFlightTimeRot3: MissileFlightTimeRot1 {
                        maxAngle = 54;
                        max = 1.5;
                    };
                    class MissileFlightTimeRot4: MissileFlightTimeRot1 {
                        maxAngle = 72;
                        max = 2;
                    };
                    class MissileFlightTimeRot5: MissileFlightTimeRot1 {
                        maxAngle = 90;
                        max = 2.5;
                    };
                    class MissileFlightTimeRot6: MissileFlightTimeRot1 {
                        maxAngle = 108;
                        max = 3;
                    };
                    class MissileFlightTimeRot7: MissileFlightTimeRot1 {
                        maxAngle = 126;
                        max = 3.5;
                    };
                    class MissileFlightTimeRot8: MissileFlightTimeRot1 {
                        maxAngle = 144;
                        max = 4;
                    };
                    class MissileFlightTimeRot9: MissileFlightTimeRot1 {
                        maxAngle = 162;
                        max = 4.5;
                    };
                    class MissileFlightTimeRot10: MissileFlightTimeRot1 {
                        maxAngle = 180;
                        max = 5;
                    };
                    class MissileFlightTimeRot11: MissileFlightTimeRot1 {
                        maxAngle = 198;
                        max = 5.5;
                    };
                    class MissileFlightTimeRot12: MissileFlightTimeRot1 {
                        maxAngle = 216;
                        max = 6;
                    };
                    class MissileFlightTimeRot13: MissileFlightTimeRot1 {
                        maxAngle = 234;
                        max = 6.5;
                    };
                    class MissileFlightTimeRot14: MissileFlightTimeRot1 {
                        maxAngle = 252;
                        max = 7;
                    };
                    class MissileFlightTimeRot15: MissileFlightTimeRot1 {
                        maxAngle = 270;
                        max = 7.5;
                    };
                    class MissileFlightTimeRot16: MissileFlightTimeRot1 {
                        maxAngle = 288;
                        max = 8;
                    };
                    class MissileFlightTimeRot17: MissileFlightTimeRot1 {
                        maxAngle = 306;
                        max = 8.5;
                    };
                    class MissileFlightTimeRot18: MissileFlightTimeRot1 {
                        maxAngle = 324;
                        max = 9;
                    };
                    class MissileFlightTimeRot19: MissileFlightTimeRot1 {
                        maxAngle = 342;
                        max = 9.5;
                    };
                    class MissileFlightTimeRot20: MissileFlightTimeRot1 {
                        maxAngle = 360;
                        max = 10;
                    };
                    class HorizonBankRotFull {
                        type = "rotational";
                        source = "horizonBank";
                        center[] = {0, 0};
                        min = -3.1416;
                        max = 3.1416;
                        minAngle = -180;
                        maxAngle = 180;
                        aspectRatio = 1;
                    };
                    class Airport1 {
                        type = "vector";
                        source = "airportCorner1toview";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                    };
                    class Airport2: Airport1 {
                        source = "airportCorner2toview";
                    };
                    class Airport3: Airport1 {
                        source = "airportCorner3toview";
                    };
                    class Airport4: Airport1 {
                        source = "airportCorner4toview";
                    };
                    class ILS_H {
                        type = "ils";
                        pos0[] = {0.5, 0.5};
                        pos3[] = {0.5702, 0.5};
                    };
                    class ILS_W: ILS_H {
                        pos3[] = {0.5, 0.569};
                    };
                };
                class Draw {
                    alpha = "user3";
                    color[] = {"user0", "user1", "user2"};
                    condition = "(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
                    class VelocityLine {
                        type = "line";
                        width = 2;
                        points[] = {{"HUDCenter", 1}, {"VelocityVector", 1}, {}, {"VelocityVector", {0, -0.00491453}, 1}, {"VelocityVector", {0.0025, -0.00425598}, 1}, {"VelocityVector", {0.00433, -0.00245726}, 1}, {"VelocityVector", {0.005, 0}, 1}, {"VelocityVector", {0.00433, 0.00245726}, 1}, {"VelocityVector", {0.0025, 0.00425598}, 1}, {"VelocityVector", {0, 0.00491453}, 1}, {"VelocityVector", {-0.0025, 0.00425598}, 1}, {"VelocityVector", {-0.00433, 0.00245726}, 1}, {"VelocityVector", {-0.005, 0}, 1}, {"VelocityVector", {-0.00433, -0.00245726}, 1}, {"VelocityVector", {-0.0025, -0.00425598}, 1}, {"VelocityVector", {0, -0.00491453}, 1}, {}};
                    };
                    class Static {
                        type = "line";
                        width = 3;
                        points[] = {{"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, 0.01}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0, 0}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, -0.01}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, 0.01}, 1}, {}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, 0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.088, 0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.088, -0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, -0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, 0.015}, 1}, {}, {{0.1, 0.3}, 1}, {{0.1, 0.62}, 1}, {}, {{0.1, 0.3}, 1}, {{0.08, 0.3}, 1}, {}, {{0.1, 0.34}, 1}, {{0.08, 0.34}, 1}, {}, {{0.1, 0.38}, 1}, {{0.08, 0.38}, 1}, {}, {{0.1, 0.46}, 1}, {{0.08, 0.46}, 1}, {}, {{0.1, 0.54}, 1}, {{0.08, 0.54}, 1}, {}, {{0.1, 0.58}, 1}, {{0.08, 0.58}, 1}, {}, {{0.1, 0.62}, 1}, {{0.08, 0.62}, 1}, {}, {"GForceSource", {0.015, 0.01}, 1}, {"GForceSource", {0, 0}, 1}, {"GForceSource", {0.015, -0.01}, 1}, {"GForceSource", {0.015, 0.01}, 1}, {}, {{0.1, 0.688}, 1}, {{0.1, 0.82}, 1}, {}, {{0.1, 0.7}, 1}, {{0.08, 0.7}, 1}, {}, {{0.1, 0.74}, 1}, {{0.08, 0.74}, 1}, {}, {{0.1, 0.78}, 1}, {{0.08, 0.78}, 1}, {}, {{0.1, 0.82}, 1}, {{0.08, 0.82}, 1}, {}, {{0.46, 0.07}, 1}, {{0.54, 0.07}, 1}, {{0.54, 0.035}, 1}, {{0.46, 0.035}, 1}, {{0.46, 0.07}, 1}, {}, {{0.15, 0.115}, 1}, {{0.85, 0.115}, 1}, {}, {{0, 0.96}, 1}, {{1.1, 0.96}, 1}, {}, {{0.48, 0.5}, 1}, {{0.49, 0.5}, 1}, {}, {{0.51, 0.5}, 1}, {{0.52, 0.5}, 1}, {}, {{0.5, 0.49}, 1}, {{0.5, 0.48}, 1}, {}, {{0.5, 0.51}, 1}, {{0.5, 0.52}, 1}, {}, {"WeaponAim", 1, {-0.02, 0}, 1}, {"WeaponAim", 1, {-0.01, 0}, 1}, {}, {"WeaponAim", 1, {0.01, 0}, 1}, {"WeaponAim", 1, {0.02, 0}, 1}, {}, {"WeaponAim", 1, {0, -0.01}, 1}, {"WeaponAim", 1, {0, -0.02}, 1}, {}, {"WeaponAim", 1, {0, 0.01}, 1}, {"WeaponAim", 1, {0, 0.02}, 1}, {}, {"HUDCenter", {-0.165, 7.08909e-09}, 1}, {"HUDCenter", {-0.22, 9.45212e-09}, 1}, {}, {"HUDCenter", {0.165, -1.93397e-09}, 1}, {"HUDCenter", {0.22, -2.57863e-09}, 1}, {}, {"HUDCenter", {-0.0825, 0.140452}, 1}, {"HUDCenter", {-0.09625, 0.16386}, 1}, {}, {"HUDCenter", {0.0825, 0.140452}, 1}, {"HUDCenter", {0.09625, 0.16386}, 1}, {}, {"HUDCenter", {-0.142894, 0.0810897}, 1}, {"HUDCenter", {-0.16671, 0.0946047}, 1}, {}, {"HUDCenter", {0.142894, 0.0810897}, 1}, {"HUDCenter", {0.16671, 0.0946047}, 1}, {}, {"HUDCenter", {-0.116673, 0.114678}, 1}, {"HUDCenter", {-0.155564, 0.152904}, 1}, {}, {"HUDCenter", {0.116673, 0.114678}, 1}, {"HUDCenter", {0.155563, 0.152904}, 1}, {}, {{0.0333333, 0.148667}, 1}, {{0.054, 0.162}, 1}, {{0.135, 0.162}, 1}, {{0.135, 0.148667}, 1}, {{0.126333, 0.139667}, 1}, {{0.118, 0.139667}, 1}, {{0.0933333, 0.129333}, 1}, {{0.0333333, 0.129333}, 1}, {{0.0156667, 0.111}, 1}, {{0.00866667, 0.115333}, 1}, {{0.0116667, 0.136}, 1}, {}};
                    };
                    class DiveNumber {
                        type = "text";
                        source = "horizondive";
                        sourceScale = 57.29578;
                        sourceOffset = 0;
                        align = "left";
                        scale = 1;
                        pos[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.085, 0 - 0.011}, 1};
                        right[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.12, 0 - 0.011}, 1};
                        down[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.085, 0.03 - 0.011}, 1};
                    };
                    class VSpeedGroup {
                        condition = "on";
                        class VSpeedNumber {
                            type = "text";
                            source = "vspeed";
                            sourceScale = 1;
                            align = "center";
                            scale = 1;
                            pos[] = {{0.82 + 0.07, 0.728}, 1};
                            right[] = {{0.86 + 0.07, 0.728}, 1};
                            down[] = {{0.82 + 0.07, 0.763}, 1};
                        };
                        class Static {
                            type = "line";
                            width = 3;
                            points[] = {{{0.849, 0.76}, 1}, {{0.929, 0.76}, 1}, {{0.929, 0.725}, 1}, {{0.849, 0.725}, 1}, {{0.849, 0.76}, 1}, {}};
                        };
                    };
                    class VSpeedGroupUp {
                        condition = "vspeed";
                        class Static {
                            type = "line";
                            width = 3;
                            points[] = {{{0.869, 0.715}, 1}, {{0.909, 0.715}, 1}, {{0.889, 0.695}, 1}, {{0.869, 0.715}, 1}, {}};
                        };
                    };
                    class VSpeedGroupDown {
                        condition = "-vspeed";
                        class Static {
                            type = "line";
                            width = 3;
                            points[] = {{{0.869, 0.77}, 1}, {{0.909, 0.77}, 1}, {{0.889, 0.79}, 1}, {{0.869, 0.77}, 1}, {}};
                        };
                    };
                    class AltGroup {
                        condition = "1000 - altitudeAGL";
                        class Static {
                            type = "line";
                            width = 3;
                            points[] = {{"SliderAltitudeSource", {0.024, 0.01}, 1}, {"SliderAltitudeSource", {0.009, 0}, 1}, {"SliderAltitudeSource", {0.024, -0.01}, 1}, {"SliderAltitudeSource", {0.024, 0.01}, 1}, {}, {"SliderAltitudeSource", {0.035, 0.015}, 1}, {"SliderAltitudeSource", {0.093, 0.015}, 1}, {"SliderAltitudeSource", {0.093, -0.015}, 1}, {"SliderAltitudeSource", {0.035, -0.015}, 1}, {"SliderAltitudeSource", {0.035, 0.015}, 1}, {}, {{0.889, 0.2}, 1}, {{0.889, 0.375}, 1}, {}, {{0.879, 0.2}, 1}, {{0.899, 0.2}, 1}, {}, {{0.879, 0.375}, 1}, {{0.899, 0.375}, 1}, {}};
                        };
                        class AltNumber {
                            type = "text";
                            source = "altitudeAGL";
                            sourceScale = 1;
                            sourceOffset = -3;
                            align = "left";
                            scale = 1;
                            pos[] = {"SliderAltitudeSource", {0.085, 0 - 0.011}, 1};
                            right[] = {"SliderAltitudeSource", {0.11, 0 - 0.011}, 1};
                            down[] = {"SliderAltitudeSource", {0.085, 0.03 - 0.011}, 1};
                        };
                        class AltStatic50 {
                            type = "text";
                            source = "static";
                            text = "1000";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.885, 0.171}, 1};
                            right[] = {{0.925, 0.171}, 1};
                            down[] = {{0.885, 0.201}, 1};
                        };
                    };
                    class SpeedNumber {
                        type = "text";
                        source = "speed";
                        sourceScale = 3.6;
                        sourceLength = 3;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.13, 0.22}, 1};
                        down[] = {{0.13, 0.26}, 1};
                        right[] = {{0.2, 0.22}, 1};
                    };
                    class Angle_90 {
                        type = "text";
                        source = "static";
                        text = "90";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.285}, 1};
                        right[] = {{0.11, 0.285}, 1};
                        down[] = {{0.07, 0.315}, 1};
                    };
                    class Angle_30 {
                        type = "text";
                        source = "static";
                        text = "30";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.325}, 1};
                        right[] = {{0.11, 0.325}, 1};
                        down[] = {{0.07, 0.355}, 1};
                    };
                    class Angle_10 {
                        type = "text";
                        source = "static";
                        text = "10";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.365}, 1};
                        right[] = {{0.11, 0.365}, 1};
                        down[] = {{0.07, 0.395}, 1};
                    };
                    class Angle_0 {
                        type = "text";
                        source = "static";
                        text = "0";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.445}, 1};
                        right[] = {{0.11, 0.445}, 1};
                        down[] = {{0.07, 0.475}, 1};
                    };
                    class Angle_10m {
                        type = "text";
                        source = "static";
                        text = "-10";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.525}, 1};
                        right[] = {{0.11, 0.525}, 1};
                        down[] = {{0.07, 0.555}, 1};
                    };
                    class Angle_30m {
                        type = "text";
                        source = "static";
                        text = "-30";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.565}, 1};
                        right[] = {{0.11, 0.565}, 1};
                        down[] = {{0.07, 0.595}, 1};
                    };
                    class Angle_90m {
                        type = "text";
                        source = "static";
                        text = "-90";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.605}, 1};
                        right[] = {{0.11, 0.605}, 1};
                        down[] = {{0.07, 0.635}, 1};
                    };
                    class GMeterStatic3 {
                        type = "text";
                        source = "static";
                        text = "3";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.683}, 1};
                        right[] = {{0.11, 0.683}, 1};
                        down[] = {{0.07, 0.713}, 1};
                    };
                    class GMeterStatic2 {
                        type = "text";
                        source = "static";
                        text = "2";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.723}, 1};
                        right[] = {{0.11, 0.723}, 1};
                        down[] = {{0.07, 0.753}, 1};
                    };
                    class GMeterStatic1 {
                        type = "text";
                        source = "static";
                        text = "1";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.763}, 1};
                        right[] = {{0.11, 0.763}, 1};
                        down[] = {{0.07, 0.793}, 1};
                    };
                    class GMeterStatic0 {
                        type = "text";
                        source = "static";
                        text = "0";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.07, 0.803}, 1};
                        right[] = {{0.11, 0.803}, 1};
                        down[] = {{0.07, 0.833}, 1};
                    };
                    class CollectiveNumber {
                        type = "text";
                        source = "throttle";
                        sourceScale = 100;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.889, 0.46}, 1};
                        right[] = {{0.939, 0.46}, 1};
                        down[] = {{0.889, 0.495}, 1};
                    };
                    class CollectiveText {
                        type = "text";
                        source = "static";
                        text = "%";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.899, 0.46}, 1};
                        right[] = {{0.949, 0.46}, 1};
                        down[] = {{0.899, 0.495}, 1};
                    };
                    class ThrustVectoring {
                        condition = "1+vtolvectoring";
                        class VectorigNumber {
                            type = "text";
                            source = "vtolvectoring";
                            sourceScale = 90;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.102, 0.14}, 1};
                            right[] = {{0.127, 0.14}, 1};
                            down[] = {{0.102, 0.155}, 1};
                        };
                        class VectoringArrow {
                            type = "line";
                            width = 3;
                            points[] = {{"ThrustVectoringRotation", {-0.034, -0.006}, 1}, {"ThrustVectoringRotation", {-0.044, 0}, 1}, {"ThrustVectoringRotation", {-0.034, 0.006}, 1}, {"ThrustVectoringRotation", {-0.034, -0.006}, 1}, {}, {"ThrustVectoringRotation", {-0.044, 0}, 1}, {"ThrustVectoringRotation", {-0.004, 0}, 1}, {}};
                        };
                    };
                    class ThrustVectoringAuto {
                        condition = "-vtolvectoring";
                        class VectorigNumber {
                            type = "text";
                            source = "static";
                            sourceScale = 1;
                            text = "AUTO";
                            align = "left";
                            scale = 1;
                            pos[] = {{0.103, 0.14}, 1};
                            right[] = {{0.123, 0.14}, 1};
                            down[] = {{0.103, 0.155}, 1};
                        };
                    };
                    class EngineRPM {
                        type = "line";
                        width = 3;
                        points[] = {{{0.89, 0.5}, 1}, {{0.89, 0.66}, 1}, {}, {{0.92, 0.5}, 1}, {{0.86, 0.5}, 1}, {}, {{0.92, 0.66}, 1}, {{0.86, 0.66}, 1}, {}, {{0.91, 0.54}, 1}, {{0.87, 0.54}, 1}, {}, {{0.91, 0.58}, 1}, {{0.87, 0.58}, 1}, {}, {{0.91, 0.62}, 1}, {{0.87, 0.62}, 1}, {}};
                    };
                    class EngineRPMLines {
                        type = "line";
                        width = 5;
                        points[] = {{{0.9 + 0.01, 0.66}, 1}, {"rtdrpm1", {0.9 + 0.01, 0.66}, 1}, {}, {{0.86 + 0.01, 0.66}, 1}, {"rtdrpm2", {0.86 + 0.01, 0.66}, 1}, {}, {}};
                    };
                    class RPM60Text {
                        type = "text";
                        source = "static";
                        text = "60";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.925, 0.645}, 1};
                        right[] = {{0.955, 0.645}, 1};
                        down[] = {{0.925, 0.67}, 1};
                    };
                    class RPM80Text {
                        type = "text";
                        source = "static";
                        text = "80";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.925, 0.605}, 1};
                        right[] = {{0.955, 0.605}, 1};
                        down[] = {{0.925, 0.63}, 1};
                    };
                    class RPM100Text {
                        type = "text";
                        source = "static";
                        text = "100";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.925, 0.565}, 1};
                        right[] = {{0.955, 0.565}, 1};
                        down[] = {{0.925, 0.59}, 1};
                    };
                    class RPM120Text {
                        type = "text";
                        source = "static";
                        text = "120";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.925, 0.525}, 1};
                        right[] = {{0.955, 0.525}, 1};
                        down[] = {{0.925, 0.55}, 1};
                    };
                    class HeadingNumber {
                        type = "text";
                        source = "heading";
                        sourceScale = 1;
                        align = "center";
                        scale = 1;
                        pos[] = {{0.8 - 0.302, 0.082 - 0.043}, 1};
                        right[] = {{0.84 - 0.302, 0.082 - 0.043}, 1};
                        down[] = {{0.8 - 0.302, 0.117 - 0.043}, 1};
                    };
                    class HeadingRotationArrow {
                        condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
                        class HeadingArrow {
                            type = "line";
                            width = 3;
                            points[] = {{{0.52, 0.08}, 1}, {{0.5, 0.11}, 1}, {{0.48, 0.08}, 1}, {{0.52, 0.08}, 1}, {}};
                        };
                    };
                    class HeadingRotation {
                        condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
                        class HeadingHeadNumber {
                            type = "text";
                            source = "cameraDir";
                            sourceScale = 1;
                            align = "center";
                            scale = 1;
                            pos[] = {{0.8 - 0.302, 0.082 + 0.001}, 1};
                            right[] = {{0.83 - 0.302, 0.082 + 0.001}, 1};
                            down[] = {{0.8 - 0.302, 0.113 + 0.001}, 1};
                        };
                        class HeadingArrow {
                            type = "line";
                            width = 3;
                            points[] = {{{0.478, 0.075}, 1}, {{0.522, 0.075}, 1}, {{0.552, 0.095}, 1}, {{0.522, 0.115}, 1}, {{0.478, 0.115}, 1}, {{0.448, 0.095}, 1}, {{0.478, 0.075}, 1}, {}};
                        };
                    };
                    class HeadingScale {
                        type = "scale";
                        horizontal = 1;
                        source = "heading";
                        sourceScale = 0.1;
                        sourceoffset = 0;
                        width = 3;
                        NeverEatSeaWeed = 1;
                        top = 0.15;
                        center = 0.5;
                        bottom = 0.85;
                        lineXleft = 0.114;
                        lineYright = 0.12;
                        lineXleftMajor = 0.114;
                        lineYrightMajor = 0.13;
                        majorLineEach = 2;
                        numberEach = 6;
                        step = 0.5;
                        stepSize = 0.0344828;
                        align = "center";
                        scale = 1;
                        pos[] = {0.15, 0.13};
                        right[] = {0.21, 0.13};
                        down[] = {0.15, 0.17};
                    };
                    class HorizonBanking {
                        type = "line";
                        width = 3;
                        clipTL[] = {0, 0.1};
                        clipBR[] = {1, 0.9};
                        points[] = {{"HorizonBankSource", {0.16, 0}, 1}, {"HorizonBankSource", {0.1, 0}, 1}, {"HorizonBankSource", {0.085, -0.015}, 1}, {"HorizonBankSource", {0.07, 0}, 1}, {"HorizonBankSource", {0.05, 0}, 1}, {}, {"HorizonBankSource", {-0.16, 0}, 1}, {"HorizonBankSource", {-0.1, 0}, 1}, {"HorizonBankSource", {-0.085, -0.015}, 1}, {"HorizonBankSource", {-0.07, 0}, 1}, {"HorizonBankSource", {-0.05, 0}, 1}, {}};
                    };
                    class CoordXNumber {
                        type = "text";
                        source = "coordinateX";
                        sourceScale = 0.01;
                        sourceLength = 3;
                        sourceOffset = -0.5;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.809, 0.961}, 1};
                        right[] = {{0.859, 0.961}, 1};
                        down[] = {{0.809, 0.996}, 1};
                    };
                    class CoordYNumber: CoordXNumber {
                        source = "coordinateY";
                        pos[] = {{0.899, 0.961}, 1};
                        right[] = {{0.949, 0.961}, 1};
                        down[] = {{0.899, 0.996}, 1};
                    };
                    class Time: CoordXNumber {
                        source = "time";
                        text = "%X";
                        align = "left";
                        pos[] = {{0.605, 0.961}, 1};
                        right[] = {{0.655, 0.961}, 1};
                        down[] = {{0.605, 0.996}, 1};
                    };
                    class CurrentWeapon {
                        type = "text";
                        source = "weapon";
                        sourceScale = 1;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.979, 0.889}, 1};
                        right[] = {{1.029, 0.889}, 1};
                        down[] = {{0.979, 0.924}, 1};
                    };
                    class CurrentAmmo: CurrentWeapon {
                        source = "ammo";
                        align = "left";
                        pos[] = {{0.979, 0.921}, 1};
                        right[] = {{1.029, 0.921}, 1};
                        down[] = {{0.979, 0.956}, 1};
                    };
                    class CoordXText {
                        type = "text";
                        source = "static";
                        text = "GRID:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.655, 0.961}, 1};
                        right[] = {{0.705, 0.961}, 1};
                        down[] = {{0.655, 0.996}, 1};
                    };
                    class CoordYText {
                        type = "text";
                        source = "static";
                        text = "";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.875, 0.961}, 1};
                        right[] = {{0.925, 0.961}, 1};
                        down[] = {{0.875, 0.996}, 1};
                    };
                    class LightsGroup {
                        condition = "lights";
                        class LightsText {
                            type = "text";
                            source = "static";
                            text = "LIGHT";
                            align = "left";
                            scale = 1;
                            pos[] = {{0.149, 0.961}, 1};
                            right[] = {{0.199, 0.961}, 1};
                            down[] = {{0.149, 0.996}, 1};
                        };
                    };
                    class CollisionLights {
                        condition = "collisionlights";
                        class CollisionLightsText {
                            type = "text";
                            source = "static";
                            text = "COLL";
                            align = "left";
                            scale = 1;
                            pos[] = {{0.309, 0.961}, 1};
                            right[] = {{0.359, 0.961}, 1};
                            down[] = {{0.309, 0.996}, 1};
                        };
                    };
                    class WeaponsLocking {
                        condition = "missilelocking";
                        blinkingPattern[] = {0.2, 0.2};
                        blinkingStartsOn = 1;
                        class Text {
                            type = "text";
                            source = "static";
                            text = "LOCKING";
                            align = "center";
                            scale = 1;
                            pos[] = {{0.215, 0.879701}, 1};
                            right[] = {{0.275, 0.879701}, 1};
                            down[] = {{0.215, 0.928846}, 1};
                        };
                    };
                    class TargetInfo {
                        condition = "missilelocked";
                        class TargetLockedText {
                            type = "text";
                            source = "static";
                            text = "TARGET ACQUIRED";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.195, 0.859}, 1};
                            right[] = {{0.235, 0.859}, 1};
                            down[] = {{0.195, 0.89}, 1};
                        };
                        class TimeOfFlightText {
                            type = "text";
                            source = "static";
                            text = "TOF:";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{0.127 + 0.13, 0.889}, 1};
                            right[] = {{0.302, 0.889}, 1};
                            down[] = {{0.127 + 0.13, 0.924}, 1};
                        };
                        class DistanceText {
                            type = "text";
                            source = "static";
                            text = "DISTANCE:";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{0.125 + 0.13, 0.921}, 1};
                            right[] = {{0.3, 0.921}, 1};
                            down[] = {{0.125 + 0.13, 0.956}, 1};
                        };
                        class TOF_source: CurrentWeapon {
                            source = "missileflighttime";
                            align = "right";
                            pos[] = {{0.269, 0.889}, 1};
                            right[] = {{0.319, 0.889}, 1};
                            down[] = {{0.269, 0.924}, 1};
                        };
                        class TargetDistance: CurrentWeapon {
                            source = "targetDist";
                            sourceLength = 0;
                            sourcePrecision = 1;
                            sourceScale = 0.001;
                            align = "right";
                            pos[] = {{0.269, 0.921}, 1};
                            right[] = {{0.319, 0.921}, 1};
                            down[] = {{0.269, 0.956}, 1};
                        };
                    };
                    class IncomingMissile {
                        condition = "incomingmissile";
                        blinkingPattern[] = {0.3, 0.3};
                        blinkingStartsOn = 1;
                        class Text {
                            type = "text";
                            source = "static";
                            text = "!INCOMING MISSILE!";
                            align = "center";
                            scale = 1;
                            pos[] = {{0.485, 0.216239}, 1};
                            right[] = {{0.545, 0.216239}, 1};
                            down[] = {{0.485, 0.265385}, 1};
                        };
                    };
                    class GearGroup {
                        type = "group";
                        condition = "ils";
                        class GearText {
                            type = "text";
                            source = "static";
                            text = "GEAR";
                            align = "center";
                            scale = 1;
                            pos[] = {{0.5, 0.889}, 1};
                            right[] = {{0.54, 0.889}, 1};
                            down[] = {{0.5, 0.924}, 1};
                        };
                    };
                    class ILS {
                        condition = "ils";
                        class Glideslope {
                            clipTL[] = {0, 0};
                            clipBR[] = {1, 1};
                            class ILS {
                                type = "line";
                                points[] = {{"ILS_W", {-0.24, 0}, 1}, {"ILS_W", {0.24, 0}, 1}, {}, {"ILS_W", {-0.24, -0.0235897}, 1}, {"ILS_W", {-0.24, 0.0235897}, 1}, {}, {"ILS_W", {-0.12, -0.0176923}, 1}, {"ILS_W", {-0.12, 0.0176923}, 1}, {}, {"ILS_W", {0, -0.0235897}, 1}, {"ILS_W", {0, 0.0235897}, 1}, {}, {"ILS_W", {0.12, -0.0176923}, 1}, {"ILS_W", {0.12, 0.0176923}, 1}, {}, {"ILS_W", {0.24, -0.0235897}, 1}, {"ILS_W", {0.24, 0.0235897}, 1}, {}, {"ILS_H", {0, -0.235897}, 1}, {"ILS_H", {0, 0.235897}, 1}, {}, {"ILS_H", {-0.024, -0.235897}, 1}, {"ILS_H", {0.024, -0.235897}, 1}, {}, {"ILS_H", {-0.018, -0.117949}, 1}, {"ILS_H", {0.018, -0.117949}, 1}, {}, {"ILS_H", {-0.024, 0}, 1}, {"ILS_H", {0.024, 0}, 1}, {}, {"ILS_H", {-0.018, 0.117949}, 1}, {"ILS_H", {0.018, 0.117949}, 1}, {}, {"ILS_H", {-0.024, 0.235897}, 1}, {"ILS_H", {0.024, 0.235897}, 1}};
                            };
                            class airport {
                                type = "line";
                                points[] = {{"airport1", 1}, {"airport2", 1}, {"airport4", 1}, {"airport3", 1}, {"airport1", 1}};
                            };
                        };
                    };
                    class MGun {
                        condition = "-2+mgun*ImpactDistance";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0, -0.0393162}, 1}, {}, {"ImpactPoint", {0.02, -0.024}, 1}, {"ImpactPoint", {0.025, -0.031}, 1}, {}, {"ImpactPoint", {0, -0.002}, 1}, {"ImpactPoint", {0, 0.002}, 1}, {}, {"ImpactPoint", {-0.002, 0}, 1}, {"ImpactPoint", {0.002, 0}, 1}, {}};
                        };
                        class Circle {
                            type = "line";
                            width = 3;
                            points[] = {{"ImpactPoint", {0, -0.0275214}, 1}, {"ImpactPoint", {0, -0.0344017}, 1}, {"MissileFlightTimeRot1", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot2", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot3", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot4", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot5", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot6", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot7", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot8", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot9", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot10", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot11", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot12", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot13", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot14", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot15", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot16", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot17", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot18", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot19", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.028}, 1, "ImpactPoint", 1}};
                        };
                        class Circle_Min_Range {
                            type = "line";
                            width = 3;
                            points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0.005208, -0.029039}, 1}, {"ImpactPoint", {0.01026, -0.0277091}, 1}, {"ImpactPoint", {0.015, -0.0255359}, 1}, {"ImpactPoint", {0.019284, -0.0225872}, 1}, {"ImpactPoint", {0.02298, -0.0189544}, 1}, {"ImpactPoint", {0.02598, -0.0147436}, 1}, {"ImpactPoint", {0.028191, -0.0100846}, 1}, {"ImpactPoint", {0.029544, -0.00511897}, 1}, {"ImpactPoint", {0.03, 0}, 1}, {"ImpactPoint", {0.029544, 0.00511897}, 1}, {"ImpactPoint", {0.028191, 0.0100846}, 1}, {"ImpactPoint", {0.02598, 0.0147436}, 1}, {"ImpactPoint", {0.02298, 0.0189544}, 1}, {"ImpactPoint", {0.019284, 0.0225872}, 1}, {"ImpactPoint", {0.015, 0.0255359}, 1}, {"ImpactPoint", {0.01026, 0.0277091}, 1}, {"ImpactPoint", {0.005208, 0.029039}, 1}, {"ImpactPoint", {0, 0.0294872}, 1}, {"ImpactPoint", {-0.005208, 0.029039}, 1}, {"ImpactPoint", {-0.01026, 0.0277091}, 1}, {"ImpactPoint", {-0.015, 0.0255359}, 1}, {"ImpactPoint", {-0.019284, 0.0225872}, 1}, {"ImpactPoint", {-0.02298, 0.0189544}, 1}, {"ImpactPoint", {-0.02598, 0.0147436}, 1}, {"ImpactPoint", {-0.028191, 0.0100846}, 1}, {"ImpactPoint", {-0.029544, 0.00511897}, 1}, {"ImpactPoint", {-0.03, 0}, 1}, {"ImpactPoint", {-0.029544, -0.00511897}, 1}, {"ImpactPoint", {-0.028191, -0.0100846}, 1}, {"ImpactPoint", {-0.02598, -0.0147436}, 1}, {"ImpactPoint", {-0.02298, -0.0189544}, 1}, {"ImpactPoint", {-0.019284, -0.0225872}, 1}, {"ImpactPoint", {-0.015, -0.0255359}, 1}, {"ImpactPoint", {-0.01026, -0.0277091}, 1}, {"ImpactPoint", {-0.005208, -0.029039}, 1}, {"ImpactPoint", {0, -0.0294872}, 1}};
                        };
                        class Distance {
                            type = "text";
                            source = "ImpactDistance";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            max = 15;
                            align = "center";
                            scale = 1;
                            pos[] = {"ImpactPoint", {-0.002, -0.08}, 1};
                            right[] = {"ImpactPoint", {0.045, -0.08}, 1};
                            down[] = {"ImpactPoint", {-0.002, -0.04}, 1};
                        };
                    };
                    class Rockets {
                        condition = "-2+rocket*ImpactDistance";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0, -0.0393162}, 1}, {}, {"ImpactPoint", {0.02, -0.024}, 1}, {"ImpactPoint", {0.025, -0.031}, 1}, {}, {"ImpactPoint", {0, -0.002}, 1}, {"ImpactPoint", {0, 0.002}, 1}, {}, {"ImpactPoint", {-0.002, 0}, 1}, {"ImpactPoint", {0.002, 0}, 1}, {}};
                        };
                        class Circle {
                            type = "line";
                            width = 3;
                            points[] = {{"ImpactPoint", {0, -0.0275214}, 1}, {"ImpactPoint", {0, -0.0344017}, 1}, {"MissileFlightTimeRot1", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot2", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot3", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot4", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot5", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot6", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot7", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot8", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot9", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot10", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot11", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot12", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot13", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot14", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot15", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot16", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot17", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot18", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot19", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.028}, 1, "ImpactPoint", 1}};
                        };
                        class Circle_Min_Range {
                            type = "line";
                            width = 3;
                            points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0.005208, -0.029039}, 1}, {"ImpactPoint", {0.01026, -0.0277091}, 1}, {"ImpactPoint", {0.015, -0.0255359}, 1}, {"ImpactPoint", {0.019284, -0.0225872}, 1}, {"ImpactPoint", {0.02298, -0.0189544}, 1}, {"ImpactPoint", {0.02598, -0.0147436}, 1}, {"ImpactPoint", {0.028191, -0.0100846}, 1}, {"ImpactPoint", {0.029544, -0.00511897}, 1}, {"ImpactPoint", {0.03, 0}, 1}, {"ImpactPoint", {0.029544, 0.00511897}, 1}, {"ImpactPoint", {0.028191, 0.0100846}, 1}, {"ImpactPoint", {0.02598, 0.0147436}, 1}, {"ImpactPoint", {0.02298, 0.0189544}, 1}, {"ImpactPoint", {0.019284, 0.0225872}, 1}, {"ImpactPoint", {0.015, 0.0255359}, 1}, {"ImpactPoint", {0.01026, 0.0277091}, 1}, {"ImpactPoint", {0.005208, 0.029039}, 1}, {"ImpactPoint", {0, 0.0294872}, 1}, {"ImpactPoint", {-0.005208, 0.029039}, 1}, {"ImpactPoint", {-0.01026, 0.0277091}, 1}, {"ImpactPoint", {-0.015, 0.0255359}, 1}, {"ImpactPoint", {-0.019284, 0.0225872}, 1}, {"ImpactPoint", {-0.02298, 0.0189544}, 1}, {"ImpactPoint", {-0.02598, 0.0147436}, 1}, {"ImpactPoint", {-0.028191, 0.0100846}, 1}, {"ImpactPoint", {-0.029544, 0.00511897}, 1}, {"ImpactPoint", {-0.03, 0}, 1}, {"ImpactPoint", {-0.029544, -0.00511897}, 1}, {"ImpactPoint", {-0.028191, -0.0100846}, 1}, {"ImpactPoint", {-0.02598, -0.0147436}, 1}, {"ImpactPoint", {-0.02298, -0.0189544}, 1}, {"ImpactPoint", {-0.019284, -0.0225872}, 1}, {"ImpactPoint", {-0.015, -0.0255359}, 1}, {"ImpactPoint", {-0.01026, -0.0277091}, 1}, {"ImpactPoint", {-0.005208, -0.029039}, 1}, {"ImpactPoint", {0, -0.0294872}, 1}};
                        };
                        class Distance {
                            type = "text";
                            source = "ImpactDistance";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            max = 15;
                            align = "center";
                            scale = 1;
                            pos[] = {"ImpactPoint", {-0.002, -0.08}, 1};
                            right[] = {"ImpactPoint", {0.045, -0.08}, 1};
                            down[] = {"ImpactPoint", {-0.002, -0.04}, 1};
                        };
                    };
                    class BombCrosshairGroup {
                        type = "group";
                        condition = "bomb";
                        class BombCrosshair {
                            type = "line";
                            width = 4;
                            points[] = {{"ImpactPoint", {0, -0.0982906}, 1}, {"ImpactPoint", {0.01736, -0.0967966}, 1}, {"ImpactPoint", {0.0342, -0.0923637}, 1}, {"ImpactPoint", {0.05, -0.0851197}, 1}, {"ImpactPoint", {0.06428, -0.0752906}, 1}, {"ImpactPoint", {0.0766, -0.0631812}, 1}, {"ImpactPoint", {0.0866, -0.0491453}, 1}, {"ImpactPoint", {0.09397, -0.0336154}, 1}, {"ImpactPoint", {0.09848, -0.0170632}, 1}, {"ImpactPoint", {0.1, 0}, 1}, {"ImpactPoint", {0.09848, 0.0170632}, 1}, {"ImpactPoint", {0.09397, 0.0336154}, 1}, {"ImpactPoint", {0.0866, 0.0491453}, 1}, {"ImpactPoint", {0.0766, 0.0631812}, 1}, {"ImpactPoint", {0.06428, 0.0752906}, 1}, {"ImpactPoint", {0.05, 0.0851197}, 1}, {"ImpactPoint", {0.0342, 0.0923637}, 1}, {"ImpactPoint", {0.01736, 0.0967966}, 1}, {"ImpactPoint", {0, 0.0982906}, 1}, {"ImpactPoint", {-0.01736, 0.0967966}, 1}, {"ImpactPoint", {-0.0342, 0.0923637}, 1}, {"ImpactPoint", {-0.05, 0.0851197}, 1}, {"ImpactPoint", {-0.06428, 0.0752906}, 1}, {"ImpactPoint", {-0.0766, 0.0631812}, 1}, {"ImpactPoint", {-0.0866, 0.0491453}, 1}, {"ImpactPoint", {-0.09397, 0.0336154}, 1}, {"ImpactPoint", {-0.09848, 0.0170632}, 1}, {"ImpactPoint", {-0.1, 0}, 1}, {"ImpactPoint", {-0.09848, -0.0170632}, 1}, {"ImpactPoint", {-0.09397, -0.0336154}, 1}, {"ImpactPoint", {-0.0866, -0.0491453}, 1}, {"ImpactPoint", {-0.0766, -0.0631812}, 1}, {"ImpactPoint", {-0.06428, -0.0752906}, 1}, {"ImpactPoint", {-0.05, -0.0851197}, 1}, {"ImpactPoint", {-0.0342, -0.0923637}, 1}, {"ImpactPoint", {-0.01736, -0.0967966}, 1}, {"ImpactPoint", {0, -0.0982906}, 1}, {}, {"ImpactPoint", 1, "Limit0109", 1, {0, -0.0196581}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {0.014, -0.0137607}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {"+ 0.02", 0}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {0.014, 0.0137607}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {0, 0.0196581}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {-0.014, 0.0137607}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {-0.02, 0}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {-0.014, -0.0137607}, 1}, {"ImpactPoint", 1, "Limit0109", 1, {0, -0.0196581}, 1}, {}, {"VelocityVector", 0.001, "ImpactPoint", 1, "Limit0109", 1, {0, 0}, 1}, {"VelocityVector", 1, "Limit0109", 1, {0, 0}, 1}};
                        };
                        class Distance {
                            type = "text";
                            source = "ImpactDistance";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            max = 15;
                            align = "center";
                            scale = 1;
                            pos[] = {"ImpactPoint", {-0.002, 0.11}, 1};
                            right[] = {"ImpactPoint", {0.045, 0.11}, 1};
                            down[] = {"ImpactPoint", {-0.002, 0.15}, 1};
                        };
                    };
                    class WP {
                        condition = "wpvalid";
                        class WPdist {
                            type = "text";
                            source = "wpdist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.935, 0.797137}, 1};
                            right[] = {{0.975, 0.797137}, 1};
                            down[] = {{0.935, 0.834487}, 1};
                        };
                        class WPstatic {
                            type = "text";
                            source = "static";
                            text = ">";
                            align = "center";
                            scale = 2;
                            pos[] = {{0.95, 0.797137}, 1};
                            right[] = {{0.97, 0.797137}, 1};
                            down[] = {{0.95, 0.834487}, 1};
                        };
                        class WPIndex {
                            type = "text";
                            source = "wpIndex";
                            sourceScale = 1;
                            align = "right";
                            scale = 1;
                            pos[] = {{0.96, 0.797137}, 1};
                            right[] = {{1, 0.797137}, 1};
                            down[] = {{0.96, 0.834487}, 1};
                        };
                        class WP {
                            width = 1;
                            type = "line";
                            points[] = {{"wppoint", 1, {"HorizonBankRotFull", 0.015, -0.035}, 1}, {"wppoint", 1, {"HorizonBankRotFull", 0, 0}, 1}, {"wppoint", 1, {"HorizonBankRotFull", -0.015, -0.035}, 1}};
                        };
                    };
                    class RadarBoxes {
                        type = "radartoview";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.734, 0.73};
                        width = 2;
                        points[] = {{{-0.002, -0.00196581}, 1}, {{0.002, -0.00196581}, 1}, {{0.002, 0.00196581}, 1}, {{-0.002, 0.00196581}, 1}, {{-0.002, -0.00196581}, 1}};
                    };
                    class TargetDiamond {
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {{"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}};
                        };
                    };
                    class TargetLocked {
                        condition = "missilelocked";
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {{"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, 0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}};
                        };
                    };
                };
            };
            class HMD_CMPilot: AirplaneHUD {
                turret[] = {-1};
                class Draw {
                    alpha = "user3";
                    color[] = {"user0", "user1", "user2"};
                    condition = "on - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37)";
                    class CMName {
                        type = "text";
                        source = "cmweapon";
                        sourceScale = 1;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.869, 0.849}, 1};
                        right[] = {{0.919, 0.849}, 1};
                        down[] = {{0.869, 0.884}, 1};
                    };
                    class CMCount {
                        type = "text";
                        source = "cmammo";
                        sourceScale = 1;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.979, 0.849}, 1};
                        right[] = {{1.029, 0.849}, 1};
                        down[] = {{0.979, 0.884}, 1};
                    };
                };
            };
        };

        memoryPointRDust = "WheelDust_right_pos";
        memoryPointLDust = "WheelDust_left_pos";
        dustEffect = "VTOLDust";
        waterEffect = "VTOLWater";
        reportOwnPosition = 1;
        reportRemoteTargets = 1;
        receiveRemoteTargets = 1;
        class Components: Components {
            class TransportCountermeasuresComponent {};
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoAirborneMiniMap";
                    };
                    class VehicleMissileDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {30000, 16000, 8000, 4000, 2000};
                        resource = "RscCustomInfoSensors";
                    };
                };
                componentType = "VehicleSystemsDisplayManager";
                left = 1;
                defaultDisplay = "EmptyDisplay";
                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoAirborneMiniMap";
                    };
                    class VehicleMissileDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {30000, 16000, 8000, 4000, 2000};
                        resource = "RscCustomInfoSensors";
                    };
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                    class VehicleDriverDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Driver";
                    };
                };
                componentType = "VehicleSystemsDisplayManager";
                right = 1;
                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            };
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 30000;
                            maxRange = 30000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 30000;
                            maxRange = 30000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        componentType = "ActiveRadarSensorComponent";
                        typeRecognitionDistance = 16000;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 360;
                        maxFogSeeThrough = -1;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = 0;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 2000;
                        minTrackableSpeed = -1e010;
                        maxTrackableSpeed = 1e010;
                        minTrackableATL = -1e10;
                        maxTrackableATL = 1e010;
                        allowsMarking = 1;
                        aimDown = 0;
                        color[] = {0, 1, 1, 1};
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
                        componentType = "PassiveRadarSensorComponent";
                        class AirTarget {
                            minRange = 1000;
                            maxRange = 1000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 1000;
                            maxRange = 1000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = 1000;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 360;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 0;
                        animDirection = "";
                        aimDown = 0;
                        color[] = {0.5, 1, 0.5, 0.5};
                        minTrackableSpeed = -1e+010;
                        maxTrackableSpeed = 1e+010;
                        minTrackableATL = 100;
                        maxTrackableATL = 1e+010;
                        allowsMarking = 0;
                    };
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 1600;
                            maxRange = 1600;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 1600;
                            maxRange = 1600;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        componentType = "VisualSensorComponent";
                        typeRecognitionDistance = 750;
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 90;
                        maxFogSeeThrough = 1;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = 0;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 2000;
                        minTrackableSpeed = -1e+010;
                        maxTrackableSpeed = 1e+010;
                        minTrackableATL = 50;
                        maxTrackableATL = 1e+010;
                        allowsMarking = 1;
                        aimDown = 0;
                        color[] = {1, 1, 0.5, 0.8};
                    };
                };
            };
        };

        memoryPointDriverOptics = "PilotCamera";
        unitInfoType = "RscOptics_CAS_Pilot";
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        class PilotCamera {
            driverForceOptics = 0;
            minTurn = -180;
            maxTurn = 180;
            initTurn = 0;
            minElev = -180;
            maxElev = 180;
            initElev = 0;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;

            class OpticsIn {
                class Wide {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = 30 / 120;
                    minFov = 30 / 120;
                    maxFov = 30 / 120;
                    directionStabilized = 1;
                    visionMode[] = {
                        "Normal",
                        "NVG",
                        "TI"
                    };
                    thermalMode[] = {0, 1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                };
                class Medium: Wide {
                    opticsDisplayName = "MFOV";
                    initFov = 6 / 120;
                    minFov = 6 / 120;
                    maxFov = 6 / 120;
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide {
                    opticsDisplayName = "NFOV";
                    initFov = 2 / 120;
                    minFov = 2 / 120;
                    maxFov = 2 / 120;
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
        };

        class TransportBackpacks {
            BACKPACK_XX(B_Parachute,1);
        };
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            ITEM_XX(Toolkit,1);
            ITEM_XX(Medikit,1);
        };
        attenuationEffectType = "PlaneAttenuation";  // Attenuation in interior (Link to Attenuation.hpp in folder SOUNDS_F)

        soundGetIn[] = {"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin.wss", "db0", 1, 40};
        soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout.wss", "db0", 1, 40};
        soundDammage[] = {"", "db - 5", 1};
        soundEngineOnExt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_start_ext.wss", 1, 1, 500};
        soundEngineOnInt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_start_int.wss", 0.794328, 1};
        soundEngineOffInt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int.wss", "db - 0", 1.0};
        soundEngineOffExt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext.wss", "db5", 1.0, 500};
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1.wss", "db - 10", 1};
        soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3.wss", "db - 10", 1.5};
        soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up.wss", "db - 2", 1.0, 150};
        soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down.wss", "db - 2", 1.0, 150};
        soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up.wss", "db - 4", 1.0, 100};
        soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down.wss", "db - 4", 1.0, 100};

        /*	EXTERNAL SOUNDS */
        class scrubLandInt {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt.wss", "db0", 1.0, 100};
            frequency = 1;
            volume = "(scrubLand factor[0.01, 0.20])";
        };

        class Sounds {
            class EngineLowOut {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext.wss", "db8", 1.0, 1200};
                frequency = "1.0 min (rpm + 0.5)";
                volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
            };

            class EngineHighOut {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_ext.wss", "db8", 1.2, 1400};
                frequency = "1";
                volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
            };

            class ForsageOut {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_ext.wss", "db5", 0.99, 1700};
                frequency = "1";
                volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
                cone[] = {3.14, 3.92, 2.0, 0.5};
            };

            class WindNoiseOut {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise.wss", "db-5", 1.0, 150};
                frequency = "(0.1+(1.2*(speed factor[1, 150])))";
                volume = "camPos*(speed factor[1, 150])";
            };

            class EngineLowIn {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int.wss", "db0", 1.0};
                frequency = "1.0 min (rpm + 0.5)";
                volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
            };

            class EngineHighIn {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int.wss", "db0", 1.2};
                frequency = "1";
                volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
            };

            class ForsageIn {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int.wss", "db0", 1.0};
                frequency = "1";
                volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
            };

            class WindNoiseIn {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise.wss", "db-6", 1.0};
                frequency = "(0.1+(1.2*(speed factor[1, 150])))";
                volume = "(1-camPos)*(speed factor[1, 150])";
            };
        };
    };
    class ls_vehicle_starsaber: ls_vehicle_starsaber_base {
        scope = 2;
        scopeCurator = 2; // VTOL_Base_F defines scopeCurator
        author = "Kharak + Jenna";
        displayName = "XC-01 Star Saber";

        side = 1;
        crew = "ls_gar_jediCommander";
        typicalCargo[] = {"ls_gar_jediCommander"};
        faction = "ls_jedi";
        availableForSupportTypes[] = {"CAS_Bombing"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
    };
};
