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
        class HitPoints;
        class Turrets;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class HitPoints: HitPoints {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitHRotor;
            class HitVRotor;
            class HitAvionics;
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret;
        };
        class ViewPilot;
        class ViewOptics;
    };
    class ls_vehicle_laati_base: Helicopter_Base_H {
        scope = 0;
        author = AUTHOR;
        memoryPointDriverOptics = "slingcamera";  // Sets the position of the Pilot Camera to be at the "slingcamera" memory point, which is in the center underneath the LAAT. I've also experimented with putting the position to be at one of the two wings at the position of the light, but then it's to easy to look over in the direction of the LAAT and see only half the LAAT being shown. With the camera being underneath, this issue almost never comes up.
        unitInfoType = "RscOptics_CAS_Pilot";  // This line, in addition with the line underneath, make the game count the LAAT as a CAS plane and thus give it the full targeting information in the Pilot Camera, aka bank indicator, speed and altitude, as well as grid informations.
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        allowTabLock = 1;  // If true, allows the usage of automatic cycling of targets using Tab (Next Target key assignment - default "R" in Arma 3). Can be used for driver, or each individual turret.
        GVAR(allDoorAnims)[] = {"laat_door_l", "laat_door_r"};
        GVAR(allDoorToggleSounds)[] = {"ls_laat_doorOpen", "ls_laat_doorClose"};
        GVAR(leftDoorAnims)[] = {"laat_door_l"};
        GVAR(leftDoorToggleSounds)[] = {"ls_laat_doorOpen", "ls_laat_doorClose"};
        GVAR(rightDoorAnims)[] = {"laat_door_r"};
        GVAR(rightDoorToggleSounds)[] = {"ls_laat_doorOpen", "ls_laat_doorClose"};
        GVAR(rampAnims)[] = {"laat_ramp_open"};
        GVAR(rampToggleSounds)[] = {"ls_laat_ramp", "ls_laat_ramp"};
        GVAR(allAnims)[] = {"laat_door_l", "laat_door_r", "laat_ramp_open"};
        GVAR(allToggleSounds)[] = {"ls_laat_doorOpen", "ls_laat_doorClose"};

        // Creates the Pilot Camera
        class PilotCamera {
            class OpticsIn {
                // Default View, all further views are zoomed in versions. Most of this has been copied from vanilla
                class Wide {
                    opticsdisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = 75 / 120;
                    minFov = 75 / 120;
                    maxFov = 75 / 120;
                    directionStabilized = 1;
                    visionMode[] = {"Normal", "NVG", "TI"};
                    thermalMode[] = {0, 1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
                };
                class Medium: Wide {
                    opticsdisplayName = "MFOV";
                    initFov = 14.4 / 120;
                    minFov = 14.4 / 120;
                    maxFov = 14.4 / 120;
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide {
                    opticsdisplayName = "NFOV";
                    initFov = 4.8 / 120;
                    minFov = 4.8 / 120;
                    maxFov = 4.8 / 120;
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
                showMiniMapInOptics = 1;  // Allows you to keep your minimap open while in camera view
                showUAVViewInOptics = 0;  // Does not allow you to keep your Pilot Camera PIP open when switching to the Pilot Camera view
                showSlingLoadManagerInOptics = 1;  // Allows you to keep your SlingLoadAssistant open while in Pilot Camera view, aka when you point it down, you can still use it to help you with sling-loading.
            };
            minTurn = -180;  // Together with the below line, this makes for a 360° rotation.
            maxTurn = 180;
            initTurn = 0;  // Initial camera rotation
            minElev = -10; // Minimum camera elevation.
            maxElev = 90;  // Maximum camera elevation. It's backwards, a positive level allows you to go further down. 90 is the de-facto maximum.
            initElev = -10; // Initial camera elevation (it's pointing slightly up)
            maxXRotSpeed = 0.3;  // How fast it can rotate left-right
            maxYRotSpeed = 0.3;  // How fast it can rotate up-down
            pilotOpticsShowCursor = 1;  // In theory allows a HUD to show the point where your Pilot Camera is looking at. The LS LAAT HUD does not seem to have such a function enabled. I kept it at True in case such a function is added later on.
            controllable = 1;  // Allows the pilot to control the camera
            ace_missileguidance_usePilotCameraForTargeting = 1;  // Flag for ACE that Pilot Camera guided weapons (mainly HOT missiles) use this camera for their guidance. With that line set to False, the missile is going to follow the nose of the LAAT. This only affects non-plane vehicles, ACE will always use pilot camera for planes that have one.
        };

        ace_interaction_bodyWidth = 3;
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 16;

        ace_fastroping_enabled = 1;
        ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
        ace_fastroping_ropeorigins[] = {
            "ropefriesorigin1",
            "ropeoriginpoint2",
            "ropeoriginpoint3",
            "ropeoriginpoint4"
        };

        // Slingload options
        slingLoadMaxCargoMass = 5000000;  // Max Cargo, based on vehicle mass
        slingLoadMemoryPoint = "slingload0";  // MEM point loc used to spawn the ropes

        driverHasFlares = 1;

        class ls_impulsor: EGVAR(impulsor,base) {};

        weapons[] = {
            "ls_weapon_laati_turret_50mm_he",
            "ls_weapon_laati_turret_50mm_ap",
            "ls_weapon_laati_missiles",
            // "Missile_AGM_02_Plane_CAS_01_F",
            "ls_weapon_CMFlareLauncher"
        };
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            "12rnd_missiles",
            "12rnd_missiles",
            "12rnd_missiles",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine"
        };

        fuelCapacity = 3000;
        fuelConsumptionRate = 0.12;

        side = 1;
        faction = "ls_gar";
        editorSubcategory = "EdSubcat_Helicopters";
        crew = "ls_clone_phase2_pilot";
        typicalCargo[] = {
            "ls_clone_phase2_rifleman"
        };
        icon = QPATHTOF(data\ui\laati_icon_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_laati.jpg);
        picture = "";
        availableForSupportTypes[] = {"CAS_Heli", "Drop", "Transport"};
        cost = 2000000;
        armor = 100;
        maxFordingDepth = 5;
        // gearRetracting = 1;
        // gearUpTime = 1;
        // gearDownTime = 1;
        incomingMissileDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        LockDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        getInRadius = 3;
        hideWeaponsCargo = 0;
        cargoCanEject = 1;
        mainBladeRadius = 0.0;

        accuracy = 0.5;
        displayName = "LAAT/i Gunship";
        model = QPATHTOF(ls_vehicle_laati.p3d);

        driverAction = "pilot_Heli_Light_02";
        driverInAction = "pilot_Heli_Light_02";
        preciseGetInOut = 1;  // 0 = use memoryPointGetIn , 1 = use model center as get in point, 2 = use proxy of crew position as get in point. Default is 0
        // cargoPreciseGetInOut = 0;
        usePreciseGetInAction = 1;
        GetInAction = "GetInLow";
        GetOutAction = "GetOutLow";

        // MEMORY POINTS FOR EXIT AND ENTRY
        memoryPointsGetInDriver = "pos_driver";
        memoryPointsGetInDriverDir = "pos_driver_dir";
        memoryPointsGetInCargo = "pos_driver";
        memoryPointsGetInCargoDir = "pos_driver_dir";
        // memoryPointsGetInCargoPrecise[] = {"pos_cargo"};
        transportSoldier = 2;
        memoryPointTaskMarker = "TaskMarker_1_pos";
        radarType = 8;
        extCameraPosition[] = {0, 6, -23};

        // MEMORY POINTS FOR WEAPONS
        gunBeg[] = {"usti hlavne 1", "usti hlavne 2"};
        gunEnd[] = {"konec hlavne 1", "konec hlavne 2"};
        memoryPointGun[] = {"usti hlavne 1", "usti hlavne 2"};

        memorypointLRocket = "rocketl";
        memorypointRRocket = "rocketr";
        memorypointLmissile = "rocketl";
        memorypointRmissile = "rocketR";
        memoryPointCM[] = {
            "flare_launcher1",
            "flare_launcher2"
        };

        memoryPointCMDir[] = {
            "flare_launcher1_dir",
            "flare_launcher2_dir"
        };

        hiddenSelections[] = {
            "body",
            "body_2",
            "door_1",
            "door_2",
            "door_3",
            "wings",
            "missiles",
            "cockpits",
            "glass",
            "clan"
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body1_co.paa),
            QPATHTOF(data\body2_co.paa),
            QPATHTOF(data\door1_co.paa),
            QPATHTOF(data\door2_co.paa),
            QPATHTOF(data\door3_co.paa),
            QPATHTOF(data\wings_co.paa),
            QPATHTOF(data\missiles_co.paa),
            QPATHTOF(data\cockpits_co.paa),
            QPATHTOF(data\glass_ca.paa)
        };

        #include "cfg\TextureSources.hpp"

        class SimpleObject {
            verticaloffset = 0;
            verticaloffsetworld = 0;

            animate[] = {
                {"door_1_l", 0},
                {"door_1_r", 0},
                {"door_2_l", 0},
                {"door_1_r", 0},
                {"laat_ramp_open", 0},
                {"CollisionLightRed1", 0},
                {"CollisionLightGreen1", 0},
                {"CollisionLightWhite1", 0},
                {"CollisionLightWhite2", 0},
                {"light_l", 0},
                {"light_r", 0},
                {"light_cabin_red", 0},
                {"light_cabin_green", 0}
            };

            hide[] = {
                "clan",
                "light_l",
                "light_r",
                "light_cabin_red",
                "light_cabin_green"
            };
        };

        class HitPoints: HitPoints {
            class HitHull: HitHull {
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

            class HitFuel: HitFuel {
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

            class HitEngine: HitEngine {
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

            class HitEngine1: HitEngine {
                convexComponent = "engine_1_hit";
                name = "engine_1_hit";
                hitpoint = "engine_1_hit";
            };

            class HitEngine2: HitEngine {
                convexComponent = "engine_2_hit";
                name = "engine_2_hit";
                hitpoint = "engine_2_hit";
            };
            delete HitEngine3;

            class HitHRotor: HitHRotor {
                armor = 3;
                convexComponent = "main_rotor_hit";
                explosionShielding = 2.5;
                material = 51;
                name = "main_rotor_hit";
                passThrough = 0.1;
                visual = "";
                radius = 0.001;
            };

            class HitVRotor: HitVRotor {
                armor = 3;
                convexComponent = "tail_rotor_hit";
                explosionShielding = 6;
                material = 51;
                name = "tail_rotor_hit";
                passThrough = 0.3;
                visual = "";
                radius = 0.001;
            };

            class HitAvionics: HitAvionics {
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
            "passenger_flatground_leanright",
            "passenger_flatground_leanleft"
        };
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        cargoProxyIndexes[] = {1, 2};
        driveOnComponent[] = {
            // "Skids"
        };

        class WingVortices {
            class Wingtipleft {
                effectName = "FX_WingVortices_FighterJet";
                position = "vapour_l_pos";
            };

            class Wingtipright {
                effectName = "FX_WingVortices_FighterJet";
                position = "vapour_r_pos";
            };
        };

        class ViewPilot: ViewPilot {
            initFov = 0.75;
            minFov = 0.375;
            maxFov = 1.1;
        };

        class ViewOptics: ViewOptics {
            initAngleX = 0;  // initial horizontal angle of the optics view relative to proxy position of pilot
            minAngleX = 0;   // maximum turn to the left relative to proxy position of pilot
            maxAngleX = 0;   // maximum turn to the right relative to proxy position of pilot
            initAngleY = 0;  // initial vertical angle of the optics view relative to proxy position of pilot
            minAngleY = 0;   // maximum elevation down relative to proxy position of pilot
            maxAngleY = 0;   // maximum elevation up relative to proxy position of pilot
            initFov = 0.1;   // the same functionality as in ViewPilot
            minFov = 0.1;    // the same functionality as in ViewPilot
            maxFov = 1.2;    // the same functionality as in ViewPilot
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

        class CompartmentsLights {
            class comp1 {
                class light1 {
                    color[] = {10, 20, 20};
                    ambient[] = {0, 0, 0};
                    intensity = 2;
                    size = 0;
                    useFlare = 0;
                    flareSize = 0;
                    flareMaxDistance = 0;
                    dayLight = 0;
                    blinking = 0;
                    point = "light_interior1";

                    class Attenuation {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 0.15;
                        hardLimitEnd = 3;
                    };
                };
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {0, 1};
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
                gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
                primaryObserver = 0;
                primaryGunner = 1;
                primary = 1;
                usePip = 1;
                turretFollowFreeLook = 0;
                gunnerCompartments = "Compartment2";
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
                selectionFireAnim = "zasleh_b";
                weapons[] = {"ls_weapon_laati_turret_50mm_he"};
                magazines[] = {
                    "ls_magazine_50mm_200Rnd_HE_green",
                    "ls_magazine_50mm_200Rnd_HE_green",
                };
                gunBeg = "konec hlavne b";
                gunEnd = "usti hlavne b";
                memoryPointGun = "konec hlavne b";
                outGunnerMayFire = 1;
                castGunnerShadow = 0;
                viewGunnerShadow = 0;
                gunnerOpticsModel = "";
                gunnerForceOptics = 0;
                turretInfoType = "RscOptics_Heli_Attack_01_gunner";
                soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner.wss", 0.31622776, 1, 30};
                soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical.wss", 0.31622776, 1, 30};
                minElev = -80;
                maxElev = 30;
                minTurn = 100;
                maxTurn = 260;
                initElev = -45;
                initTurn = 180;
                minCamElev=-80;
                maxCamElev=-30;
                memoryPointGunnerOptics = "gunnerview";

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
                    visionMode[] = {"Normal", "NVG", "TI"};
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
                        visionMode[] = {"Normal", "NVG", "TI"};
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
                        opticsdisplayName = "W";
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
                    };

                    class Medium: Wide {
                        initFov = 0.093;
                        minFov = 0.093;
                        maxFov = 0.093;
                        opticsdisplayName = "M";
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F.p3d";
                    };

                    class Narrow: Wide {
                        initFov = 0.029;
                        minFov = 0.029;
                        maxFov = 0.029;
                        opticsdisplayName = "N";
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
                    class TransportCountermeasuresComponent {};
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
            };

            // class RightBallTurret: MainTurret
            // {
            //     isCopilot = 0;
            // };

            // CODE FOR POSSIBLE CARGO SLOTS
            class CargoTurret_rearL: CargoTurret {
                allowLauncherIn = 1;
                gunnerAction = "vehicle_passenger_stand_2";
                gunnerInAction = "vehicle_passenger_stand_2";
                startEngine = 0;
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memoryPointsGetInGunner = "pos cargo 16";
                memoryPointsGetInGunnerDir = "pos cargo 16 dir";
                gunnerName = "Passenger (Ramp Left)";
                hasGunner = 1;
                gunnerCompartments = "Compartment3";
                isPersonTurret = 2;
                playerPosition = 12;
                ejectDeadGunner = 0;
                LODTurnedIn = 1200;
                LODTurnedOut = 1;
                proxyIndex = 16;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                dontCreateAI = 1;
                forceHideGunner = 1;
                // enabledByAnimationSource = "";
            };
            class CargoTurret_rearR: CargoTurret_rearL {
                gunnerName = "Passenger (Ramp Right)";
                memoryPointsGetInGunner = "pos cargo 15";
                memoryPointsGetInGunnerDir = "pos cargo 15 dir";
                // gunnerAction = "passenger_boat_holdleft";
                // gunnerInAction = "passenger_boat_holdleft";
                proxyIndex = 15;
            };
            class CargoTurret_left_1: CargoTurret_rearR {
                gunnerName = "Passenger (Left Side)";
                memoryPointsGetInGunner = "pos cargo 3";
                memoryPointsGetInGunnerDir = "pos cargo 3 dir";
                // gunnerAction = "passenger_boat_holdleft";
                // gunnerInAction = "passenger_boat_holdleft";
                proxyIndex = 3;
            };
            class CargoTurret_left_2: CargoTurret_left_1 {
                proxyIndex = 4;
                memoryPointsGetInGunner = "pos cargo 4";
                memoryPointsGetInGunnerDir = "pos cargo 4 dir";
            };
            class CargoTurret_left_3: CargoTurret_left_1 {
                proxyIndex = 5;
                memoryPointsGetInGunner = "pos cargo 5";
                memoryPointsGetInGunnerDir = "pos cargo 5 dir";
            };
            class CargoTurret_left_4: CargoTurret_left_1 {
                proxyIndex = 6;
                memoryPointsGetInGunner = "pos cargo 6";
                memoryPointsGetInGunnerDir = "pos cargo 6 dir";
            };
            class CargoTurret_left_5: CargoTurret_left_1 {
                proxyIndex = 7;
                memoryPointsGetInGunner = "pos cargo 7";
                memoryPointsGetInGunnerDir = "pos cargo 7 dir";
            };
            class CargoTurret_left_14: CargoTurret_left_1 {
                proxyIndex = 14;
                memoryPointsGetInGunner = "pos cargo 14";
                memoryPointsGetInGunnerDir = "pos cargo 14 dir";
            };

            class CargoTurret_right_1: CargoTurret_rearL {
                gunnerName = "Passenger (Right Side)";
                memoryPointsGetInGunner = "pos cargo 8";
                memoryPointsGetInGunnerDir = "pos cargo 8 dir";
                proxyIndex = 8;
            };
            class CargoTurret_right_2: CargoTurret_right_1 {
                proxyIndex = 9;
                memoryPointsGetInGunner = "pos cargo 9";
                memoryPointsGetInGunnerDir = "pos cargo 9 dir";
            };
            class CargoTurret_right_3: CargoTurret_right_1 {
                proxyIndex = 10;
                memoryPointsGetInGunner = "pos cargo 10";
                memoryPointsGetInGunnerDir = "pos cargo 10 dir";
            };
            class CargoTurret_right_4: CargoTurret_right_1 {
                proxyIndex = 11;
                memoryPointsGetInGunner = "pos cargo 11";
                memoryPointsGetInGunnerDir = "pos cargo 11 dir";
            };
            class CargoTurret_right_5: CargoTurret_right_1 {
                proxyIndex = 12;
                memoryPointsGetInGunner = "pos cargo 12";
                memoryPointsGetInGunnerDir = "pos cargo 12 dir";
            };
            class CargoTurret_right_13: CargoTurret_right_5 {
                proxyIndex = 13;
                memoryPointsGetInGunner = "pos cargo 13";
                memoryPointsGetInGunnerDir = "pos cargo 13 dir";
            };

            class CargoTurret_right_17: CargoTurret_rearL {
                gunnerName = "Passenger (Right Door)";
                gunnerAction = "passenger_bench_1";
                gunnerInAction = "passenger_bench_1";
                proxyIndex = 17;
                memoryPointsGetInGunner = "pos cargo 17";
                memoryPointsGetInGunnerDir = "pos cargo 17 dir";
                gunnerGetInAction = "GetInHeli_Light_01bench";
                gunnerGetOutAction = "GetOutLow";
                ejectDeadGunner = 1;
                gunnerCompartments = "Compartment4";
            };

            class CargoTurret_right_18: CargoTurret_right_17 {
                proxyIndex = 18;
                memoryPointsGetInGunner = "pos cargo 18";
                memoryPointsGetInGunnerDir = "pos cargo 18 dir";
            };

            class CargoTurret_right_19: CargoTurret_right_17 {
                proxyIndex = 19;
                memoryPointsGetInGunner = "pos cargo 19";
                memoryPointsGetInGunnerDir = "pos cargo 19 dir";
            };

            class CargoTurret_left_20: CargoTurret_right_17 {
                gunnerName = "Passenger (Left Door)";
                gunnerCompartments = "Compartment5";
                proxyIndex = 20;
                memoryPointsGetInGunner = "pos cargo 20";
                memoryPointsGetInGunnerDir = "pos cargo 20 dir";
            };

            class CargoTurret_left_21: CargoTurret_left_20 {
                proxyIndex = 21;
                memoryPointsGetInGunner = "pos cargo 21";
                memoryPointsGetInGunnerDir = "pos cargo 21 dir";
            };

            class CargoTurret_left_22: CargoTurret_left_20 {
                proxyIndex = 22;
                memoryPointsGetInGunner = "pos cargo 22";
                memoryPointsGetInGunnerDir = "pos cargo 22 dir";
            };
        };

        class Reflectors {
            class Left {
                color[] = {7000, 7500, 10000};
                ambient[] = {70, 75, 100};
                intensity = 50;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                useFlare = 1;
                flareSize = 10;
                flareMaxDistance = 250;
                dayLight = 1;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 100;
                    hardLimitEnd = 200;
                };
                position = "light_l";
                direction = "light_l_end";
                hitpoint = "light_l";
                selection = "light_l";
            };

            class Right: Left {
                position = "light_r";
                direction = "light_r_end";
                hitpoint = "light_r";
                selection = "light_r";
            };

            class cabin_red_front: Left {
                position = "light_cabin_red";
                direction = "light_cabin_red_dir";
                hitpoint = "light_cabin_red";
                selection = "light_cabin_red";
                color[] = {1000, 0, 0};
                ambient[] = {100, 0, 0};
                intensity = 5;
                size = 1;
                innerAngle = 15;
                outerAngle = 150;
                coneFadeCoef = 1;
                useFlare = 1;
                flareSize = 1;
                flareMaxDistance = 3;
                dayLight = 0;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 1;
                    hardLimitEnd = 3;
                };
            };

            class cabin_green_front: cabin_red_front {
                position = "light_cabin_green";
                direction = "light_cabin_green_dir";
                selection = "light_cabin_green";
                hitpoint = "light_cabin_green";
                color[] = {0, 1000, 0};
                ambient[] = {0, 100, 0};
            };
        };

        class AnimationSources {
            class laat_ramp_open {
                source = "user";
                animPeriod = 2;
                initphase = 0;
            };

            class hidedoor1 {
                displayName = "Show Front Left Door";
                author = AUTHOR;
                source = "user";
                onPhaseChanged = QUOTE([ARR_3(_this select 0,'hidedoor1',[ARR_3(18,19,20)])] call FUNC(conditionalSeats));
                animperiod = 0.001;
                initphase = 1;
                mass = -50;
            };

            class hidedoor2: hidedoor1 {
                displayName = "Show Back Left Door";
                onPhaseChanged = "";
                mass = -70;
            };

            class hidedoor3: hidedoor1 {
                displayName = "Show Ramp";
            };

            class hidedoor4: hidedoor1 {
                displayName = "Show Front Right Door";
                onPhaseChanged = QUOTE([ARR_3(_this select 0,'hidedoor4',[ARR_3(15,16,17)])] call FUNC(conditionalSeats));
                // lockCargo[] = {15, 16, 17};
                // lockCargoAnimationPhase = 1;
            };

            class hidedoor5: hidedoor2 {
                displayName = "Show Back Right Door";
                onPhaseChanged = "";
            };

            class laat_door_l {
                source = "user";
                animPeriod = 2;
                initphase = 0;
            };

            class laat_door_r {
                source = "user";
                animPeriod = 2;
                initphase = 0;
            };

            class hide_cabin_lights_green {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };

            class hide_cabin_lights_red {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };

            // class missiles_revolving
            // {
            //     source = "revolving";
            //     weapon = "missiles_DAR";
            // };

            // class missiles_reloadMagazine:missiles_revolving
            // {
            //     source = "reloadMagazine";
            // };
        };

        class Attributes {
            class hidedoor1 {
                displayName = "Add Front Left Door";
                property = "hidedoor1";
                control = "CheckboxNumber";
                defaultvalue = 1;
                expression = QUOTE(_this animateSource [ARR_3('%s',_value,true)]; [ARR_3(_this,'%s',[ARR_3(19,20,21)])] call FUNC(conditionalSeats));
            };

            class hidedoor2: hidedoor1 {
                displayName = "Add Back Left Door";
                property = "hidedoor2";
                expression = "_this animateSource ['%s', _value, true]";
            };

            class hidedoor3: hidedoor1 {
                displayName = "Add Ramp";
                property = "hidedoor3";
                expression = "_this animateSource ['%s', _value, true]";
            };

            class hidedoor4: hidedoor1 {
                displayName = "Add Front Right Door";
                property = "hidedoor4";
                expression = QUOTE(_this animateSource [ARR_3('%s',_value,true)]; [ARR_3(_this,'%s',[ARR_3(16,17,18)])] call FUNC(conditionalSeats));
            };

            class hidedoor5: hidedoor1 {
                displayName = "Add Back Right Door";
                property = "hidedoor5";
                expression = "_this animateSource ['%s', _value, true]";
            };

            class laat_door_r {
                displayName = "Closed Right Side Doors";
                property = "laat_door_r";
                control = "CheckboxNumber";
                defaultvalue = 0;
                expression = "_this animateSource ['%s', _value, true]";
            };

            class laat_door_l: laat_door_r {
                displayName = "Closed Left Side Doors";
                property = "laat_door_l";
            };

            class laat_ramp_open: laat_door_r {
                displayName = "Opened Ramp";
                property = "laat_ramp_open";
            };
        };
        animationlist[] = {
            "laat_ramp_open", 0,
            "laat_door_l_close", 0,
            "laat_door_l_open", 0,
            "laat_door_r_close", 0,
            "laat_door_r_open", 0,
            "laat_door_open", 0,
            "laat_door_close", 0,
            "cabin_light_red", 0,
            "cabin_light_green", 0,
            "cabinLight_off", 0
        };

        class VehicleTransport {
            class Carrier {
                cargoBayDimensions[] = {"ViV_limit_1", "ViV_limit_2"};  // Memory points in model defining cargo space
                disableHeightLimit = 1;  // If set to 1 disable height limit of transported vehicles
                maxLoadMass = 200000;  // Maximum cargo weight (in Kg) which the vehicle can transport
                cargoAlignment[] = {"front", "Center"};  // Array of 2 elements defining alignment of vehicles in cargo space. Possible values are left, right, center, front, back. Order is important.
                cargoSpacing[] = {0, 0.15, 0};  // Offset from X,Y,Z axes (in metres)
                exits[] = {"ViV_exit_1"};  // Memory points in model defining loading ramps, could have multiple
                unloadingInterval = 2;  // Time between unloading vehicles (in seconds)
                loadingDistance = 2;  // Maximal distance for loading in exit point (in meters).
                loadingAngle = 60;  // Maximal sector where cargo vehicle must be to for loading (in degrees).
                parachuteClassDefault = "B_Parachute_02_F";  // Type of parachute used when dropped in air. Can be overridden by parachuteClass in Cargo.
                parachuteHeightLimitDefault = 100;  // Minimal height above terrain when parachute is used. Can be overriden by parachuteHeightLimit in Cargo.
            };
        };

        class UserActions {
            class lockDoors {
                displayName = "Lock Doors";
                position = "pilotview";
                priority = 108;
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE([ARR_2(this,ls_player)] call EFUNC(common,isPilot) and {!GETVAR(lockAnimations,false)});
                statement = QUOTE(SETVAR(lockAnimations,true,true));
            };

            class unlockDoors: lockDoors {
                displayName = "Unlock Doors";
                priority = 109;
                condition = QUOTE([ARR_2(this,ls_player)] call EFUNC(common,isPilot) and {GETVAR(lockAnimations,false)});
                statement = QUOTE(SETVAR(lockAnimations,false,true));
            };

            class loadVehicle {
                displayName = "$STR_A3_ACTION_LOAD_VEHICLE";
                position = "pilotcontrol";
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE([ARR_2(this,ls_player)] call EFUNC(common,isPilot) and { this call FUNC(vivCanLoad) });
                statement = QUOTE(this call FUNC(vivLoad));
            };

            /*
            For Future Static Line Release, functions still incomplete

            class parachute_engage {
                displayName = "Engage drop-lines";
                position = "pilotview";
                priority = 100;
                radius = 5;
                onlyForPlayer = 0;
                condition = "player == driver this and this getVariable [""dropState"", 0] == 0 and this animationsourcephase ""laat_ramp_open"" == 1;";
                statement = "this setVariable[""dropState"", 1, true];";
            };

            class parachute_disengage: ls_parachute_engage {
                displayName = "Disengage drop-lines";
                priority = 99;
                condition = "player == driver this and this getVariable [""dropState"", 0] == 1";
                statement = "this setVariable[""dropState"", 0, true]";
            };

            class drop {
                displayName = "Jump from LAAT";
                position = "pilotview";
                priority = 111;
                radius = 5;
                onlyForPlayer = 0;
                condition = "(player != driver this) and (this animationsourcephase ""laat_ramp_open"" == 1) and (this getVariable [""dropSpeed"", 0] == 1 and this getVariable [""dropHeight"", 0] == 1)";
                statement = "";
            }
            */

            class cabinLight_red {
                displayName = "<t color='#00ff00'>Activate Cabin Lights</t>";
                position = "pilotview";
                priority = 107;
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE(this animationSourcePhase 'hide_cabin_lights_red' == 0 and {isLightOn this});
                statement = QUOTE(this animateSource [ARR_2('hide_cabin_lights_green',0)]; this animateSource [ARR_2('hide_cabin_lights_red',1)]);
            };

            class cabinLight_green: cabinLight_red {
                displayName = "<t color='#ff0000'>Activate Cabin Lights</t>";
                condition = QUOTE(this animationSourcePhase 'hide_cabin_lights_green' == 0 and {isLightOn this});
                statement = QUOTE(this animateSource [ARR_2('hide_cabin_lights_green',1)]; this animateSource [ARR_2('hide_cabin_lights_red',0)]);
            };

            class cabinLight_off: cabinLight_red {
                displayName = "Deactivate Cabin Lights";
                condition = QUOTE(this animationSourcePhase 'hide_cabin_lights_green' == 1 or {this animationSourcePhase 'hide_cabin_lights_red' == 1 and isLightOn this});
                statement = QUOTE(this animateSource [ARR_2('hide_cabin_lights_green',0)]; this animateSource [ARR_2('hide_cabin_lights_red',0)]);
            };

            class rampOpen {
                displayName = "Open Ramp";
                position = "pilotview";
                priority = 107;
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_ramp_open' == 0});
                statement = QUOTE([ARR_2(this,'ramp')] call FUNC(keybindAnimation));
            };

            class rampClose: rampOpen {
                displayName = "Close Ramp";
                priority = 108;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_ramp_open' == 1});
            };

            class doorClose: rampOpen {
                displayName = "Close Doors";
                priority = 101;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_door_l' == 0} and {this animationSourcePhase 'laat_door_r' == 0});
                statement = QUOTE([ARR_2(this,'allDoor')] call FUNC(keybindAnimation));
            };

            class doorOpen: doorClose {
                displayName = "Open Doors";
                priority = 102;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_door_l' == 1} and {this animationSourcePhase 'laat_door_r' == 1});
            };

            class doorOpen_left: rampOpen {
                displayName = "Open Left Doors";
                priority = 106;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_door_l' == 1});
                statement = QUOTE([ARR_2(this,'leftDoor')] call FUNC(keybindAnimation));
            };

            class doorClose_left: doorOpen_left {
                displayName = "Close Left Doors";
                priority = 105;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_door_l' == 0});
            };

            class doorOpen_right: rampOpen {
                displayName = "Open Right Doors";
                priority = 104;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_door_r' == 1});
                statement = QUOTE([ARR_2(this,'rightDoor')] call FUNC(keybindAnimation));
            };

            class doorClose_right: doorOpen_right {
                displayName = "Close Right Doors";
                priority = 103;
                condition = QUOTE(!GETVAR(lockAnimations,false) and {this animationSourcePhase 'laat_door_r' == 0});
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

        class MarkerLights {
            class CollisionLightRed1 {
                color[] = {0.80000001, 0, 0};
                ambient[] = {0.079999998, 0, 0};
                intensity = 75;
                name = "positionlight_red_1_pos";
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
                    hardLimitStart = 0.75;
                    hardLimitEnd = 1;
                };
            };

            class CollisionLightGreen1: CollisionLightRed1 {
                color[] = {0, 0.80000001, 0};
                ambient[] = {0, 0.079999998, 0};
                name = "positionlight_green_1_pos";
            };

            class CollisionLightWhite1: CollisionLightRed1 {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "positionlight_white_1_pos";
                blinking = 1;
                blinkingStartsOn = 1;
                blinkingPattern[] = {0.1, 0.89999998};
                blinkingPatternGuarantee = 1;
                drawLightSize = 0.34999999;
                drawLightCenterSize = 0.050000001;
            };

            class CollisionLightWhite2: CollisionLightWhite1 {
                name = "positionlight_white_2_pos";
            };
        };

        #include "cfg\PhysX.hpp"
        #include "cfg\Components.hpp"
        #include "cfg\Sounds.hpp"
        // #include "cfg\MFD.hpp" // Unused, but ported over from original config anyway
        #include "\ls\core\addons\common\ui\MFD_Heli.hpp"
    };

    class ls_vehicle_laati: ls_vehicle_laati_base {
        scope = 2;
        author = AUTHOR;
    };

    class ls_vehicle_laati_airborne: ls_vehicle_laati_base {
        scope = 2;
        author = AUTHOR;
        displayName = "LAAT/i Airborne";
        model = QPATHTOF(ls_vehicle_laati_airborne.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_laati_airborne.jpg);

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewGunner: ViewGunner {};
                class ViewOptics: ViewOptics {};
                class OpticsIn: OpticsIn {
                    class Wide: Wide {};
                    class Medium: Medium {};
                    class Narrow: Narrow {};
                };

                class OpticsOut: OpticsOut {
                    class Monocular: Monocular {};
                };

                class Components: Components {
                    class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsDisplayManagerComponentLeft {
                        class Components: Components {
                            class VehiclePrimaryGunnerDisplay: VehiclePrimaryGunnerDisplay {};
                            class VehicleMissileDisplay: VehicleMissileDisplay {};
                            class SensorDisplay: SensorDisplay {};
                        };
                    };

                    class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsDisplayManagerComponentRight {
                        defaultDisplay = "SensorDisplay";

                        class Components: Components {
                            class VehiclePrimaryGunnerDisplay: VehiclePrimaryGunnerDisplay {};
                            class VehicleMissileDisplay: VehicleMissileDisplay {};
                            class SensorDisplay: SensorDisplay {};
                        };
                    };
                };
            };

            class CargoTurret_rearL: CargoTurret_rearL {
                memoryPointsGetInGunner = "airborne_getOut";
                preciseGetInOut = 1;
            };
            class CargoTurret_rearR: CargoTurret_rearR {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_1: CargoTurret_left_1 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_2: CargoTurret_left_2 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_3: CargoTurret_left_3 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_4: CargoTurret_left_4 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_5: CargoTurret_left_5 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_14: CargoTurret_left_14 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_1: CargoTurret_right_1 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_2: CargoTurret_right_2 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_3: CargoTurret_right_3 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_4: CargoTurret_right_4 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_5: CargoTurret_right_5 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_13: CargoTurret_right_13 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_17: CargoTurret_right_17 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_18: CargoTurret_right_18 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_right_19: CargoTurret_right_19 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_20: CargoTurret_left_20 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_21: CargoTurret_left_21 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
            class CargoTurret_left_22: CargoTurret_left_22 {
                memoryPointsGetInGunner = "airborne_getOut";
            };
        };

        #include "cfg\ComponentsAirborne.hpp"
    };

    class ls_vehicle_laati_medevac: ls_vehicle_laati_airborne {
        scope = 2;
        author = AUTHOR;
        displayName = "LAAT/i MedEvac";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_laati_medevac.jpg);

        attendant = 1;
        ls_hasTraumaCenter = 1;

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body1_medic_co.paa),
            QPATHTOF(data\body2_co.paa),
            QPATHTOF(data\door1_medic_co.paa),
            QPATHTOF(data\door2_medic_co.paa),
            QPATHTOF(data\door3_medic_co.paa),
            QPATHTOF(data\wings_co.paa),
            QPATHTOF(data\missiles_co.paa),
            QPATHTOF(data\cockpits_co.paa),
            QPATHTOF(data\glass_ca.paa)
        };

        textureList[] = {
            "Standard", 1
        };
        class TextureSources {
            class Standard {
                displayName = "MedEvac";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\body1_medic_co.paa),
                    QPATHTOF(data\body2_co.paa),
                    QPATHTOF(data\door1_medic_co.paa),
                    QPATHTOF(data\door2_medic_co.paa),
                    QPATHTOF(data\door3_medic_co.paa),
                    QPATHTOF(data\wings_co.paa),
                    QPATHTOF(data\missiles_co.paa),
                    QPATHTOF(data\cockpits_co.paa),
                    QPATHTOF(data\glass_ca.paa)
                };
            };
        };

        class UserActions: UserActions {
            class activateTraumaCenter {
                displayName = "Activate Trauma Center";
                position = "pilotview";
                priority = 107;
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE([ARR_2(this,ls_player)] call FUNC(medevacCanActivate));
                statement = QUOTE(this call FUNC(medevacActivate));
            };

            class deactivateTraumaCenter: activateTraumaCenter {
                displayName = "Deactivate Trauma Center";
                priority = 108;
                condition = QUOTE([ARR_2(this,ls_player)] call FUNC(medevacCanDeactivate));
                statement = QUOTE(this call FUNC(medevacDeactivate));
            };

            class recieveTreatment: activateTraumaCenter {
                displayName = "Dispense Bacta";
                priority = 109;
                condition = QUOTE([ARR_2(this,ls_player)] call FUNC(medevacCanHeal));
                statement = QUOTE([ARR_2(this,ls_player)] call FUNC(medevacHeal));
            };
        };
    };

    class ls_wreck_base;
    class ls_vehicle_laati_wreck: ls_wreck_base {
        scope = 2;
        author = AUTHOR;
        displayName = "LAAT/i";
        model = QPATHTOF(ls_vehicle_laati_wreck.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_laati_wreck.jpg);
    };

    class Items_base_F;
    class ls_prop_laati_bl_door: Items_base_F {
        scope = 2;
        author = AUTHOR;

        displayName = "LAAT/i Door [Back Left]";
        model = QPATHTOF(ls_prop_laati_bl_door.p3d);
        hiddenSelections[] = {"door_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\door2_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_laati_bl_door.jpg);
    };

    class ls_prop_laati_br_door: ls_prop_laati_bl_door {
        author = AUTHOR;
        displayName = "LAAT/i Door [Back Right]";
        model = QPATHTOF(ls_prop_laati_br_door.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_laati_br_door.jpg);
    };

    class ls_prop_laati_fl_door: ls_prop_laati_bl_door {
        author = AUTHOR;
        displayName = "LAAT/i Door [Front Left]";
        model = QPATHTOF(ls_prop_laati_fl_door.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_laati_fl_door.jpg);
        hiddenSelections[] = {"door_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\door1_co.paa)
        };
    };

    class ls_prop_laati_fr_door: ls_prop_laati_fl_door {
        author = AUTHOR;
        displayName = "LAAT/i Door [Front Right]";
        model = QPATHTOF(ls_prop_laati_fr_door.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_laati_fr_door.jpg);
    };
};
