class DefaultVehicleSystemsDisplayManagerLeft {
    class Components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class Components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft {
    class Components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight {
    class Components;
};

class EGVAR(impulsor,base);

class CfgVehicles {
    class Helicopter;
    class Helicopter_Base_F: Helicopter {
        class Turrets;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class CargoTurret;
        class AnimationSources;
        class Eventhandlers;
        class ViewOptics;
        class ViewPilot;
        class RotorLibHelicopterProperties;

        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class ls_vehicle_laatle_base: Helicopter_Base_H {
        scope = 0;
        author = AUTHOR;

        memoryPointDriverOptics = "slingcamera";
        unitInfoType = "RscOptics_CAS_Pilot";
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        allowTabLock = 1;
        GVAR(leftDoorToggleSounds)[] = {"ls_laat_doorOpen", "ls_laat_doorClose"};
        GVAR(rightDoorToggleSounds)[] = {"ls_laat_doorOpen", "ls_laat_doorClose"};
        GVAR(leftDoorAnims)[] = {"door_left_toggle"};
        GVAR(rightDoorAnims)[] = {"door_right_toggle"};
        GVAR(allDoorAnims)[] = {"door_right_toggle", "door_left_toggle"};
        GVAR(allDoorToggleSounds)[] = {"ls_laat_doorOpen", "ls_laat_doorClose"};
        GVAR(rampAnims)[] = {};
        GVAR(allAnims)[] = {"door_right_toggle", "door_left_toggle"};

        //Creates the Pilot Camera
        class PilotCamera {
            class OpticsIn {
                // Default View, all further views are zoomed in versions. Most of this has been copied from vanilla
                class Wide {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = -180;
                    maxAngleX = 180;
                    initAngleY = 27;
                    minAngleY = 27;
                    maxAngleY = 90;
                    initFov = 75 / 120;
                    minFov = 75 / 120;
                    maxFov = 75 / 120;
                    directionStabilized = 1;
                    visionMode[] = {"Normal"};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
                };
                class Medium: Wide {
                    opticsDisplayName = "MFOV";
                    initFov = 14.4 / 120;
                    minFov = 14.4 / 120;
                    maxFov = 14.4 / 120;
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide {
                    opticsDisplayName = "NFOV";
                    initFov = 4.8 / 120;
                    minFov = 4.8 / 120;
                    maxFov = 4.8 / 120;
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
                showMiniMapInOptics = 1;
                showUAVViewInOptics = 0;
                showSlingLoadManagerInOptics = 1;
            };
            nvLock = 1;
            minTurn = -60;
            maxTurn = 60;
            initTurn = 0;
            minElev = 20;
            maxElev = 90;
            initElev = 90;
            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;
            pilotOpticsShowCursor = 1;
            controllable = 1;
            ace_missileguidance_usePilotCameraForTargeting = 1;
        };

        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {
            "ropefriesorigin1",
            "ropeoriginpoint2",
            "ropeoriginpoint3",
            "ropeoriginpoint4"
        };

        // Slingload options
        slingLoadMaxCargoMass = 5000000; //Max Cargo, based on vehicle mass
        slingLoadMemoryPoint = "slingload0"; //MEM point loc used to spawn the ropes

        ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
        ace_interaction_bodyWidth = 3;
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 16;

       class ls_impulsor: EGVAR(impulsor,base) {};

        fuelCapacity = 3000;
        fuelConsumptionRate = 0.12;

        side = 1;
        faction = "ls_csf";
        editorSubcategory = "EdSubcat_Helicopters";
        crew = "ls_clone_phase2_pilot";
        typicalCargo[] = {
            "ls_clone_phase2_rifleman"
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_laatle.jpg);
        picture = QPATHTOF(data\ui\laatle_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\laatle_icon_ca.paa);
        availableForSupportTypes[] = {"CAS_Heli", "Drop", "Transport"};
        cost = 2000000;
        armor = 100;
        altFullForce = 10000;
        altNoForce = 15000;
        maxSpeed = 500;
        maxFordingDepth = 5;
        gearRetracting = 1;
        gearUpTime = 1;
        gearDownTime = 1;
        gearsUpFrictionCoef = 0.5;
        incomingMissileDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        LockDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        getInRadius = 3;
        hideWeaponsCargo = 0;
        cargoCanEject = 0;

        // Lift and flying Coeffecients
        mainBladeRadius = 0.0;
        tailBladeRadius = 0.0;
        bodyFrictionCoef = 0.5;
        liftForceCoef = 3;
        cyclicAsideForceCoef = 1.5;
        cyclicForwardForceCoef = 1;
        backRotorForceCoef = 2;

        accuracy = 0.5;
        displayname = "LAAT/le Gunship";
        model = QPATHTOF(ls_vehicle_laatle.p3d);

        hiddenSelections[] = {
            "_hull",
            "_panels",
            "_chairs"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\hull_co.paa),
            QPATHTOF(data\panels_co.paa),
            QPATHTOF(data\chairs_co.paa),
        };
        #include "cfg\TextureSources.hpp"

        driverAction = "pilot_Heli_Light_02";
        driverInAction = "pilot_Heli_Light_02";
        precisegetinout = 1;
        usePreciseGetInAction = 1;
        GetInAction = "GetInLow";
        GetOutAction = "GetOutLow";

        // MEMORY POINTS FOR EXIT AND ENTRY
        memoryPointsGetInDriver = "pos_driver";
        memoryPointsGetInDriverDir = "pos_driver_dir";
        memoryPointsGetInCargo = "pos cargo 12";
        memoryPointsGetInCargoDir = "pos cargo 12 dir";
        memoryPointsGetInCargoPrecise[] = {
            "pos cargo 12",
            "pos cargo 7",
            "pos cargo 12",
            "pos cargo 7",
            "pos cargo 12",
            "pos cargo 7"
        };
        memoryPointTaskMarker = "TaskMarker_1_pos";
        radarType = 8;
        extCameraPosition[] = {0, 6, -23};

        // MEMORY POINTS FOR WEAPONS
        // gunBeg[] = {"usti hlavne 1", "usti hlavne 2"};
        // gunEnd[] = {"konec hlavne 1", "konec hlavne 2"};
        // memoryPointGun[] = {"usti hlavne 1", "usti hlavne 2"};

        memoryPointLRocket = "rocketl";
        memoryPointRRocket = "rocketr";
        memoryPointLMissile = "rocketl";
        memoryPointRMissile = "rocketR";
        memoryPointCM[] = {
            "flare_launcher1",
            "flare_launcher2"
        };

        memorypointcmdir[] = {
            "flare_launcher1_dir",
            "flare_launcher2_dir"
        };

        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            RTDconfig = QPATHTOF(RTD_heli_laatle.xml);
        };

        class HitPoints {
            class HitHull {
                armor = 999;
                convexComponent = "hull_hit";
                depends = "Total";
                explosionShielding = 1;
                material = 51;
                name = "hull_hit";
                passThrough = 1;
                visual = "zbytek";
                radius = 0.01;
            };

            class HitFuel {
                convexcomponent = "fuel_hit";
                hitpoint = "fuel_hit";
                name = "fuel_hit";
                explosionShielding = 2;
                radius = 0.1;
                visual = "";
                passthrough = 0.1;
                minimalhit = 0.1;
                material = -1;
                armor = 0.6;
            };

            class HitEngine {
                armor = 0.5;
                convexComponent = "engine_hit";
                explosionShielding = 2;
                material = 51;
                name = "engine_hit";
                hitpoint = "engine_hit";
                passThrough = 1;
                visual = "";
                radius = 0.2;
            };

            class HitEngine_1: HitEngine {
                convexComponent = "engine_hit_1";
                name = "engine_hit_1";
                hitpoint = "engine_hit_1";
            };

            class HitEngine_2: HitEngine {
                convexComponent = "engine_hit_2";
                name = "engine_hit_2";
                hitpoint = "engine_hit_2";
            };

            class HitHRotor {
                armor = 5;
                convexComponent = "main_rotor_hit";
                explosionShielding = 2.5;
                material = 51;
                name = "main_rotor_hit";
                passThrough = 0.1;
                visual = "";
                radius = 0.001;
            };

            class HitVRotor {
                armor = 5;
                convexComponent = "tail_rotor_hit";
                explosionShielding = 6;
                material = 51;
                name = "tail_rotor_hit";
                passThrough = 0.3;
                visual = "";
                radius = 0.001;
            };

            class HitGear {
                armor = 30;
                name = "gear";
                material = -1;
                passThrough = 0;
            };

            class HitAvionics {
                armor = 1;
                convexComponent = "avionics_hit";
                explosionShielding = 2;
                material = 51;
                name = "avionics_hit";
                passThrough = 1;
                visual = "";
                radius = 0.5;
            };
        };

        cargoAction[] = {
            "passenger_generic01_foldhands",
            "passenger_generic01_leanright",
            "passenger_generic01_leanleft",
            "passenger_boat_holdleft",
            "passenger_boat_holdright",
            "passenger_sdv"
        };
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6};
        transportSoldier = 6;
        driveOnComponent[] = {
            "Skids"
        };

