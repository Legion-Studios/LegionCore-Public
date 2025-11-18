class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;

class EGVAR(impulsor,base);

class CfgVehicles {
    class Helicopter;
    class Helicopter_Base_F: Helicopter {
        class Turrets;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class Turrets: Turrets {
            class MainTurret;
        };

        class ViewOptics;
        class ViewPilot;
        class HitPoints;
    };

    class ls_vehicle_hmp_base: Helicopter_Base_H {
        scope = 0;
        author = AUTHOR;
        ace_fastroping_enabled = 0;
        ace_cargo_hasCargo = 0;

        class ls_impulsor: EGVAR(impulsor,base) {};

        weapons[] = {
            "ls_weapon_hmp_turret_50mm_he",
            "missiles_DAR",
            "CMFlareLauncher"
        };
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_red",
            "ls_magazine_50mm_200Rnd_HE_red",
            "12rnd_missiles",
            "12rnd_missiles",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine"
        };

        fuelCapacity = 2500;
        fuelConsumptionRate = 0.138;
        side = 0;
        faction = "ls_cis";
        editorSubcategory = "EdSubcat_Helicopters";
        crew = "ls_droid_b1_crew";
        typicalCargo[] = {"ls_droid_b1_crew"};
        icon = QPATHTOF(data\ui\hmp_icon_ca.paa);
        picture = QPATHTOF(data\ui\hmp_icon_side_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_hmp.jpg);
        availableForSupportTypes[] = {"CAS_Heli", "Drop", "Transport"};
        cost = 2000000;
        armor = 100;
        altFullForce = 10000;
        altNoForce = 15000;
        maxSpeed = 500;
        maxFordingDepth = 5;
        incomingMissileDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        LockDetectionSystem = 1 + 2 + 4 + 8 + 16 + 32;
        getInRadius = 5;
        hideWeaponsCargo = 1;
        cargoCanEject = 0;
        isUav = 0;
        unloadInCombat = 0;
        driverOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";

        mainBladeRadius = 0.0;
        liftForceCoef = 3;
        bodyFrictionCoef = 11;
        cyclicAsideForceCoef = 2.5;
        cyclicForwardForceCoef = 1.5;
        backRotorForceCoef = 2;

        unitInfoTypeLite = "RscUnitInfoAirRTDBasic";
        unitInfoTypeRTD = "RscOptics_AV_pilot";

        draconicForceXCoef = 11;
        draconicForceYCoef = 2;
        draconicForceZCoef = 2;
        draconicTorqueXCoef = 0.05;
        draconicTorqueYCoef = 0;

