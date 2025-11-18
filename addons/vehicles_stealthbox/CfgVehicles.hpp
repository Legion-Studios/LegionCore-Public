class CfgVehicles {
    class Car;
    class Car_F: Car {
        class HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };
        class AnimationSources;
    };

    class ls_vehicle_stealthbox_base: Car_F {
        scope = 0;
        author = AUTHOR;

        displayName = "Stealth Box";
        editorSubcategory = "ls_edsubcat_vehicles";

        model = QPATHTOF(ls_vehicle_stealthBox.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\camo1_co.paa)};
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_stealthbox.jpg);
        picture = QPATHTOF(data\ui\stealthBox_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\stealthBox_icon_ca.paa);

        side = 2;
        faction = "ls_memefor";
        crew = "I_crew_F";

        weapons[] = {};
        magazines[] = {};

        canFloat = 0;
        waterLeakiness = 2.5;
        waterPPInVehicle = 1;
        waterAngularDampingCoef = 0.5;
        waterResistanceCoef = 0.005;
        waterSpeedFactor = 1;
        waterSpeedCoef = 0;
        accelAidForceCoef = 1;
        accelAidForceSpd = 1;
        waterLinearDampingCoefY = 10;

        terrainCoef = 2.0;
        turnCoef = 2.5;
        precision = 10;
        brakeDistance = 3.0;
        acceleration = 15;

        fireResistance = 5;
        armor = 120;
        cost = 50000;

        transportMaxBackpacks = 3;
        transportSoldier = 0;

        wheelDamageRadiusCoef = 0.9;
        wheelDestroyRadiusCoef = 0.4;
        maxFordingDepth = 0.5;
        waterResistance = 1;
        crewCrashProtection = 0.25;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";

        class AnimationSources: AnimationSources {
            class Doors {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class Door_1 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Door_2 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Door_3 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Door_4 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Door_5 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        class TransportItems {};
        class Turrets {};

        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                armor = 0.125;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                armor = 0.125;
                passThrough = 0;
            };

            class HitRFWheel: HitRFWheel {
                armor = 0.125;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                armor = 0.125;
                passThrough = 0;
            };

            class HitFuel {
                armor = 0.50;
                material = -1;
                name = "fueltank";
                visual = "";
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.50;
                material = -1;
                name = "engine";
                visual = "";
                passThrough = 0.2;
            };
            class HitBody: HitBody {
                name = "body";
                visual = "camo1";
                passThrough = 1;
            };

            class HitGlass1: HitGlass1 {
                armor = 0.25;
            };
            class HitGlass2: HitGlass2 {
                armor = 0.25;
            };
            class HitGlass3: HitGlass3 {
                armor = 0.25;
            };
            class HitGlass4: HitGlass4 {
                armor = 0.25;
            };
        };

        driverAction = "crew_tank01_in";
        camouflage = 0;
        threat[] = {0.1, 0.1, 0.1};
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";

        #include "cfg\Sounds.hpp"
        #include "cfg\PhysX.hpp"

        class PlayerSteeringCoefficients {
            turnIncreaseConst = 2;
            turnIncreaseLinear = 3;
            turnIncreaseTime = 0;

            turnDecreaseConst = 2.0;
            turnDecreaseLinear = 8.0;
            turnDecreaseTime = 0.0;

            maxTurnHundred = 1;
        };

        memoryPointTrackFLL = "TrackFLL";
        memoryPointTrackFLR = "TrackFLR";
        memoryPointTrackBLL = "TrackBLL";
        memoryPointTrackBLR = "TrackBLR";
        memoryPointTrackFRL = "TrackFRL";
        memoryPointTrackFRR = "TrackFRR";
        memoryPointTrackBRL = "TrackBRL";
        memoryPointTrackBRR = "TrackBRR";
        memoryPointGun[] = {};

        class Damage {
            tex[] = {};
            mat[] = {
                "A3\data_f\glass_veh_int.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat",

                "A3\data_f\glass_veh.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat"
            };
        };

        class Exhausts {
            class Exhaust1 {
                position = "exhaust1";
                direction = "exhaust1_dir";
                effect = "ExhaustsEffect";
            };
        };

        class Reflectors {};

        aggregateReflectors[] = {
            {"LightCarHeadL01", "LightCarHeadL02"},
            {"LightCarHeadR01", "LightCarHeadR02"}
        };
    };

    class ls_vehicle_stealthbox: ls_vehicle_stealthbox_base {
        scope = 2;
        author = AUTHOR;

        class UserActions {
            class Sneak {
                displayName = "Sneak";
                onlyForPlayer = 1;
                condition = "alive this";
                radius = 5;
                position = "pilotview";
                statement = QUOTE([ARR_2(this,'ls_stealthBox_sneak')] call EFUNC(common,say3D));
            };
        };

        class TextureSources {
            class Standard {
                displayname = "Standard";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\camo1_co.paa)
                };
                factions[] = {};
            };
        };
    };
};