        class ViewPilot: ViewPilot {
            initFov = 0.75;
            minFov = 0.375;
            maxFov = 1.1;
        };

        class WingVortices {
            class WingTipLeft {
                effectName = "FX_WingVortices_FighterJet";
                position = "vapour_l_pos";
            };

            class WingTipRight {
                effectName = "FX_WingVortices_FighterJet";
                position = "vapour_r_pos";
            };
        };

        class ViewOptics: ViewOptics {
            initAngleX = 0;
            minAngleX = 0;
            maxAngleX = 0;
            initAngleY = 0;
            minAngleY = 0;
            maxAngleY = 0;
            initFov = 0.1;
            minFov = 0.1;
            maxFov = 1.2;
        };

        class Exhausts {
            class Exhaust1 {
                position = "Exhaust1";
                direction = "Exhaust1_dir";
                effect = "ExhaustsEffectPlaneHP";
                engineIndex = 0;
            };

            class Exhaust2 {
                position = "Exhaust2";
                direction = "Exhaust2_dir";
                effect = "ExhaustsEffectPlaneHP";
                engineIndex = 1;
            };
        };
        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                visionMode[] = {"Normal", "NVG", "Ti"};
                thermalMode[] = {0, 1};
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
                //MEMORY POINTS FOR WEAPONS
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGun[] = {"usti_hlavne_1", "usti_hlavne_2"};

