class DefaultVehicleSystemsDisplayManagerLeft;
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft {
    class Components;
};

class DefaultVehicleSystemsDisplayManagerRight;
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight {
    class Components;
};

class EGVAR(impulsor,base);

class CfgVehicles {
    class Helicopter_Base_F;
    class Helicopter_Base_H: Helicopter_Base_F {
        class ViewPilot;
        class ViewOptics;
        class RotorLibHelicopterProperties;
    };
    class ls_vehicle_laatc_base: Helicopter_Base_H {
        scope = 0;
        author = AUTHOR;

        side = 1;
        faction = "ls_gar";
        crew = "ls_clone_phase2_pilot";
        typicalCargo[] = {"ls_clone_phase2_pilot"};

        displayname = "LAAT/c";
        editorSubcategory = "EdSubcat_Helicopters";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_laatc.jpg);
        picture = QPATHTOF(data\ui\laatc_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\laatc_icon_ca.paa);

        model = QPATHTOF(ls_vehicle_laatc.p3d);
        hiddenselections[] = {
            "_auxiliary",
            "_cockpit",
            "_glass",
            "_hull",
            "_wings"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\auxiliary_co.paa),
            QPATHTOF(data\cockpit_co.paa),
            QPATHTOF(data\glass_ca.paa),
            QPATHTOF(data\hull_co.paa),
            QPATHTOF(data\wings_co.paa)
        };

        textureList[] = {
            "Standard", 1,
            "FactoryNew", 0
        };
        class TextureSources {
            class Standard {
                displayName = "Standard";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\auxiliary_co.paa),
                    QPATHTOF(data\cockpit_co.paa),
                    QPATHTOF(data\glass_ca.paa),
                    QPATHTOF(data\hull_co.paa),
                    QPATHTOF(data\wings_co.paa)
                };
                factions[] = {};
            };

            class FactoryNew: Standard {
                displayName = "Factory New";
                textures[] = {
                    QPATHTOF(data\auxiliary_co.paa),
                    QPATHTOF(data\textures\factory\cockpit_co.paa),
                    QPATHTOF(data\glass_ca.paa),
                    QPATHTOF(data\textures\factory\hull_co.paa),
                    QPATHTOF(data\textures\factory\wings_co.paa)
                };
            };
        };

        memoryPointDriverOptics = "slingcamera";
        unitInfoType = "RscOptics_CAS_Pilot";
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        allowTabLock = 1;

        ace_cargo_hasCargo = 1;
        ace_cargo_space = 16;
        ace_fastroping_enabled = 0;

        //Slingload options
        slingLoadMaxCargoMass = 0; //Max Cargo, based on vehicle mass
        slingLoadMemoryPoint = ""; //MEM point loc used to spawn the ropes
        driverHasFlares = 1;

        class ls_impulsor: EGVAR(impulsor,base) {};

        weapons[] = {
            "ls_weapon_laati_turret_50mm_he",
            "ls_weapon_CMFlareLauncher"
        };
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            // "200rnd_laat_apfsds_mag",
            // "200rnd_laat_apfsds_mag",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            // "6Rnd_Missile_AGM_02_F",
            // "12rnd_missiles",
            // "12rnd_missiles",
            // "12rnd_missiles",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green"
        };

        //FUEL VARIABLES
        fuelCapacity = 3000;
        fuelConsumptionRate = 0.12;

        availableForSupportTypes[] = {"Drop", "Transport"};
        cost = 2000000;
        armor = 400;

        driverCanEject = 0;
        gunnerCanEject = 0;
        cargoCanEject = 0;
        incomingMissileDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        LockDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        getInRadius = 3;
        hideWeaponsCargo = 1;
        gearRetracting = 1;
        accuracy = 0.5;

        altFullForce = 10000;
        altNoForce = 15000;
        maxSpeed = 500;
        maxFordingDepth = 5;

        // Lift and flying Coeffecients
        mainBladeRadius = 0.0;
        liftForceCoef = 1.12;
        bodyFrictionCoef = 1;
        cyclicAsideForceCoef = 1;
        cyclicForwardForceCoef = 1;
        backRotorForceCoef = 1;

        // draconicForceXCoef = 11;
        // draconicForceYCoef = 2;
        // draconicForceZCoef = 2;
        // draconicTorqueXCoef = 0.05;
        // draconicTorqueYCoef = 0;

        driverAction = "pilot_Heli_Light_02";
        driverInAction = "pilot_Heli_Light_02";
        precisegetinout = 1;
        usePreciseGetInAction = 1;
        GetInAction = "GetInLow";
        GetOutAction = "GetOutLow";
        cargoAction[] = {};
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        extCameraPosition[] = {0, 5, -40};
        cargoProxyIndexes[] = {};
        driveOnComponent[] = {
            // "Skids"
        };

        // MEMORY POINTS FOR EXIT AND ENTRY
        memoryPointsGetInDriver = "pos_driver";
        memoryPointsGetInDriverDir = "pos_driver_dir";
        memoryPointsGetInCargo = "";
        memoryPointsGetInCargoDir = "";
        memoryPointsGetInCargoPrecise[] = {};
        transportSoldier = 0;
        memoryPointTaskMarker = "TaskMarker_1_pos";
        radarType = 8;

        //MEMORY POINTS FOR WEAPONS
        gunBeg[] = {"usti hlavne 1", "usti hlavne 2"};
        gunEnd[] = {"konec hlavne 1", "konec hlavne 2"};
        memoryPointGun[] = {"usti hlavne 1", "usti hlavne 2"};

        memorypointLRocket = "rocketl";
        memorypointRRocket = "rocketr";
        memorypointLmissile = "rocketl";
        memorypointRmissile = "rocketR";

        memorypointcm[] = {
            "flare_launcher1",
            "flare_launcher2"
        };

        memorypointcmdir[] = {
            "flare_launcher1_dir",
            "flare_launcher2_dir"
        };

        #include "cfg\Sounds.hpp"

        // EMPTY CLASSES
        class Turrets {};
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
        // VISUAL EFFECT CLASSES
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
                convexComponent = "engine_hit";
                name = "engine_hit";
                hitpoint = "engine_hit";
                material = 51;
                armor = 0.5;
                explosionShielding = 2;
                passThrough = 1;
                radius = 0.2;
                visual = "";
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

            class HitHRotor {
                armor = 3;
                convexComponent = "main_rotor_hit";
                explosionShielding = 2.5;
                material = 51;
                name = "main_rotor_hit";
                passThrough = 0.1;
                visual = "";
                radius = 0.01;
            };

            class HitVRotor {
                armor = 3;
                convexComponent = "tail_rotor_hit";
                explosionShielding = 6;
                material = 51;
                name = "tail_rotor_hit";
                passThrough = 0.3;
                visual = "";
                radius = 0.01;
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

        class PilotCamera {
            minTurn = -180;
            maxTurn = 180;
            initTurn = 180;
            minElev = -10;
            maxElev = 90;
            initElev = -10;
            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;
            pilotOpticsShowCursor = 1;
            controllable = 1;
            ace_missileguidance_usePilotCameraForTargeting = 0;

            class OpticsIn {
                showMiniMapInOptics = 1; // Allows you to keep your minimap open while in camera view
                showUAVViewInOptics = 0; // Does not allow you to keep your Pilot Camera PIP open when switching to the Pilot Camera view
                showSlingLoadManagerInOptics = 0; // Allows you to keep your SlingLoadAssistant open while in Pilot Camera view, aka when you point it down, you can still use it to help you with sling-loading.

                // Default View, all further views are zoomed in versions. Most of this has been copied from vanilla
                class Wide {
                    opticsDisplayName = "WFOV";
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
                    thermalMode[] = {0, 1};
                    visionMode[] = {"Normal", "NVG", "Ti"};
                    gunnerOpticsModel = "A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
                };
                class Medium: Wide {
                    opticsDisplayName = "MFOV";
                    initFov = 14.4 / 120;
                    minFov = 14.4 / 120;
                    maxFov = 14.4 / 120;
                    gunnerOpticsModel = "A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide {
                    opticsDisplayName = "NFOV";
                    initFov = 4.8 / 120;
                    minFov = 4.8 / 120;
                    maxFov = 4.8 / 120;
                    gunnerOpticsModel = "A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
        };

        class ViewPilot: ViewPilot {
            initFov = 0.75;
            minFov = 0.375;
            maxFov = 1.1;
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

        // class Reflectors {
        //     class Left {
        //         color[] = {7000, 7500, 10000};
        //         ambient[] = {70, 75, 100};
        //         intensity = 50;
        //         size = 1;
        //         innerAngle = 15;
        //         outerAngle = 65;
        //         coneFadeCoef = 10;
        //         useFlare = 1;
        //         flareSize = 10;
        //         flareMaxDistance = 250;
        //         dayLight = 1;

        //         class Attenuation {
        //             start = 0;
        //             constant = 0;
        //             linear = 1;
        //             quadratic = 1;
        //             hardLimitStart = 100;
        //             hardLimitEnd = 200;
        //         };
        //         position = "light_l";
        //         direction = "light_l_end";
        //         hitpoint = "light_l";
        //         selection = "light_l";
        //     };

        //     class Right: Left {
        //         position = "light_r";
        //         direction = "light_r_end";
        //         hitpoint = "light_r";
        //         selection = "light_r";
        //     };

        // };

        class EjectionSystem {
            EjectionSeatEnabled = 1;
            EjectionDual = 0;
            EjectionSeatClass = "B_Ejection_Seat_Plane_Fighter_01_F";
            CanopyClass = "Plane_Fighter_01_Canopy_F";
            EjectionSeatHideAnim = "ejection_seat_hide";
            EjectionSeatRailAnim = "ejection_seat_motion";
            CanopyHideAnim = "canopy_hide";
            EjectionSeatPos = "pos_eject";
            CanopyPos = "pos_eject_canopy";
            EjectionSoundExt = "Plane_Fighter_01_ejection_ext_sound";
            EjectionSoundInt = "Plane_Fighter_01_ejection_in_sound";
            EjectionParachute = "Steerable_Parachute_F";
            EjectionSeatForce = 50;
            CanopyForce = 30;
        };

        class AnimationSources {
            class canopy_hide {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };

            class ejection_seat_hide {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };

            class ejection_seat_motion {
                source = "user";
                animPeriod = 0.25;
                initPhase = 0;
            };

        };

        class VehicleTransport {
            class Carrier {
                cargoBayDimensions[] = {"ViV_limit_1", "ViV_limit_2"};
                disableHeightLimit = 1;
                maxLoadMass = 5000000;
                cargoAlignment[] = {"Back", "Center"};
                cargoSpacing[] = {0.05, 0.15, 0.05};
                exits[] = {"ViV_exit"};
                unloadingInterval = 2;
                loadingDistance = 2;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 150;
            };
        };

        class UserActions {
            class EGVAR(impulsor,impulse) {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;
                onlyforplayer = 0;
                condition = QUOTE(ls_player == currentPilot this and {this call EFUNC(impulsor,canImpulse)});
                statement = QUOTE([ARR_2(this,1)] call EFUNC(impulsor,impulse));
            };

            class EGVAR(impulsor,repulse): EGVAR(impulsor,impulse) {
                displayName = "Repulse";
                statement = QUOTE([ARR_2(this,-1)] call EFUNC(impulsor,impulse));
            };

            class loadVehicle {
                displayName = "$STR_A3_ACTION_LOAD_VEHICLE";
                position = "pilotcontrol";
                radius = 5;
                onlyForPlayer = 0;
                condition = QUOTE([ARR_2(this,ls_player)] call EFUNC(common,isPilot) and { this call FUNC(vivCanLoad) });
                statement = QUOTE(this call FUNC(vivLoad));
            };

            class Plane_Fighter_01_Eject {
                priority = 0.05;
                shortcut = "Eject";
                displayName = "$STR_A3_action_eject";
                condition = "player in this";
                statement = "[this] spawn BIS_fnc_planeEjection";
                position = "pilotcontrol";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
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

        class Components {
            class TransportCountermeasuresComponent {};

            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSenorComponent {
                        aimDown = 30;
                        allowsMarking = 1;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 90;
                        animDirection = "";
                        color[] = {0, 1, 1, 1};
                        componentType = "ActiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 125;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 3000;

                        class AirTarget {
                            maxRange = 5000;
                            minRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };

                        class GroundTarget {
                            maxRange = 5000;
                            minRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };

                    class AntiRadiationSensorComponent {
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 90;
                        animDirection = "";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "PassiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 12000;

                        class AirTarget {
                            maxRange = 8000;
                            minRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };

                        class GroundTarget {
                            maxRange = 8000;
                            minRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };

                    class IRSensorComponent {
                        angleRangeHorizontal = 50;
                        angleRangeVertical = 37;
                        maxTrackableSpeed = 100;
                        aimDown = 0;
                        allowsMarking = 1;
                        animDirection = "";
                        color[] = {1, 0, 0, 1};
                        componentType = "IRSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxFogSeeThrough = 0.995;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 2000;

                        class AirTarget {
                            minRange = 500;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };

                        class GroundTarget {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                    };

                    class VisualSensorComponent {
                        angleRangeHorizontal = 50;
                        angleRangeVertical = 37;
                        maxTrackableSpeed = 100;
                        aimDown = 0;
                        animDirection = "";
                        allowsMarking = 1;
                        color[] = {1, 1, 0.5, 0.8};
                        componentType = "VisualSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxFogSeeThrough = 0.94;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        nightRangeCoef = 0;
                        typeRecognitionDistance = 2000;

                        class AirTarget {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };

                        class GroundTarget {
                            minRange = 500;
                            maxRange = 3000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                    };

                    class PassiveRadarSensorComponent {
                        aimDown = 0;
                        allowsMarking = 0;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 360;
                        animDirection = "";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "PassiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 12000;

                        class AirTarget {
                            minRange = 16000;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };

                        class GroundTarget {
                            minRange = 16000;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };

                    class LaserSensorComponent {
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                        animDirection = "";
                        color[] = {1, 1, 1, 0};
                        componentType = "LaserSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 0;

                        class AirTarget {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };

                        class GroundTarget {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };

                    class NVSensorComponent {
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                        animDirection = "";
                        color[] = {1, 1, 1, 0};
                        componentType = "NVSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 0;

                        class AirTarget {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };

                        class GroundTarget {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };
                };
            };

            class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot {
                class Components: Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoAirborneMiniMap";
                    };
                    // class UAVDisplay
                    // {
                    //     componentType = "UAVFeedDisplayComponent";
                    // };
                    // class VehicleDriverDisplay
                    // {
                    //     componentType = "TransportFeedDisplayComponent";
                    //     source = "Driver";
                    // };
                    // class VehicleMissileDisplay
                    // {
                    //     componentType = "TransportFeedDisplayComponent";
                    //     source = "Missile";
                    // };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };

            class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot {
                defaultDisplay = "SensorDisplay";

                class Components: Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };

                    // class MinimapDisplay
                    // {
                    //     componentType = "MinimapDisplayComponent";
                    //     resource = "RscCustomInfoMiniMap";
                    // };

                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };

                    class VehicleDriverDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Driver";
                    };

                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
        };

        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            RTDconfig = "A3\Air_F_Beta\Heli_Transport_02\RTD_Heli_Transport_02.xml";
        };

        #include "\ls\core\addons\common\ui\MFD_Heli.hpp"
    };

    class ls_vehicle_laatc: ls_vehicle_laatc_base {
        scope = 2;
        author = AUTHOR;
    };

    DEPRECATED(lsd_heli_laatc,ls_vehicle_laatc);
};