        accuracy = 0.5;
        displayname = "HMP Droid Gunship";
        model = QPATHTOF(ls_vehicle_hmp_gunship.p3d);
        hiddenSelections[] = {
            "body",
            "engine",
            "eyes",
            "head",
            "rockets",
            "seats",
            "wings"
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body_co.paa),
            QPATHTOF(data\engine_co.paa),
            QPATHTOF(data\eyes_co.paa),
            QPATHTOF(data\head_co.paa),
            QPATHTOF(data\missiles_co.paa),
            "",
            QPATHTOF(data\wings_co.paa),
        };

        textureList[] = {
            "Standard", 1,
            "Factory", 0
        };
        class TextureSources {
            class Standard {
                displayname = "Standard";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\body_co.paa),
                    QPATHTOF(data\engine_co.paa),
                    QPATHTOF(data\eyes_co.paa),
                    QPATHTOF(data\head_co.paa),
                    QPATHTOF(data\missiles_co.paa),
                    "",
                    QPATHTOF(data\wings_co.paa),
                };
                factions[] = {};
            };
            class Factory: Standard {
                displayname = "Factory New";
                textures[] = {
                    QPATHTOF(data\textures\factory\body_co.paa),
                    QPATHTOF(data\engine_co.paa),
                    QPATHTOF(data\eyes_co.paa),
                    QPATHTOF(data\textures\factory\head_co.paa),
                    QPATHTOF(data\textures\factory\missiles_co.paa),
                    "",
                    QPATHTOF(data\textures\factory\wings_co.paa),
                };
            };
        };

        driverAction = "apctracked2_slot1_in";
        driverInAction = "apctracked2_slot1_in";
        precisegetinout = 1;
        usePreciseGetInAction = 1;
        GetInAction = "GetInLow";
        GetOutAction = "GetOutLow";
        radarType = 8;
        extCameraPosition[] = {0, 3, -23};
        driverforceoptics = 1;
        driveOnComponent[] = {
            // "Skids"
        };

        memoryPointsGetInDriver = "pos_cargo";
        memoryPointsGetInDriverDir = "pos_cargo_dir";
        memoryPointsGetInCargo = "pos_cargo";
        memoryPointsGetInCargoDir = "pos_cargo_dir";
        memoryPointsGetInGunner = "pos_cargo";
        memoryPointsGetInGunnerDir = "pos_cargo_dir";
        memoryPointsGetInCargoPrecise[] = {"pos_cargo"};
        memoryPointTaskMarker = "TaskMarker_1_pos";
        memoryPointDriverOptics = "driver_view";

        memorypointLRocket = "rocketl";
        memorypointRRocket = "rocketr";
        memorypointLmissile = "rocketl";
        memorypointRmissile = "rocketR";

        memorypointcm[] = {
            "flare_launcher",
            "flare_launcher2"
        };
        memorypointcmdir[] = {
            "flare_launcher_dir",
            "flare_launcher2_dir"
        };

        gunBeg[] = {
            "usti hlavne 1",
            "usti hlavne 2"
        };
        gunEnd[] = {
            "konec hlavne 1",
            "konec hlavne 2"
        };
        memoryPointGun[] = {
            "usti hlavne 1",
            "usti hlavne 2"
        };

        class ViewPilot: ViewPilot {
            minFov = 0.25;
            maxFov = 1.25;
            initFov = 0.75;
            initAngleX = 0;
            minAngleX = -65;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
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
            visionMode[] = {"Normal", "NVG", "TI"};
            thermalMode[] = {0, 1};
        };

        class exhausts {};
        class TransportWeapons {};
        class Transportmagazines {};
        class TransportItems {};
        class TransportBackpacks {};

        class Reflectors {
            class Left {
                color[] = {10000, 7500, 7000};
                ambient[] = {100, 75, 70};
                intensity = 50;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                useFlare = 1;
                flareSize = 10;
                flareMaxDistance = 250;
                dayLight = 0;
                position = "light_l";
                direction = "light_l_end";
                hitpoint = "light_l";
                selection = "light_l";

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 100;
                    hardLimitEnd = 200;
                };
            };
            class Right: Left {
                position = "light_r";
                direction = "light_r_end";
                hitpoint = "light_r";
                selection = "light_r";
            };
        };
        class simpleobject {
            animate[] = {
                {"CollisionLightRed1", 0},
                {"CollisionLightGreen1", 0},
                {"CollisionLightWhite1", 0},
                {"CollisionLightWhite2", 0},
                {"light_l", 0},
                {"light_r", 0}
            };
            hide[] = {"light_l", "light_r"};
            verticaloffset = 0;
            verticaloffsetworld = 0;
        };

        class AnimationSources {
            // class hmp_wing_rotate
            // {
            // source = "user";
            // animPeriod = 2;
            // initphase = 0;
            // };
        };

        class attributes {};
        animationlist[] = {};

        #include "cfg\HitPoints.hpp"

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
                blinkingPattern[] = {0.1, 0.9};
                blinkingPatternGuarantee = 1;
                drawLightSize = 0.35;
                drawLightCenterSize = 0.05;
            };
            class CollisionLightWhite2: CollisionLightWhite1 {
                name = "positionlight_white_2_pos";
            };
        };

        class Components {
            class SensorsManagerComponent {
                class Components {
                    class activeRadarSenorComponent {
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
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class VehicleDriverDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Driver";
                    };
                    class VehicleMissileDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class VehicleDriverDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Driver";
                    };
                    class VehicleMissileDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class TransportCounterMeasuresComponent {};
        };

        #include "cfg\Sounds.hpp"
        #include "cfg\UserActions.hpp"
        #include "cfg\Turrets.hpp"
    };

    class ls_vehicle_hmp: ls_vehicle_hmp_base {
        scope = 2;
        author = AUTHOR;
        displayname = "HMP Droid Gunship";

        class components: components {
            class TransportPylonsComponent {
                uiPicture = QPATHTOF(data\ui\hmp_3den_ca.paa);
                class Pylons {
                    class PylonLeft1 {
                        attachment = "PylonRack_Missile_AMRAAM_D_x1";
                        priority = 5;
                        hardpoints[] = {
                            "SCALPEL_1RND",
                            "B_ASRAAM",
                            "B_AMRAAM_D_DUAL_RAIL",
                            "B_SDB_QUAD_RAIL",
                            "B_GBU12",
                            "B_AGM65_RAIL"
                        };
                        turret[] = {};
                        UIposition[] = {0.42, 0.25};
                    };
                    class PylonRight1: PylonLeft1 {
                        mirroredMissilePos = 1;
                        UIposition[] = {0.42, 0.3};
                    };
                };
                class Presets {
                    class Empty {
                        displayName = "Empty";
                        attachment[] = {};
                    };
                    class Default {
                        displayName = "Default";
                        attachment[] = {
                            "PylonMissile_1Rnd_AAA_missiles",
                            "PylonMissile_1Rnd_AAA_missiles",
                            "PylonRack_12Rnd_PG_missiles",
                            "PylonRack_12Rnd_PG_missiles"
                        };
                    };
                    class AT {
                        displayName = "AT";
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
                        displayName = "CAS";
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
        };
    };

    class ls_vehicle_hmp_transport: ls_vehicle_hmp_base {
        scope = 2;
        author = AUTHOR;
        displayname = "HMP Gunship (Transport)";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_hmp_transport.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body_co.paa),
            QPATHTOF(data\engine_co.paa),
            QPATHTOF(data\eyes_co.paa),
            QPATHTOF(data\head_co.paa),
            QPATHTOF(data\missiles_co.paa),
            QPATHTOF(data\seats_co.paa),
            QPATHTOF(data\wings_co.paa),
        };

        transportSoldier = 10;
        cargoAction[] = {
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
        };
        cargoGetInAction[] = {
            "GetInLow"
        };
        cargoGetOutAction[] = {
            "GetOutLow"
        };
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        class TextureSources: TextureSources {
            class Standard: Standard {
                textures[] = {
                    QPATHTOF(data\body_co.paa),
                    QPATHTOF(data\engine_co.paa),
                    QPATHTOF(data\eyes_co.paa),
                    QPATHTOF(data\head_co.paa),
                    QPATHTOF(data\missiles_co.paa),
                    QPATHTOF(data\seats_co.paa),
                    QPATHTOF(data\wings_co.paa)
                };
            };
            class Factory: Factory {
                textures[] = {
                    QPATHTOF(data\textures\factory\body_co.paa),
                    QPATHTOF(data\engine_co.paa),
                    QPATHTOF(data\eyes_co.paa),
                    QPATHTOF(data\textures\factory\head_co.paa),
                    QPATHTOF(data\textures\factory\missiles_co.paa),
                    QPATHTOF(data\textures\factory\seats_co.paa),
                    QPATHTOF(data\textures\factory\wings_co.paa)
                };
            };
        };
    };

    class ls_wreck_base;
    class ls_vehicle_hmp_wreck: ls_wreck_base {
        scope = 2;
        author = AUTHOR;
        displayname = "HMP Gunship";
        model = QPATHTOF(ls_vehicle_hmp_gunship_wreck.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_hmp_wreck.jpg);
    };
};