                class ViewGunner {
                    visionMode[] = {"Normal", "NVG"};
                    gunnerOpticsEffect[] = {};
                    stabilizedInAxes = 0;
                    directionStabilized = 0;
                    horizontallyStabilized = 0;
                    initFov = 1;
                    minFov = 0.6;
                    maxFov = 0.85;
                    initAngleX = 180;
                    minAngleX = 90;
                    maxAngleX = 270;
                    initAngleY = -45;
                    minAngleY = -90;
                    maxAngleY = -30;
                    minMoveX = -0.1;
                    maxMoveX = 0.1;
                    minMoveY = -0.025;
                    maxMoveY = 0.1;
                    minMoveZ = -0.1;
                    maxMoveZ = 0.1;
                    gunnerOpticsModel = "";
                };

                class ViewOptics {
                    visionMode[] = {"Normal", "NVG", "Ti"};
                    thermalMode[] = {0, 1};
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleX = 0;
                    minAngleY = -15;
                    maxAngleY = 15;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.25;
                    maxFov = 0.75;
                };

                class OpticsIn {
                    class Wide {
                        visionMode[] = {"Normal", "NVG", "Ti"};
                        thermalMode[] = {0, 1};
                        initAngleX = 0;
                        minAngleX = 0;
                        maxAngleX = 0;
                        initAngleY = 0;
                        minAngleY = -15;
                        maxAngleY = 15;
                        initFov = 0.466;
                        minFov = 0.466;
                        maxFov = 0.466;
                        opticsDisplayName = "W";
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
                    };

                    class Medium: Wide {
                        initFov = 0.093;
                        minFov = 0.093;
                        maxFov = 0.093;
                        opticsDisplayName = "M";
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F.p3d";
                    };

                    class Narrow: Wide {
                        initFov = 0.029;
                        minFov = 0.029;
                        maxFov = 0.029;
                        opticsDisplayName = "N";
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F.p3d";
                    };
                };

