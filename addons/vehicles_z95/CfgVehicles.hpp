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
    class ls_vehicle_z95_base: VTOL_Base_F {
        scope = 0;
        author = AUTHOR;
        displayName = "Z-95 Headhunter";

        model = QPATHTOF(ls_vehicle_z95.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\camo1_co.paa)};
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_z95.jpg);
        picture = QPATHTOF(data\ui\z95_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\z95_icon_ca.paa);

        gearRetracting = 1;
        overviewPicture = "\A3\Data_F_Exp\Images\VehicleXian_ca.paa";
        editorSubcategory = "ls_edsubcat_planes";
        destrType = "DestructWreck";
        driverAction = "ls_pilot_z95";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverCompartments = "Compartment1";
        driverCanEject = 1;
        driverLeftHandAnimName = "controlstick";
        driverRightHandAnimName = "controlstick";
        driverleftleganimname = "pedal";
        driverrightleganimname = "pedal";
        memoryPointTaskMarker = "TaskMarker_1_pos";
        memoryPointsGetInDriver = "GetIn_pilot_pos";
        memoryPointsGetInDriverDir = "GetIn_pilot_dir";
        memoryPointsGetInCargo = "GetIn_pilot_pos";
        memoryPointsGetInCargoDir = "GetIn_pilot_dir";
        memoryPointLRocket = "Missile_L";
        memorypointlmissile = "Missile_L";
        memoryPointRRocket = "Missile_R";
        memorypointRmissile = "Missile_R";
        memoryPointCM[] = {"flare_launcher_1_pos", "flare_launcher_2_pos"};
        memoryPointCMDir[] = {"flare_launcher_1_dir", "flare_launcher_2_dir"};
        extCameraPosition[] = {0, 1, -25};
        class ViewPilot: ViewPilot {
            initAngleX = 0;
        };
        cargoAction[] = {"passenger_generic01_foldhands"};
        cargoGetInAction[] = {"GetInHigh"};
        cargoGetOutAction[] = {"GetOutHigh"};
        cargoCompartments[] = {"Compartment3"};

        availableForSupportTypes[] = {"CAS_Bombing"};

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
                position = "exhaust_1_pos";
                direction = "exhaust_1_dir";
                effect = "ExhaustsEffectPlane";
            };
            class Exhaust_main2 {
                position = "exhaust_2_pos";
                direction = "exhaust_2_dir";
                effect = "ExhaustsEffectPlane";
            };
        };

        class RenderTargets {
            class DASH0 {
                RenderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderQuality = 2;
                    renderVisionMode = 0;
                    fov = 0.7;
                };
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
                "a3\data_f\glass_veh.rvmat",
                "a3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat",
                "a3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat"
            };
        };

        accuracy = 0.5;
        driverForceOptics = "false";
        armor = 325;
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
        radarTargetSize = 1.4;
        visualTargetSize = 1.2;
        irTargetSize = 1.4;
        lockDetectionSystem = 2 + 8 + 4 + 16;
        incomingMissileDetectionSystem = 2 + 8 + 16;
        maximumLoad = 3000;
        supplyRadius = 5;
        getInRadius = 3;
        selectionRotorStill = "Rotors_static";
        selectionRotorMove = "Rotors_blur";
        cabinOpening = 1;

        memorypointGun[] = {"Laser_L_Pos", "Laser_R_Pos"};
        gunBeg[] = {"Laser_L_Dir", "Laser_R_Dir"};
        gunEnd[] = {"Laser_L_Pos", "Laser_R_Pos"};

        weapons[] = {
            "ls_20mw_P64E1_RC",
            "ls_weapon_CMFlareLauncher",
            "Laserdesignator_pilotCamera"
        };
        magazines[] = {
            "ls_magazine_20mm_PS56D_x676",
            "ls_magazine_20mm_PS56D_x676",
            "ls_magazine_20mm_PS56D_x676",
            "Laserbatteries",
            "192Rnd_CMFlare_Chaff_Magazine",
            "192Rnd_CMFlare_Chaff_Magazine",
            "192Rnd_CMFlare_Chaff_Magazine",
            "192Rnd_CMFlare_Chaff_Magazine",
        };
        minGunElev = -5;
        maxGunElev = 5;
        minGunTurn = 8;
        maxGunTurn = 8;
        maxSpeed = 1715;
        landingAoa = 0.113446;
        landingSpeed = 250;
        engineMOI = 16;
        stallSpeed = 190;
        stallWarningTreshold = 0.07;
        wheelSteeringSensitivity = 1.5;
        airBrake = 55;
        airBrakeFrictionCoef = 60;
        flaps = 1;
        flapsFrictionCoef = 0.32;
        gearsUpFrictionCoef = 0.6;
        airFriction0[] = {75, 50, 12};
        airFriction1[] = {75, 50, 12};
        airFriction2[] = {75, 50, 12};
        airFrictionCoefs0[] = {0, 0, 0};
        airFrictionCoefs1[] = {0.1, 0.5, 0.0066};
        airFrictionCoefs2[] = {0.001, 0.005, 6.8e-005};
        angleOfIndicence = 0.0523599;
        envelope[] = {0.1, 0.2, 0.3, 1.5, 1.72, 2.69, 3.87, 5.27, 6.89, 8.72, 9.7, 9.6, 9.2, 8.5, 8.2, 8};
        altNoForce = 13000;
        altFullForce = 10000;
        throttleToThrustLogFactor = 2;
        thrustCoef[] = {1.75, 1.95, 2.05, 2.15, 2.35, 2.55, 2.65, 2.75, 2.85, 2.95, 3.15, 3.3, 3.5, 3.25, 3, 2.75, 2};
        aileronSensitivity = 2.9;
        aileronCoef[] = {0.5, 0.7, 1, 1, 1.2, 1.15, 1.1};
        elevatorSensitivity = 1;
        elevatorCoef[] = {1.1, 1.2, 1.3, 1.3, 1.3, 1.3, 1.3, 1.3, 1.25, 1.2, 1.15, 1.1, 1};
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
        draconicTorqueYCoef = 3;
        vtol = 4;
        VTOLPitchInfluence = 1;
        VTOLRollInfluence = 10;
        VTOLYawInfluence = 12;
        acceleration = 200;
        fuelCapacity = 2000;
        defaultUserMFDvalues[] = {0.15, 1, 0.15, 1};

        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armorComponent = "Hull_Component";
                armor = 5;
                explosionShielding = 1;
                name = "HitHull";
                passThrough = 0.5;
                visual = "Hit_Hull";
                radius = 0.3;
                minimalHit = 0.02;
                depends = "Total";
                material = -1;
            };
            class HitEngine: HitHull {
                armor = 2;
                explosionShielding = 0.5;
                name = "HitEngine";
                passThrough = 0.2;
                visual = "Hit_Engine";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitGlass: HitHull {
                armorComponent = "Hit_Glass";
                armor = 0.25;
                explosionShielding = 0.5;
                name = "HitGlass";
                visual = "camo2";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitGear: HitHull {
                armorComponent = "Hit_Gear";
                armor = 0.25;
                explosionShielding = 0.5;
                name = "hitgear";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitEngine2: HitHull {
                armor = 2;
                explosionShielding = 0.5;
                name = "HitEngine2";
                passThrough = 0.2;
                visual = "Hit_Engine2";
                radius = 0.2;
                minimalHit = 0.1;
                depends = "0";
            };
            class HitAvionics: HitHull {
                armor = 2;
                explosionShielding = 1;
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
                minimalHit = 0.1;
                depends = "0";
            };
            class HitLAileron: HitHull {
                armor = 1;
                explosionShielding = 2;
                name = "HitLAileron";
                passThrough = 0;
                visual = "Hit_AileronL";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitRAileron: HitLAileron {
                armor = 1;
                explosionShielding = 2;
                name = "HitRAileron";
                passThrough = 0;
                visual = "Hit_AileronR";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "0";
            };
            class HitLCRudder: HitHull {
                armor = 1;
                explosionShielding = 2;
                name = "HitLCRudder";
                passThrough = 0;
                visual = "Hit_RudderL";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "HitHull * 0.5";
            };
            class HitRRudder: HitLCRudder {
                armor = 1;
                explosionShielding = 2;
                name = "HitRRudder";
                passThrough = 0;
                visual = "Hit_RudderR";
                radius = 0;
                minimalHit = 0.01;
                depends = "HitHull * 0.5";
            };
            class HitLCElevator: HitHull {
                armor = 1;
                explosionShielding = 2;
                name = "HitLCElevator";
                passThrough = 0;
                visual = "Hit_ElevatorL";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "HitHull * 0.5";
            };
            class HitRElevator: HitLCElevator {
                armor = 1;
                explosionShielding = 2;
                name = "HitRElevator";
                passThrough = 0;
                visual = "Hit_ElevatorR";
                radius = 0.2;
                minimalHit = 0.01;
                depends = "HitHull * 0.5";
            };
        };
        class AnimationSources: AnimationSources {
            class Rockets_revolving_source {
                source = "revolving";
                weapon = "rockets_Skyfire";
            };
            class Missiles_revolving_source {
                source = "revolving";
                weapon = "missiles_SCALPEL";
            };
            class Cannon_revolving_source {
                source = "revolving";
                weapon = "gatling_30mm_VTOL_02";
            };
            class Cannon_muzzleflash_source {
                source = "reload";
                weapon = "gatling_30mm_VTOL_02";
            };
            class HideWeapons {
                source = "user";
                animPeriod = 1e-006;
                initPhase = 0;
            };
        };
        lightOnGear = 1;
        aggregateReflectors[] = {{
            "Light_1",
            "Light_2",
            "Light_3",
            "Light_4",
            "Light_5",
        }};

        #include "cfg/MFD.hpp"

        memoryPointRDust = "WheelDust_right_pos";
        memoryPointLDust = "WheelDust_left_pos";
        dustEffect = "VTOLDust";
        waterEffect = "VTOLWater";
        reportOwnPosition = 1;
        reportRemoteTargets = 1;
        receiveRemoteTargets = 1;
        class Components: Components {
            class TransportCountermeasuresComponent {};
            class TransportPylonsComponent {
                uiPicture = QPATHTOF(data\ui\z95_3den_ca.paa);
                class pylons {
                    class pylons1 {
                        hardpoints[] = {
                            // The magazines for these don't exist
                            // "ls_z95_Universal_Missile_rail",
                            // "ls_Universal_rail"
                            "SCALPEL_1RND",
                            "B_ASRAAM",
                            "DAR",
                            "DAGR",
                            "B_AMRAAM_D_DUAL_RAIL",
                            "B_SDB_QUAD_RAIL",
                            "B_GBU12",
                            "B_AGM65_RAIL"
                        };
                        attachment = "";
                        priority = 3;
                        maxWeight = 300;
                        UIposition[] = {0.44, 0.05};
                    };
                    class pylons2: pylons1 {
                        priority = 2;
                        maxWeight = 5000;
                        UIposition[] = {0.44, 0.1};
                    };
                    class pylons3: pylons1 {
                        priority = 1;
                        maxWeight = 2500;
                        UIposition[] = {0.44, 0.15};
                    };
                    class pylons4: pylons3 {
                        UIposition[] = {0.44, 0.4};
                        mirroredMissilePos = 3;
                    };
                    class pylons5: pylons2 {
                        UIposition[] = {0.44, 0.45};
                        mirroredMissilePos = 2;
                    };
                    class pylons6: pylons1 {
                        UIposition[] = {0.44, 0.5};
                        mirroredMissilePos = 1;
                    };
                };

                class Presets {
                    class Empty {
                        displayName = "$STR_empty";
                        attachment[] = {};
                    };

                    class Default {
                        displayName = "$STR_vehicle_default";
                        attachment[] = {
                            "PylonMissile_1Rnd_AAA_missiles",
                            "PylonMissile_1Rnd_AAA_missiles",
                            "PylonRack_12Rnd_PG_missiles",
                            "PylonRack_12Rnd_PG_missiles",
                            "PylonMissile_1Rnd_AAA_missiles",
                            "PylonMissile_1Rnd_AAA_missiles"
                        };
                    };

                    class AT {
                        displayName = "$STR_A3_cfgmagazines_titan_at_dns";
                        attachment[] = {
                            "PylonRack_12Rnd_PG_missiles",
                            "PylonMissile_1Rnd_LG_scalpel",
                            "PylonRack_12Rnd_PG_missiles",
                            "PylonRack_12Rnd_PG_missiles",
                            "PylonMissile_1Rnd_LG_scalpel",
                            "PylonRack_12Rnd_PG_missiles"
                        };
                    };

                    class CAS {
                        displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
                        attachment[] = {
                            "PylonRack_12Rnd_missiles",
                            "PylonMissile_1Rnd_AAA_missiles",
                            "PylonRack_12Rnd_missiles",
                            "PylonRack_12Rnd_missiles",
                            "PylonMissile_1Rnd_AAA_missiles",
                            "PylonRack_12Rnd_missiles"
                        };
                    };
                };
            };
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
                        range[] = {30000, 16000,8000, 4000, 2000};
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
                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
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

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {
            ITEM_XX(Toolkit,1);
            ITEM_XX(Medikit,1);
        };
        class TransportBackpacks {
            BACKPACK_XX(B_Parachute,1);
        };
        attenuationEffectType = "HeliAttenuation";

        soundGetIn[] = {"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin.wss", "db0", 1, 40};
        soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout.wss", "db0", 1, 40};
        soundDammage[] = {"", "db - 5", 1};
        soundEngineOnInt[] = {QPATHTOEF(sounds,vehicles\z95\z95_startup.ogg), "db - 0", 1.0};
        soundEngineOnExt[] = {QPATHTOEF(sounds,vehicles\z95\z95_startup.ogg), "db5", 1.0, 500};
        soundEngineOffInt[] = {QPATHTOEF(sounds,vehicles\z95\z95_shutdown.ogg), "db - 0", 1.0};
        soundEngineOffExt[] = {QPATHTOEF(sounds,vehicles\z95\z95_shutdown.ogg), "db5", 1.0, 500};
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1.wss", "db - 20", 1};
        soundIncommingMissile[] = {QPATHTOEF(sounds,vehicles\z95\alarm.ogg), "db - 20", 1.5};
        soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up.wss", "db - 2", 1.0, 150};
        soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down.wss", "db - 2", 1.0, 150};
        soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up.wss", "db - 4", 1.0, 100};
        soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down.wss", "db - 4", 1.0, 100};
        cabinCloseSound[] = {QPATHTOEF(sounds,vehicles\z95\z95_close_canopy.ogg), 3.16228, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOEF(sounds,vehicles\z95\z95_close_canopy.ogg), 1, 1, 40};

        Crash0[] = {QPATHTOEF(sounds,vehicles\z95\z95_destroyed1.ogg), 1, 1, 900};
        Crash1[] = {QPATHTOEF(sounds,vehicles\z95\z95_destroyed2.ogg), 1, 1, 900};
        ArmorCrash0[] = {QPATHTOEF(sounds,vehicles\z95\z95_destroyed1.ogg), 1, 1, 900};
        ArmorCrash1[] = {QPATHTOEF(sounds,vehicles\z95\z95_destroyed2.ogg), 1, 1, 900};
        buildCrash0[] = {QPATHTOEF(sounds,vehicles\z95\z95_destroyed1.ogg), 1, 1, 900};
        buildCrash1[] = {QPATHTOEF(sounds,vehicles\z95\z95_destroyed2.ogg), 1, 1, 900};

        class scrubLandInt {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt.wss", "db0", 1.0, 100};
            frequency = 1;
            volume = "(scrubLand factor[0.01, 0.20])";
        };


        class Sounds {
            soundSets[] = {
                "ls_z95_EngineLowExt_SoundSet",
                "ls_z95_EngineExt_SoundSet",
                "ls_z95_WindNoiseExt_SoundSet",
                "ls_z95_ForsageExt_SoundSet",
                "ls_z95_EngineInt_SoundSet",
                "ls_z95_ForsageInt_SoundSet",
            };
        };
    };
    class ls_vehicle_z95: ls_vehicle_z95_base {
        scope = 2;
        scopeCurator = 2; // VTOL_Base_F defines scopeCurator
        author = AUTHOR;
        displayName = "Z-95 HeadHunter";

        side = 1;
        faction = "ls_gar";
        crew = "ls_clone_phase2_pilot";
    };
};
