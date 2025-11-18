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
    class ls_vehicle_barc_base: Car_F {
        scope = 0;
        displayName = "BARC Speeder";
        model = QPATHTOF(ls_vehicle_barc.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_barc.jpg);
        icon = QPATHTOF(data\ui\barc_icon_ca.paa);
        picture = QPATHTOF(data\ui\barc_icon_side_ca.paa);
        editorSubcategory = "ls_edsubcat_speeders";
        selectionBrakeLights = "brzdove svetlo";
        selectionBrackLights = "zadni svetlo";
        weapons[] = {
            "ls_speeder_AP"
        };
        magazines[] = {
            "ls_magazine_speederHE_belt",
            "ls_magazine_speederHE_belt",
            "ls_magazine_speederHE_belt"
        };
        memoryPointGun[] = {
            "gun_driver_l",
            "gun_driver_r"
        };
        hiddenSelections[] = {
            "body",
            "weapons",
            "dashboard"
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body_co.paa),
            QPATHTOF(data\weapons_co.paa),
            QPATHTOF(data\dashboard_co.paa)
        };
        canFloat = 1;
        waterLeakiness = 2.5;   // Deterimines the amount of water in liters that goes into the vehicle
        waterPPInVehicle = 0;   // Affects if passengers see water in their compartment
        waterAngularDampingCoef = 0.5;
        waterResistanceCoef = 0.005;
        waterSpeedFactor = 1;
        waterSpeedCoef = 3;
        accelAidForceCoef = 30;
        accelAidForceSpd = 20;
        waterLinearDampingCoefY = 10;
        // engineShiftY= -1;
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

        // some values from parent class to show how to set them up
        wheelDamageRadiusCoef = 0.9;    // for precision tweaking of damaged wheel size
        wheelDestroyRadiusCoef = 0.4;   // for tweaking of rims size to fit ground
        maxFordingDepth = 0.5;   // how high water would damage the engine of the car
        waterResistance = 1;   // if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
        crewCrashProtection = 0.25;   // multiplier of damage to crew of the vehicle => low number means better protection
        driverLeftHandAnimName = "drivewheel"; // according to what bone in model of car does hand move
        driverRightHandAnimName = "drivewheel"; // beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

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
        // some first aid kits in trunk according to safety regulations
        class TransportItems {
            // item_xx(FirstAidKit,4);
        };

        class Turrets {};

        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                armor = 300;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                armor = 300;
                passThrough = 0;
            };

            class HitRFWheel: HitRFWheel {
                armor = 300;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                armor = 300;
                passThrough = 0;
            };

            class HitFuel {
                armor = 0.50;
                material=-1;
                name = "fueltank";
                visual = "";
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.50;
                material=-1;
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
            }; // it is pretty easy to puncture the glass but not so easy to remove it
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

        driverAction = "ls_driver_barc";   //driver_low01; // what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible

        getInAction = "GetInLow";   // how does driver look while getting in
        getOutAction = "GetOutLow";   // and out
        // cargoGetInAction[] = {"GetInLow"};  // and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
        // cargoGetOutAction[] = {"GetOutLow"};  // that means all use the same in this case

        #include "cfg\Sounds.hpp"
        #include "cfg\PhysX.hpp"

        class PlayerSteeringCoefficients {
            turnIncreaseConst = 2; // basic sensitivity value, higher value = faster steering
            turnIncreaseLinear = 3; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
            turnIncreaseTime = 0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

            turnDecreaseConst = 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
            turnDecreaseLinear = 8.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
            turnDecreaseTime = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

            maxTurnHundred = 1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
        };

        // memory points where do tracks of the wheel appear
        // front left track, left offset
        memoryPointTrackFLL = "TrackFLL";
        // front left track, right offset
        memoryPointTrackFLR = "TrackFLR";
        // back left track, left offset
        memoryPointTrackBLL = "TrackBLL";
        // back left track, right offset
        memoryPointTrackBLR = "TrackBLR";
        // front right track, left offset
        memoryPointTrackFRL = "TrackFRL";
        // front right track, right offset
        memoryPointTrackFRR = "TrackFRR";
        // back right track, left offset
        memoryPointTrackBRL = "TrackBRL";
        // back right track, right offset
        memoryPointTrackBRR = "TrackBRR";

        // damage changes material in specific places (visual in hitPoint)
        class Damage {
            tex[] = {};
            mat[] = {
                "A3\data_f\glass_veh_int.rvmat",   // material mapped in model
                "A3\data_f\Glass_veh_damage.rvmat",  // changes to this one once damage of the part reaches 0.5
                "A3\data_f\Glass_veh_damage.rvmat",  // changes to this one once damage of the part reaches 1

                "A3\data_f\glass_veh.rvmat",   // another material
                "A3\data_f\Glass_veh_damage.rvmat",  // changes into different ones
                "A3\data_f\Glass_veh_damage.rvmat"
            };
        };
        // specific exhaust effects for the car
        class Exhausts {
            // the car has two exhausts - each on one side
            class Exhaust1 {
                position = "exhaust1";    // name of initial memory point
                direction = "exhaust1_dir"; // name of memory point for exhaust direction
                effect = "ExhaustsEffect"; // what particle effect is it going to use
            };
        };

        // only front lights are considered to be reflectors to save CPU
        class Reflectors {
            // lights on each side consist of two bulbs with different flares
            class LightCarHeadL01 {
                color[] = {1000, 1200, 1700};   // approximate colour of standard lights
                ambient[] = {5, 5, 5};          // nearly a white one
                position = "headlight1_r";      // memory point for start of the light and flare
                direction = "headlight1_r_dir"; // memory point for the light direction
                hitpoint = "Light_L";           // point(s) in hitpoint lod for the light (hitPoints are created by engine)
                selection = "Light_L";          // selection for artificial glow around the bulb, not much used any more
                size = 1;                       // size of the light point seen from distance
                innerAngle = 100;               // angle of full light
                outerAngle = 179;               // angle of some light
                coneFadeCoef = 10;              // attenuation of light between the above angles
                intensity = 1;                  // strength of the light
                useFlare = 1;                   // does the light use flare?
                dayLight = 0;                   // switching light off during day saves CPU a lot
                flareSize = 1.0;                // how big is the flare

                class Attenuation {
                    start = 1.0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };

            };

            class LightCarHeadL02: LightCarHeadL01 {
                position = "headlight2_r";
                direction = "headlight2_r_dir";
                FlareSize = 0.5;
            };

            class LightCarHeadR01: LightCarHeadL01 {
                position = "headlight1_l";
                direction = "headlight1_l_dir";
                hitpoint = "Light_R";
                selection = "Light_R";
            };

            class LightCarHeadR02: LightCarHeadR01 {
                position = "headlight2_l";
                direction = "headlight2_l_dir";
                FlareSize = 0.5;
            };
        };

        aggregateReflectors[] = {
            {"LightCarHeadL01", "LightCarHeadL02"},
            {"LightCarHeadR01", "LightCarHeadR02"}
        };
        class UserActions {};

        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 50;
                canBeTransported = 1;
                dimensions[] = {
                    "BBox_1_1_pos",
                    "BBox_1_2_pos"
                };
            };
        };
    };


    class ls_vehicle_barc: ls_vehicle_barc_base {
        scope = 2;
        side = 1;
        faction = "ls_gar";
        crew = "ls_clone_phase2_rifleman";
        typicalCargo[] = {"ls_clone_phase2_rifleman"};
    };


    class ls_vehicle_barc_civ: ls_vehicle_barc_base {
        scope = 2;
        side = 3;
        faction = "ls_civilians";
        crew = "ls_civilian_randomSpecies_polo1";
        typicalCargo[] = {"ls_civilian_randomSpecies_polo1"};

        weapons[] = {"CarHorn"};
        magazines[] = {};
    };

    DEPRECATED(ls_ground_barc,ls_vehicle_barc);
    DEPRECATED(ls_civ_barc,ls_vehicle_barc_civ);
};
