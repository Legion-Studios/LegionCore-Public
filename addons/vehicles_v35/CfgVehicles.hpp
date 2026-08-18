class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class Components;
    };
    class Car_F: Car {
        class HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitEngine;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };
        class CargoTurret;
        class Components: Components {
            class AICarSteeringComponent;
        };
        class AnimationSources;
        class EventHandlers;
    };
    class ls_vehicle_v35_base: Car_F {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(courier_displayName);

        model = QPATHTOF(ls_vehicle_v35.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa),
            QPATHTOF(data\camo2_co.paa),
            QPATHTOF(data\camo3_co.paa)
        };
        icon = QPATHTOF(data\ui\v35_icon_ca.paa);
        picture = QPATHTOF(data\ui\v35_icon_side_ca.paa);

        side = CIVILIAN;
        faction = "ls_civilians";
        editorSubcategory = "ls_edsubcat_speeders";
        weapons[] = {"CarHorn"};
        magazines[] = {};

        // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_v35.jpg);

        crew = "ls_civilian_randomSpecies_polo1";
        typicalCargo[] = {"ls_civilian_randomSpecies_polo1"};

        // PASSENGER COUNT
        transportSoldier = 1;
        showNVGCargo[] = {1};
        PILOT_CARGO_SPEC(0);

        memoryPointGun[] = {};
        hideWeaponsCargo = 1;
        // WATER THINGS
        canFloat = 1;
        waterLeakiness = 2.5;   // Deterimines the amount of water in liters that goes into the vehicle
        waterPPInVehicle = 0;   // Affects if passengers see water in their compartment
        waterAngularDampingCoef = 0.5;
        waterResistanceCoef = 0.005;
        waterSpeedFactor = 1;
        waterSpeedCoef = 3;
        accelAidForceCoef = 14;
        accelAidForceSpd = 28;
        accelAidForceYOffset = -1;
        waterLinearDampingCoefY = 10;
        // engineShiftY= -1;
        terrainCoef = 2.0;
        turnCoef = 2.6;
        precision = 10;
        brakeDistance = 3.0;
        acceleration = 15;

        driverAction = "driver_low01";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        //CONDITIONAL SEAT CODE
        cargoAction[] = {
            "passenger_low01",
            "passenger_flatground_leanleft",
            "passenger_flatground_crosslegs",
            "passenger_flatground_crosslegs",
            "passenger_flatground_crosslegs",
            "passenger_flatground_crosslegs",
            "passenger_flatground_crosslegs"
        };
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        driverCompartments = "Compartment1";
        cargoCompartments[]= {
            "Compartment1",
            "Compartment2",
            "Compartment2",
            "Compartment2",
            "Compartment2"
        };

        class Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_flatground_3";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R2";
                gunnerCompartments = "Compartment2";
                proxyIndex = 2;
                isPersonTurret = 1;
                canHideGunner = 0;
                allowLauncherIn = 0;
                allowLauncherOut = 0;
                inGunnerMayFire = 1;

                TURRET_SPEC(1);

                class TurnIn {
                    limitsArrayTop[]= {
                        {33.820801, -93.961601},
                        {40.890598, 66.570503}
                    };
                    limitsArrayBottom[]= {
                        {-9.4643002, -94.575302},
                        {-8.3683004, -67.686699},
                        {-9.7173004, 43.637199},
                        {-10.1082, 78.916603}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_02[] = {-65, 75};
                };
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerAction = "passenger_flatground_2";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L2";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                inGunnerMayFire = 1;
                proxyIndex = 3;
                class TurnIn {
                    limitsArrayTop[]= {
                        {37.1488, -71.900299},
                        {36.4967, 92.275703}
                    };
                    limitsArrayBottom[]= {
                        {-22.183201, -70.0989},
                        {-13.9068, -22.810699},
                        {-7.1236, 75.684898},
                        {-7.8564, 102.5826}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_01[] = {-75, 65};
                };
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R1";
                memoryPointsGetInGunner = "pos cargo RF";
                memoryPointsGetInGunnerDir = "pos cargo RF dir";
                proxyIndex = 4;
                forceHideGunner = 0;
                canHideGunner = 1;
                isPersonTurret = 2;
                LODTurnedIn = 1200;
                LODTurnedOut = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                animationSourceHatch = "gunner_rf_turn";
                allowLauncherIn = 0;
                allowLauncherOut = 1;
                class TurnIn {
                    limitsArrayTop[]= {
                        {44.089901, 0.4614}
                    };
                    limitsArrayBottom[]= {
                        {-5.6160998, -103.2468},
                        {-6.3358998, -86.666603},
                        {-4.5173001, -52.222401},
                        {-2.1726999, -26.9412},
                        {-2.7195001, 17.171101},
                        {-8.6473999, 52.254501},
                        {-9.5586996, 116.7031}
                    };
                    turnOffset = -270;
                };
                class TurnOut: TurnIn {
                    limitsArrayTop[]= {
                        {38.5373, -12.3438}
                    };
                    limitsArrayBottom[]= {
                        {-55.813202, -78.700996},
                        {-55.695, -42.974899},
                        {-20.534901, -8.1766005},
                        {-18.5114, 7.3281999},
                        {-19.9175, 18.901199},
                        {-20.0625, 26.805099},
                        {-19.9485, 37.776798},
                        {-34.081501, 67.225403},
                        {-48.6922, 80.034798},
                        {-47.633099, 90.4505}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_01[] = {5, 75};
                    CargoTurret_02[] = {-15, 75};
                    CargoTurret_04[] = {-75, 75};
                };
            };
            class CargoTurret_04: CargoTurret_03 {
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L1";
                memoryPointsGetInGunner = "pos cargo LF";
                memoryPointsGetInGunnerDir = "pos cargo LF dir";
                proxyIndex = 5;
                animationSourceHatch = "gunner_lf_turn";
                allowLauncherIn = 0;
                allowLauncherOut = 1;
                class TurnIn {
                    limitsArrayTop[]= {
                        {32.724899, -3.3246}
                    };
                    limitsArrayBottom[]= {
                        {-13.8937, -116.0915},
                        {-15.9318, -73.923203},
                        {-7.7740998, -33.610401},
                        {-2.2081001, -11.6789},
                        {-2.175, 33.696899},
                        {-4.7947998, 64.996803},
                        {-6.1245999, 108.4244}
                    };
                    turnOffset = -270;
                };
                class TurnOut: TurnIn {
                    limitsArrayTop[]= {
                        {60.203899, -100.4401}
                    };
                    limitsArrayBottom[]= {
                        {-39.821899, -73.344398},
                        {-35.159698, -60.962002},
                        {-28.0802, -54.4944},
                        {-18.1518, -30.9259},
                        {-20.7152, 12.1939},
                        {-36.766602, 33.6105},
                        {-39.774799, 75.873199}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_01[] = {-75, 15};
                    CargoTurret_02[] = {-75, -5};
                    CargoTurret_03[] = {-75, 75};
                };
            };
            class CargoTurret_05: CargoTurret_01 {
                gunnerAction = "passenger_flatground_2";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L3";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                proxyIndex = 6;
                class TurnIn {
                    limitsArrayTop[]= {
                        {37.1488, -71.900299},
                        {36.4967, 92.275703}
                    };
                    limitsArrayBottom[]= {
                        {-22.183201, -70.0989},
                        {-13.9068, -22.810699},
                        {-7.1236, 75.684898},
                        {-7.8564, 102.5826}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_01[] = {-75, 65};
                };
            };
            class CargoTurret_06: CargoTurret_01 {
                gunnerAction = "passenger_flatground_2";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L3";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                proxyIndex = 7;
                class TurnIn {
                    limitsArrayTop[]= {
                        {37.1488, -71.900299},
                        {36.4967, 92.275703}
                    };
                    limitsArrayBottom[]= {
                        {-22.183201, -70.0989},
                        {-13.9068, -22.810699},
                        {-7.1236, 75.684898},
                        {-7.8564, 102.5826}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_01[] = {-75, 65};
                };
            };
        };

        #include "cfg\HitPoints.hpp"
        #include "cfg\Exhausts.hpp"
        #include "cfg\Sounds.hpp"
        #include "cfg\PhysX.hpp"

        // For vehicle randomization
        class EventHandlers: EventHandlers {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
        };

        class Reflectors {
            class Left {
                color[] = {1.9, 1.8, 1.7};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 30;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 100;
                useFlare = 1;
                dayLight = 0;
                flareSize = 1;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.050000001;
                    hardLimitStart = 50;
                    hardLimitEnd = 80;
                };
            };
            class Right: Left {
                position = "Light_R";
                direction = "Light_R_end";
                hitpoint = "Light_R";
                selection = "Light_R";
            };
        };
        aggregateReflectors[] = {{"Left", "Right"}};

        textureList[] = {
            "Yellow", 1,
            "Red", 1,
            "Grey", 1
        };
        class TextureSources {
            class Yellow {
                author = AUTHOR;
                displayName = "$STR_A3_textureSources_yellow0";
                textures[] = {
                    QPATHTOF(data\camo1_co.paa),
                    QPATHTOF(data\camo2_co.paa),
                    QPATHTOF(data\camo3_co.paa)
                };
                factions[] = {};
            };
            class Red: Yellow {
                author = AUTHOR;
                displayName = "$STR_A3_textureSources_red0";
                textures[] = {
                    QPATHTOF(data\red_camo1_co.paa),
                    QPATHTOF(data\red_camo2_co.paa),
                    QPATHTOF(data\red_camo3_co.paa)
                };
            };
            class Grey: Yellow {
                author = AUTHOR;
                displayName = "$STR_A3_textureSources_grey0";
                textures[] = {
                    QPATHTOF(data\grey_camo1_co.paa),
                    QPATHTOF(data\grey_camo2_co.paa),
                    QPATHTOF(data\grey_camo3_co.paa)
                };
            };
        };

        animationList[] = {"v35_top_hide", 0};
        class AnimationSources: AnimationSources {
            class v35_top_hide {
                author = AUTHOR;
                displayName = ECSTRING(vehicles,showHatchback);
                source = "user";
                animPeriod = 0.001;
                onPhaseChanged = QUOTE([ARR_3(_this select 0,'v35_top_hide',[ARR_5(2,4,5,6,7)])] call FUNC(conditionalSeats));
                initPhase = 0;
            };
        };

        class Attributes {
            class v35_top_hide {
                displayName = ECSTRING(vehicles,showHatchback);
                property = "v35_top_hide";
                control = "CheckboxNumber";
                defaultValue = 0;
                expression = QUOTE(_this animateSource [ARR_3('%s',_value,true)]; [ARR_3(_this,'%s',[ARR_5(2,4,5,6,7)])] call FUNC(conditionalSeats));
            };
        };

        class PlayerSteeringCoefficients {
            turnIncreaseConst = 1;
            turnIncreaseLinear = 3;
            turnIncreaseTime = 0;
            turnDecreaseConst = 2;
            turnDecreaseLinear = 8;
            turnDecreaseTime = 0;
            maxTurnHundred = 1;
        };

        class Components: Components {
            class AICarSteeringComponent: AICarSteeringComponent {
                steeringPIDWeights[] = {8.5, 0.003, 0.4};
                maxWheelAngleDiff = 0.1;
                forwardAngleCoef = 4;
            };
        };
        #include "cfg\MFD.hpp"

        class RenderTargets {
            class ReverseCamera {
                renderTarget = "rendertarget0";

                class CameraView1 {
                    pointPosition = "pip_screen_pos";
                    pointDirection = "pip_screen_dir";
                    renderQuality = 2;
                    renderVisionMode = 0;
                    fov = 1;
                };
            };
        };
    };
    class ls_vehicle_v35: ls_vehicle_v35_base {
        scope = 2;
        author = AUTHOR;

        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_v35.jpg);
    };

    class ls_wreck_base;
    class ls_vehicle_v35_wreck: ls_wreck_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(courier_displayName);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_v35_wreck.jpg);
        model = QPATHTOF(ls_vehicle_v35_wreck.p3d);
    };
};
