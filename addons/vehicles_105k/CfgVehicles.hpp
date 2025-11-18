class CfgVehicles {
    class Car;
    class Car_F: Car {
        class HitPoints {
            class HitBody;

            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;

            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };
    };
    class ls_vehicle_105kLancer_base: Car_F {
        scope = 0;
        author = AUTHOR;
        displayName = "105-K Lancer Bike";

        model = QPATHTOF(ls_vehicle_105kLancer.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_105kLancer.jpg);
        icon = QPATHTOF(data\ui\105k_icon_ca.paa);
        picture = QPATHTOF(data\ui\105k_icon_side_ca.paa);

        editorSubcategory = "ls_edsubcat_speeders";

        selectionBrakeLights = "brzdove svetlo";
        selectionBrackLights = "zadni svetlo";

        weapons[] = {"CarHorn"};
        magazines[] = {};
        memoryPointGun[] = {};
        extCameraParams[] = {0.5, 10, 125, 1, 0.2, 1, 5, 1, 0};
        extCameraPosition[] = {0.5, 1, -5};

        hiddenSelections[] = {
            "engine",
            "hull",
            "seat",
            "steering"
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\engine_co.paa),
            QPATHTOF(data\hull_co.paa),
            QPATHTOF(data\seat_co.paa),
            QPATHTOF(data\steering_co.paa)
        };

        fireResistance = 5;  // lesser protection against fire than tanks
        armor = 120;         // just some protection against missiles, collisions and explosions
        cost = 50000;        // how likely is the enemy going to target this vehicle

        transportMaxBackpacks = 3;
        transportSoldier = 0;

        wheelDamageRadiusCoef = 0.9;   // for precision tweaking of damaged wheel size
        wheelDestroyRadiusCoef = 0.4;  // for tweaking of rims size to fit ground
        maxFordingDepth = 0.5;         // how high water would damage the engine of the car
        crewCrashProtection = 0.25;              // multiplier of damage to crew of the vehicle => low number means better protection
        driverLeftHandAnimName = "drivewheel";   // according to what bone in model of car does hand move
        driverRightHandAnimName = "drivewheel";  // beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

        class TransportItems {
            ITEM_XX(FirstAidKit,4);
        };

        class Turrets {};

        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 50;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };

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

        driverAction = "ls_driver_105kLancer";

        getInAction = "GetInLow";
        getOutAction = "GetOutLow";

        #include "cfg/Sounds.hpp"
        #include "cfg/PhysX.hpp"

        class PlayerSteeringCoefficients {
            turnIncreaseConst = 2;  // basic sensitivity value, higher value = faster steering
            turnIncreaseLinear = 3; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
            turnIncreaseTime = 0;  // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

            turnDecreaseConst = 2.0;  // basic caster effect value, higher value = the faster the wheels align in the direction of travel
            turnDecreaseLinear = 8.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
            turnDecreaseTime = 0.0;   // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

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

        class Damage {
            tex[] = {};
            mat[] = {
                "A3\data_f\glass_veh_int.rvmat",    // material mapped in model
                "A3\data_f\Glass_veh_damage.rvmat", // changes to this one once damage of the part reaches 0.5
                "A3\data_f\Glass_veh_damage.rvmat", // changes to this one once damage of the part reaches 1
                "A3\data_f\glass_veh.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat"
            };
        };

        class Exhausts {
            class Exhaust1 {
                position = "exhaust1";       // name of initial memory point
                direction = "exhaust1_dir";  // name of memory point for exhaust direction
                effect = "ExhaustsEffect";   // what particle effect is it going to use
            };
        };

        class Reflectors {
            class LightCarHeadL01 {
                color[] = {1000, 1200, 1700};    // approximate colour of standard lights
                ambient[] = {5, 5, 5};           // nearly a white one
                position = "headlight1_r";       // memory point for start of the light and flare
                direction = "headlight1_r_dir";  // memory point for the light direction
                hitpoint = "Light_L";            // point(s) in hitpoint lod for the light (hitPoints are created by engine)
                selection = "Light_L";           // selection for artificial glow around the bulb, not much used any more
                size = 1;                        // size of the light point seen from distance
                innerAngle = 100;                // angle of full light
                outerAngle = 179;                // angle of some light
                coneFadeCoef = 10;               // attenuation of light between the above angles
                intensity = 1;                   // strength of the light
                useFlare = 1;                 // does the light use flare?
                dayLight = 0;                // switching light off during day saves CPU a lot
                flareSize = 1.0;                 // how big is the flare

                class Attenuation {
                    start = 1.0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;  // it is good to have some limit otherwise the light would shine to infinite distance
                    hardLimitEnd = 60;    // this allows adding more lights into scene
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
        // it might be even good to aggregate all lights into one source as it is done for most of the cars
        // Must be kept as fail-safe in case of issue with the function

        class UserActions {
            class lance_equip {
                displayName = "Equip Lance";
                position = "pilotView";
                onlyForPlayer = 0;
                radius = 3;
                priority = 1;
                condition = QUOTE(ls_player == currentPilot this and {[ARR_3(this,ls_player,'isLance')] call FUNC(canEquipLance)});
                statement = QUOTE([ARR_4(this,ls_player,[ARR_3(0.42,0.3,-0.24)],'ls_driver_105kLancerAttack_state')] call FUNC(equipLance));
            };

            class lance_unequip: lance_equip {
                displayName = "Put Away Lance";
                condition = QUOTE(ls_player == currentPilot this and {this getVariable QQGVAR(equippedWeapon) != ''});
                statement = QUOTE([ARR_3(this,ls_player,'ls_driver_105kLancer_state')] call FUNC(unequipLance));
            };
        };
    };

    class ls_vehicle_105kLancer: ls_vehicle_105kLancer_base {
        scope = 2;
        author = AUTHOR;
        faction = "ls_gar";
        crew = "ls_gar_jediCommander";
        side = 1;
    };

    class ls_vehicle_105kLancer_civ: ls_vehicle_105kLancer_base {
        scope = 2;
        author = AUTHOR;
        faction = "ls_civilians";
        crew = "ls_civilian_randomSpecies_polo1";
        side = 3;
    };

    DEPRECATED(lsd_ground_lancerBike,ls_vehicle_105kLancer);
    DEPRECATED(lsd_civ_lancerBike,ls_vehicle_105kLancer_civ);
};
