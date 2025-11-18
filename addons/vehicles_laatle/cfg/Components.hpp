class Components {
    class SensorsManagerComponent {
        class TransportCounterMeasuresComponent {};

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
                resource = "RscCustomInfoAirborneMiniMap";
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

    // PYLONS
    class TransportPylonsComponent {
        uiPicture = QPATHTOF(data\ui\laatle_3den_ca.paa);
        class Pylons {
            class PylonLeft1 {
                attachment = "PylonRack_Missile_AMRAAM_D_x1";
                priority = 5;
                hardpoints[] = {
                    "SCALPEL_1RND",
                    "B_ASRAAM",
                    "DAR",
                    "DAGR",
                    "B_AMRAAM_D_DUAL_RAIL",
                    "B_SDB_QUAD_RAIL",
                    "B_GBU12",
                    "B_AGM65_RAIL"
                };
                turret[] = {0};
                uiPosition[] = {0.06, 0.4};
            };

            class PylonLeft2: PylonLeft1 {
                attachment = "PylonRack_Missile_AMRAAM_D_x1";
                priority = 4;
                hardpoints[] = {
                    "SCALPEL_1RND",
                    "B_ASRAAM",
                    "DAR",
                    "DAGR",
                    "B_AMRAAM_D_DUAL_RAIL",
                    "B_SDB_QUAD_RAIL",
                    "B_GBU12",
                    "B_AGM65_RAIL"
                };
                uiPosition[] = {0.08, 0.35};
            };

            class PylonLeft3: PylonLeft1 {
                attachment = "PylonRack_Missile_AMRAAM_D_x1";
                priority = 3;
                hardpoints[] = {
                    "SCALPEL_1RND",
                    "B_ASRAAM",
                    "DAR",
                    "DAGR",
                    "B_AMRAAM_D_DUAL_RAIL",
                    "B_SDB_QUAD_RAIL",
                    "B_GBU12",
                    "B_AGM65_RAIL"
                };
                uiPosition[] = {0.1, 0.3};
            };

            class PylonRight3: PylonLeft3 {
                mirroredMissilePos = 3;
                uiPosition[] = {0.59, 0.3};
            };

            class PylonRight2: PylonLeft2 {
                mirroredMissilePos = 2;
                uiPosition[] = {0.62, 0.35};
            };

            class PylonRight1: PylonLeft1 {
                mirroredMissilePos = 1;
                uiPosition[] = {0.64, 0.4};
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
                    "PylonRack_12Rnd_PG_missiles",
                    "PylonMissile_1Rnd_AAA_missiles",
                    "PylonMissile_1Rnd_AAA_missiles"
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