                class OpticsOut {
                    class Monocular {
                        visionMode[] = {"Normal", "NVG"};
                        gunnerOpticsEffect[] = {};
                        initAngleX = -10;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        minFov = 0.25;
                        maxFov = 1.25;
                        initFov = 0.75;
                        gunnerOpticsModel = "";
                    };
                };

                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: Components {
                            class VehiclePrimaryGunnerDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "PrimaryGunner";
                            };

                            class VehicleMissileDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "Missile";
                            };

                            class SensorDisplay {
                                range[] = {4000, 2000, 16000, 8000};
                                componentType = "SensorsDisplayComponent";
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };

                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        class Components: Components {
                            class VehiclePrimaryGunnerDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "PrimaryGunner";
                            };

                            class VehicleMissileDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "Missile";
                            };

                            class SensorDisplay {
                                range[] = {4000, 2000, 16000, 8000};
                                componentType = "SensorsDisplayComponent";
                                resource = "RscCustomInfoSensors";
                            };
                        };
                        defaultDisplay = "SensorDisplay";
                    };
                };

                gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
                primaryObserver = 0;
                primaryGunner = 1;
                animationSourceBody = "mainTurret";
                body = "mainTurret";
                gun = "mainGun";
                animationSourceGun = "mainGun";
                primary = 1;
                usePip = 1;
                turretFollowFreeLook = 0;
                gunnerCompartments = "Compartment1";
                gunnerLeftHandAnimName = "";
                gunnerRightHandAnimName = "";
                proxyindex = 1;
                isCopilot = 1;
                gunnerName = "$STR_A3_copilot";
                showHMD = 1;
                castCargoShadow = 0;
                viewCargoShadow = 0;
                castDriverShadow = 0;
                viewDriverShadow = 0;
                CanEject = 0;
                hideWeaponsGunner = 1;
                memoryPointsGetInGunner = "pos_gunner";
                memoryPointsGetInGunnerDir = "pos_gunner_dir";
                memoryPointGunnerOutOptics = "gunnerviewout";
                discreteDistanceInitIndex = 5;
                gunnerAction = "Driver_mid01";
                gunnerInAction = "Driver_mid01";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerUsesPilotView = 0;
                commanding = -1;
                startEngine = 0;
                stabilizedInAxes = 3;
                showAllTargets = 4;
                memoryPointLRocket = "RocketL";
                memoryPointRRocket = "RocketR";
                memoryPointLMissile = "RocketL";
                memoryPointRMissile = "RocketR";
                selectionFireAnim = "zasleh";
                weapons[] = {
                    "ls_lmg_127"
                };
                magazines[] = {
                    "ls_magazine_127x99_500Rnd_red",
                    "ls_magazine_127x99_500Rnd_red",
                };
                outGunnerMayFire = 1;
                castGunnerShadow = 0;
                viewGunnerShadow = 0;
                gunnerOpticsModel = "";
                gunnerForceOptics = 0;
                turretInfoType = "RscOptics_Heli_Attack_01_gunner";
                soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner.wss", 0.31622776, 1, 30};
                soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical.wss", 0.31622776, 1, 30};
                minElev = -7;
                initElev = 0;
                maxElev = 30;
                minTurn = -14;
                initTurn = 0;
                maxTurn = 14;
                minCamElev = -90;
                maxCamElev = 90;
                elevationMode = 0;
                memoryPointGunnerOptics = "gunnerview";
            };

            // Pos 12
            class cargoTurret_pos7: CargoTurret {
                allowLauncherIn = 1;
                gunnerAction = "vehicle_passenger_stand_2";
                gunnerInAction = "vehicle_passenger_stand_2";
                startEngine = 0;
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memoryPointsGetInGunner = "pos cargo 12";
                memoryPointsGetInGunnerDir = "pos cargo 12 dir";
                gunnerName = "Passenger (Left Side)";
                hasGunner = 1;
                gunnerCompartments = "Compartment2";
                isPersonTurret = 2;
                playerPosition = 12;
                ejectDeadGunner = 0;
                LODTurnedIn = 1200;
                proxyIndex = 7;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                dontCreateAI = 1;
                forceHideGunner = 1;
                // enabledByAnimationSource = "";
            };

            // POS 14
            class cargoTurret_pos8: cargoTurret_pos7 {
                memoryPointsGetInGunner = "pos cargo 14";
                memoryPointsGetInGunnerDir = "pos cargo 14 dir";
                proxyIndex = 8;
            };
            // POS 11
            class cargoTurret_pos9: cargoTurret_pos7 {
                memoryPointsGetInGunner = "pos cargo 11";
                memoryPointsGetInGunnerDir = "pos cargo 11 dir";
                proxyIndex = 9;
            };
            // POS 9
            class cargotTurret_pos10: cargoTurret_pos7 {
                gunnerName = "Passenger (Right Side)";
                memoryPointsGetInGunner = "pos cargo 9";
                memoryPointsGetInGunnerDir = "pos cargo 9 dir";
                proxyIndex = 10;
            };
            // Pos 8
            class cargoTurret_pos11: cargotTurret_pos10 {
                memoryPointsGetInGunner = "pos cargo 8";
                memoryPointsGetInGunnerDir = "pos cargo 8 dir";
                proxyIndex = 11;
            };
            // Pos 7
            class cargoTurret_pos12: cargotTurret_pos10 {
                memoryPointsGetInGunner = "pos cargo 7";
                memoryPointsGetInGunnerDir = "pos cargo 7 dir";
                proxyIndex = 12;
            };
            // pos 13
            class cargoTurret_leftDoor_pos13: cargoTurret_pos7 {
                gunnerName = "Passenger (Left Door)";
                gunnerAction = "passenger_bench_1";
                gunnerInAction = "passenger_bench_1";
                proxyIndex = 13;
                memoryPointsGetInGunner = "pos cargo 13";
                memoryPointsGetInGunnerDir = "pos cargo 13 dir";
                gunnerGetInAction = "GetInHeli_Light_01bench";
                gunnerGetOutAction = "GetOutLow";
                ejectDeadGunner = 1;
                gunnerCompartments = "Compartment3";
            };

            class cargoTurret_leftDoor_pos14: cargoTurret_leftDoor_pos13 {
                memoryPointsGetInGunner = "pos cargo 14";
                memoryPointsGetInGunnerDir = "pos cargo 14 dir";
                proxyIndex = 14;
            };

            class cargoTurret_rightDoor_pos15: cargoTurret_leftDoor_pos13 {
                gunnerName = "Passenger (Right Door)";
                gunnerCompartments = "Compartment4";
                memoryPointsGetInGunner = "pos cargo 15";
                memoryPointsGetInGunnerDir = "pos cargo 15 dir";
                proxyIndex = 15;
            };

            class cargoTurret_rightDoor_pos16: cargoTurret_rightDoor_pos15 {
                memoryPointsGetInGunner = "pos cargo 16";
                memoryPointsGetInGunnerDir = "pos cargo 16 dir";
                proxyIndex = 16;
            };
        };

        class Reflectors {
            class Searchlight {
                color[] = {7000, 7500, 10000};
                ambient[] = {70, 75, 100};
                intensity = 100;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                useFlare = 1;
                flareSize = 10;
                flareMaxDistance = 400;
                dayLight = 1;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 100;
                    hardLimitEnd = 500;
                };
                position = "light_searchlight_pos";
                direction = "light_searchlight_dir";
                hitpoint = "light_l";
                selection = "light_searchlight";
            };

            class headlight_l: Searchlight {
                intensity= 20;
                flareMaxDistance = 20;
                position = "light_left_pos";
                direction = "light_left_dir";
                selection = "light_headlight_l";

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 10;
                    hardLimitEnd = 100;
                };
            };

            class headlight_r: headlight_l {
                position = "light_right_pos";
                direction = "light_right_dir";
                selection = "light_headlight_r";
            };

            class pilotLight: Searchlight {
                position = "light_interior1";
                direction = "light_interior1_dir";
                selection = "";
                color[] = {100, 20, 20};
                ambient[] = {20, 1, 1};
                intensity = 20;
                innerAngle = 15;
                outerAngle = 100;
                flaresize = 1;
                flareMaxDistance = 1;
                daylight = 1;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 0.5;
                    hardLimitEnd = 2;
                };
            };

            class cargoLight: pilotLight {
                position = "light_interior2";
                direction = "light_interior2_dir";
            };
        };

        class MarkerLights {

            // LEFT SIDE NAVIGATION LIGHTS: RED
            class navigationLight_red_1 {
                color[] = {0.80000001, 0, 0};
                ambient[] = {0.079999998, 0, 0};
                intensity = 75;
                name = "light_nav_red_1";
                drawLight = 1;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.050000001;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 0;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.05;
                    hardLimitEnd = 0.3;
                };
            };

            class navigationLight_red_2: navigationLight_red_1 {
                name = "light_nav_red_2";
            };

            class navigationLight_red_3: navigationLight_red_1 {
                name = "light_nav_red_3";
            };

            // RIGHT SIDE NAVIGATION LIGHTS: GREEN
            class navigationLight_green_1: navigationLight_red_1 {
                color[] = {0, 0.80000001, 0};
                ambient[] = {0, 0.079999998, 0};
                name = "light_nav_green_1";
            };

            class navigationLight_green_2: navigationLight_green_1 {
                name = "light_nav_green_2";
            };

            class navigationLight_green_3: navigationLight_green_1 {
                name = "light_nav_green_3";
            };

            // REAR FACING NAVIGATION LIGHTS: WHITE
            class navigationLight_white_1: navigationLight_red_1 {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "light_nav_white_1";
            };

            class navigationLight_white_2: navigationLight_white_1 {
                name = "light_nav_white_2";
            };

            class navigationLight_white_3: navigationLight_white_1 {
                name = "light_nav_white_3";
            };

            class navigationLight_white_4: navigationLight_white_1 {
                name = "light_nav_white_4";
            };

            class navigationLight_white_5: navigationLight_white_1 {
                name = "light_nav_white_5";
            };

            // TOP AND BOTTOM COLLISION LIGHTS
            class collisionLight_top: navigationLight_red_1 {
                name = "light_collision_top";
                blinking = 1;
                blinkingStartsOn = 1;
                blinkingPattern[] = {0.1, 0.89999998};
                blinkingPatternGuarantee = 1;
                drawLightSize = 0.34999999;
                drawLightCenterSize = 0.050000001;
            };

            class collisionLight_bottom: collisionLight_top {
                name = "light_collision_bottom";
            };
            // Pilot Lights
            // CONSOLE LIGHTS
            class console_red_1: navigationLight_red_1 {
                name = "light_console_red_1";
                ambient[] = {1, 0.1, 0.1, 1};
                color[] = {1, 0.11, 0.11, 1};

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.005;
                    hardLimitEnd = 0.01;
                };
            };
            class console_red_2: console_red_1 {
                name = "light_console_red_2";
            };
            class console_red_3: console_red_1 {
                name = "light_console_red_3";
            };
            class console_green_1: console_red_1 {
                ambient[] = {0.1, 1, 0.1, 1};
                color[] = {0.1, 1, 0.1, 1};
                name = "light_console_green_1";
            };
            class console_green_2: console_green_1 {
                name = "light_console_green_2";
            };
            class console_white_1: console_red_1 {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "light_console_white_1";
            };
            // class Light_Interior_pilot: navigationLight_red_1
            // {
            //     name = "light_interior1_dir"
            //     ambient[] = {0.0099999998, 0.0099999998, 0.0099999998, 1};
            //     color[] = {1, 0.1, 0.11, 1};
            //     brightness = 0.035;
            //     blinking = 0;

            //     class Attenuation
            //     {
            //         start = 0;
            //         constant = 0;
            //         linear = 1;
            //         quadratic = 4;
            //         hardLimitStart = 0.5;
            //         hardLimitEnd = 2;
            //     };
            // };

        };

        class AnimationSources {
            class door_right_toggle {
                source = "user";
                animPeriod = 1.7;
                initPhase = 1;
            };

            class door_left_toggle: door_right_toggle {};

            class hide_right_doors {
                author = AUTHOR;
                displayName = "Show Right Doors";
                source = "user";
                onPhaseChanged = QUOTE([ARR_3(_this select 0,'hide_right_doors',[ARR_2(9,10)])] call FUNC(conditionalSeats));
                animPeriod = 0.001;
                initPhase = 1;
                mass = -75;
            };

            class hide_left_doors: hide_right_doors {
                displayName = "Show Left Doors";
                onPhaseChanged = QUOTE([ARR_3(_this select 0,'hide_left_doors',[ARR_2(7,8)])] call FUNC(conditionalSeats));
            };
        };

        class Attributes {
            class hide_right_doors {
                displayName = "Add Right Doors";
                property = "hide_right_doors";
                control = "CheckboxNumber";
                defaultValue = 1;
                expression = QUOTE(_this animateSource [ARR_3('%s',_value,true)]; [ARR_3(_this,'%s',[ARR_2(9,10)])] call FUNC(conditionalSeats));
            };

            class hide_left_doors: hide_right_doors {
                displayName = "Add Left Doors";
                property = "hide_left_doors";
                expression = QUOTE(_this animateSource [ARR_3('%s',_value,true)]; [ARR_3(_this,'%s',[ARR_2(7,8)])] call FUNC(conditionalSeats));
            };

            class door_right_toggle: hide_right_doors {
                displayname = "Closed Right Side Doors";
                property = "door_right_toggle";
                defaultValue = 1;
                expression = "_this animateSource ['%s', _value, true]";
            };

            class door_left_toggle: door_right_toggle {
                displayName = "Closed Left Side Doors";
                property = "door_left_toggle";
            };
        };

        animationlist[] = {
            "doorOpen_left", 0,
            "door_left_close", 0,
            "door_right_open", 0,
            "door_right_close", 0,
            "hide_left_doors", 1,
            "hide_right_doors", 1
        };

        class UserActions {
            class lock_doors {
                displayName = "Lock Doors";
                position = "pilotview";
                priority = 108;
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE(ls_player == currentPilot this and {!GETVAR(lockAnimations,false)});
                statement = QUOTE(SETVAR(lockAnimations,true,true));
            };

            class unlock_doors: lock_doors {
                displayName = "Unlock Doors";
                priority = 109;
                condition = QUOTE(ls_player == currentPilot this and {GETVAR(lockAnimations,false)});
                statement = QUOTE(SETVAR(lockAnimations,false,true));
            };

            class doorClose {
                displayName = "Close Doors";
                position = "pilotview";
                priority = 10;
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'door_left_toggle' == 1} and {this animationSourcePhase 'door_right_toggle' == 1});
                statement = QUOTE([ARR_2(this,'allDoor')] call FUNC(keybindAnimation));
            };

            class doorOpen: doorClose {
                displayName = "Open Doors";
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'door_left_toggle' == 0} and {this animationSourcePhase 'door_right_toggle' == 0});
            };

            class doorOpen_left: doorClose {
                displayName = "Open Left Doors";
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'door_left_toggle' == 0});
                statement = QUOTE([ARR_2(this,'leftDoor')] call FUNC(keybindAnimation));
            };

            class doorClose_left: doorOpen_left {
                displayName = "Close Left Doors";
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'door_left_toggle' == 1});
            };

            class doorOpen_right: doorClose {
                displayName = "Open Right Doors";
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'door_right_toggle' == 0});
                statement = QUOTE([ARR_2(this,'rightDoor')] call FUNC(keybindAnimation));
            };

            class doorClose_right: doorOpen_right {
                displayName = "Close Right Doors";
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'door_right_toggle' == 1});
            };

            class EGVAR(impulsor,impulse) {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE(ls_player == currentPilot this and {this call EFUNC(impulsor,canImpulse)});
                statement = QUOTE([ARR_2(this,1)] call EFUNC(impulsor,impulse));
            };

            class EGVAR(impulsor,repulse): EGVAR(impulsor,impulse) {
                displayName = "Repulse";
                statement = QUOTE([ARR_2(this,-1)] call EFUNC(impulsor,impulse));
            };
        };

        #include "cfg\Components.hpp"
        #include "cfg\MFD.hpp"
        #include "cfg\Sounds.hpp"
    };

    class ls_vehicle_laatle: ls_vehicle_laatle_base {
        scope = 2;
        author = AUTHOR;
        // getInRadius = 5;
        cargoCanEject = 1;

        //Base Simple object
        class SimpleObject {
            verticaloffset = 0;
            verticaloffsetworld = 0;

            animate[] = {
                {"door_right_top", 1},
                {"door_right_bottom", 1},
                {"door_left_top", 1},
                {"door_left_bottom", 1},
                {"light_l", 0},
                {"light_r", 0},
            };

            hide[] = {
                "clan",
                "light_l",
                "light_r",
            };
        };
    };

    class ls_vehicle_laatle_transportGunship: ls_vehicle_laatle {
        scope = 2;
        author = AUTHOR;
        displayName = "LAAT/le Transport";

        class SimpleObject: SimpleObject {
            animate[] = {
                {"door_right_top", 1},
                {"door_right_bottom", 1},
                {"door_left_top", 1},
                {"door_left_bottom", 1},
                {"hide_right_doors", 0},
                {"hide_left_doors", 0}
            };
        };
    };

    class ls_vehicle_laatle_policeGunship: ls_vehicle_laatle {
        scope = 2;
        author = AUTHOR;
        displayName = "LAAT/le Police Cruiser";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\police\hull_co.paa),
            QPATHTOF(data\panels_co.paa),
            QPATHTOF(data\chairs_co.paa),
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_laatle_policeGunship.jpg);

        class Reflectors {
            class Searchlight {
                color[] = {7000, 7500, 10000};
                ambient[] = {70, 75, 100};
                intensity = 100;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                useFlare = 1;
                flareSize = 10;
                flareMaxDistance = 400;
                dayLight = 1;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 100;
                    hardLimitEnd = 500;
                };
                position = "light_searchlight_pos";
                direction = "light_searchlight_dir";
                hitpoint = "light_l";
                selection = "light_searchlight";
            };

            class headlight_l: Searchlight {
                intensity= 20;
                flareMaxDistance = 20;
                position = "light_left_pos";
                direction = "light_left_dir";
                selection = "light_headlight_l";

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 10;
                    hardLimitEnd = 100;
                };
            };

            class headlight_r: headlight_l {
                position = "light_right_pos";
                direction = "light_right_dir";
                selection = "light_headlight_r";
            };

            class PilotLight: Searchlight {
                position = "light_interior1";
                direction = "light_interior1_dir";
                selection = "";
                color[] = {100, 20, 20};
                ambient[] = {20, 1, 1};
                intensity = 20;
                innerAngle = 15;
                outerAngle = 100;
                flaresize = 1;
                flareMaxDistance = 1;
                daylight = 1;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 0.5;
                    hardLimitEnd = 2;
                };
            };

            class CargoLight: PilotLight {
                position = "light_interior2";
                direction = "light_interior2_dir";
            };

            // POLICE LIGHTS ===============================
            class policeLight_right_front_red: headlight_r {
                color[] = {500, 50, 50};
                ambient[] = {70, 10, 10};
                intensity = 50;
                flareMaxDistance = 7;
                position = "light_police_rf_red";
                direction = "light_police_rf_red_dir";

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.75;
                    hardLimitEnd = 25;
                };
            };

            class policeLight_right_front_blue: policeLight_right_front_red {
                color[] = {50, 50, 500};
                ambient[] = {10, 10, 70};
                position = "light_police_rf_blue";
                direction = "light_police_rf_blue_dir";
            };

            class policeLight_left_front_red: policeLight_right_front_red {
                position = "light_police_lf_red";
                direction = "light_police_lf_red_dir";
            };

            class policeLight_left_front_blue: policeLight_right_front_blue {
                position = "light_police_lf_blue";
                direction = "light_police_lf_blue_dir";
            };

            class policeLight_back_red: policeLight_right_front_red {
                position = "light_police_b_red";
                direction = "light_police_b_red_dir";
            };

            class policeLight_back_blue: policeLight_right_front_blue {
                position = "light_police_b_blue";
                direction = "light_police_b_blue_dir";
            };
        };
    };
};
