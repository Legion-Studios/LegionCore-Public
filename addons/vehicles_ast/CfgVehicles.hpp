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
        class NewTurret;
        class AnimationSources;
    };
    class ls_vehicle_ast_base: Car_F {
        // Basic display information
        model = QPATHTOF(ls_vehicle_ast.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_ast.jpg);
        icon = QPATHTOF(data\ui\ast_icon_ca.paa);
        picture = QPATHTOF(data\ui\ast_icon_side_ca.paa);
        editorSubcategory = "ls_edsubcat_speeders";
        selectionBrakeLights = "brzdove svetlo";
        selectionBrackLights = "zadni svetlo";
        displayName = "Armored Scout Tank";
        weapons[] = {
            "ls_speeder_AP"
        };
        isUav = 1;
        driver = "O_UAV_AI";
        magazines[] = {
            "ls_magazine_speederHE_belt",
            "ls_magazine_speederHE_belt",
            "ls_magazine_speederHE_belt"
        };
        memoryPointGun[] = {
            "gun_driver_l",
            "gun_driver_r"
        };
        canFloat = 1;
        waterLeakiness = 2.5;
        waterPPInVehicle = 0;
        waterAngularDampingCoef = 0.5;
        waterResistanceCoef = 0.005;
        waterSpeedFactor = 1;
        waterSpeedCoef = 3;
        accelAidForceCoef = 30;
        accelAidForceSpd = 20;
        waterLinearDampingCoefY = 10;
        terrainCoef = 2.0; // different surface affects this car more, stick to tarmac
        turnCoef = 2.5; // should match the wheel turn radius
        precision = 10; // how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
        brakeDistance = 3.0; // how many internal waypoints should the AI plan braking in advance
        acceleration = 15; // how fast acceleration does the AI think the car has

        fireResistance = 5; // lesser protection against fire than tanks
        armor = 120; // just some protection against missiles, collisions and explosions
        cost = 50000; // how likely is the enemy going to target this vehicle

        transportMaxBackpacks = 3; // just some backpacks fit the trunk by default
        transportSoldier = 0; // number of cargo except driver

        // some values from parent class to show how to set them up
        wheelDamageRadiusCoef = 0.9;    // for precision tweaking of damaged wheel size
        wheelDestroyRadiusCoef = 0.4;   // for tweaking of rims size to fit ground
        maxFordingDepth = 0.5;   // how high water would damage the engine of the car
        waterResistance = 1;   // if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
        crewCrashProtection = 0.25;   // multiplier of damage to crew of the vehicle => low number means better protection
        driverLeftHandAnimName = "drivewheel"; // according to what bone in model of car does hand move
        driverRightHandAnimName = "drivewheel"; // beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

        class AnimationSources: AnimationSources {
            class recoil_cannon_source {
                source = "reload";
                weapon = "ls_weapon_hmp_turret_50mm_ap";
                initPhase = -1;
            };
        };
        // some first aid kits in trunk according to safety regulations
        class TransportItems {
            ITEM_XX(FirstAidKit,4);
        };

        class Turrets {
            class MainTurret: NewTurret {
                body = "mainTurret";
                gun = "mainGun";
                memoryPointGun[] = {
                    "usti hlavne 1",
                    "usti hlavne 2"
                };
                weapons[] = {
                    // "ls_weapon_beamCannon"
                    "ls_weapon_hmp_turret_50mm_he",
                    "ls_weapon_hmp_turret_50mm_ap"
                };
                magazines[] = {
                    "ls_magazine_50mm_200Rnd_HE_red",
                    "ls_magazine_50mm_200Rnd_HE_red",
                    "ls_magazine_50mm_200Rnd_APFSDS_red",
                    "ls_magazine_50mm_200Rnd_APFSDS_red"
                };
                soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner.wss",0.31622776,1,30};
                soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical.wss",0.31622776,1,30};
                commanding = 1;
                minElev = -7;
                initElev = 0;
                maxElev = 30;
                minTurn = -14;
                initTurn = 0;
                maxTurn = 14;
                minCamElev = -90;
                maxCamElev = 90;
                elevationMode = 0;
                missileBeg = "spice rakety";
                missileEnd = "konec rakety";
                gunnerAction = "crew_tank01_out";
                gunnerInAction = "Gunner_APC_tracked_01_crv_in";
                gunnerGetInAction = "GetInAMV_cargo";
                gunnerGetOutAction = "GetOutLow";
                viewGunnerInExternal = 1;
                castGunnerShadow = 1;
                forceHideGunner = 1;
                startEngine = 0;
                stabilizedInAxes = 3;
                gunnerForceOptics = 0;
                usePip = 1;
                // turretFollowFreeLook = 2;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
                gunnerOutOpticsModel = "";
                discreteDistance[] = {
                    100, 200,
                    300, 400,
                    500, 600,
                    700, 800,
                    900, 1000,
                    1100, 1200,
                    1300, 1400,
                    1500, 1600,
                    1700, 1800,
                    1900, 2000
                };
                discreteDistanceInitIndex = 2;
                turretInfoType = "RscOptics_crows";
                memoryPointGunnerOptics = "gunnerview";
                selectionFireAnim = "";
                showCrewAim = 2;
                animationSourceStickX = "turret_control_x";
                animationSourceStickY = "turret_control_y";
                gunnerRightHandAnimName = "turret_control";
                LODOpticsIn = 0;
                viewGunnerShadowAmb = 0.5;
                viewGunnerShadowDiff = 0.05;
            };
        };

        class HitPoints: HitPoints {
            // it is easier to destroy wheels than hull of the vehicle
            class HitLFWheel: HitLFWheel {
                armor = 999;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                armor = 999;
                passThrough = 0;
            };

            class HitRFWheel: HitRFWheel {
                armor = 999;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                armor = 999;
                passThrough = 0;
            };

            // correct points for fuel tank, some of the damage is aFRLied to the whole
            class HitFuel {
                armor = 0.50;
                material=-1;
                name = "fueltank";
                visual = "";
                passThrough = 0.2;
            };
            class HitEngine   {
                armor = 0.50;
                material=-1;
                name = "engine";
                visual = "";
                passThrough = 0.2;
            };
            // all damage to the hull is aFRLied to total damage
            class HitBody: HitBody {
                name = "body";
                visual = "camo1";
                passThrough = 1;
            };

            // it is pretty easy to puncture the glass but not so easy to remove it
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

        driverAction = "ls_driver_barc";   // driver_low01; // what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible

        getInAction = "GetInLow";   // how does driver look while getting in
        getOutAction = "GetOutLow";   // and out
        // cargoGetInAction[] = {"GetInLow"}; // and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
        // cargoGetOutAction[] = {"GetOutLow"}; // that means all use the same in this case

        #include "cfg\Sounds.hpp"
        #include "cfg\PhysX.hpp"

        // steering sensitivity configuration
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
                    hardLimitStart = 30; // it is good to have some limit otherwise the light would shine to infinite distance
                    hardLimitEnd = 60;   // this allows adding more lights into scene
                };

            };

            class LightCarHeadL02: LightCarHeadL01 {
                position = "headlight2_r";
                direction = "headlight2_r_dir";
                flareSize = 0.5;
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
    };

    class ls_vehicle_ast: ls_vehicle_ast_base {
        scope = 2;
        crew = "ls_droid_b1_crew";
        typicalCargo[] = {
            "ls_droid_b1_crew"
        };
        side = 0;
        faction = "ls_cis";
    };

    DEPRECATED(lsd_car_ast,ls_vehicle_ast);
};
