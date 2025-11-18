class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};

class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
        class CommanderOptics;
    };
    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class AnimationSources;
        class ViewPilot;
        class CargoTurret;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints: HitPoints {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds: Sounds {
            class Engine;
            class Movement;
        };
    };
    class ls_vehicle_tx130_base: Tank_F {
        author = AUTHOR;
        scope = 0;
        availableForSupportTypes[] = {
            "Transport"
        };
        displayName = "TX-130S Fighter Tank";
        model = QPATHTOF(ls_vehicle_tx130.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_tx130.jpg);
        picture = QPATHTOF(data\ui\tx130_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\tx130_icon_ca.paa);
        faction = "ls_gar";
        editorSubcategory = "ls_edsubcat_repulsorliftArmor";
        hiddenSelections[] = {
            "_hull",
            "_rockets",
            "_tracks",
            "_turrets"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\hull_co.paa),
            QPATHTOF(data\rocket_co.paa),
            QPATHTOF(data\tracks_co.paa),
            QPATHTOF(data\turrets_co.paa)
        };
        canFloat = 1;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0.07;
        waterLeakiness = 2.5;
        waterSpeedFactor = 0.5;
        waterAngularDampingCoef = 5;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 0.5;
        maxFordingDepth = 0.5;
        waterResistance = 1;
        simulation = "tankX";
        enginePower = 1000;
        maxOmega = 276;
        peakTorque = 4832;
        maxspeed = 100;
        torqueCurve[] = {
            {0, 0},
            {(1600 / 2640), (2650 / 2850)},
            {(1800 / 2640), (2800 / 2850)},
            {(1900 / 2640), (2850 / 2850)},
            {(2000 / 2640), (2800 / 2850)},
            {(2200 / 2640), (2750 / 2850)},
            {(2400 / 2640), (2600 / 2850)},
            {(2640 / 2640), (2350 / 2850)}
        };
        thrustDelay = 0.1;
        clutchStrength = 180;
        fuelCapacity = 1885;
        brakeIdleSpeed = 1.78;
        latency = 0.1;
        tankTurnForce = 600000;
        idleRpm = 700;
        redRpm = 2640;
        engineLosses = 25;
        transmissionLosses = 15;
        changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95};
        class complexGearbox {
            GearboxRatios[] = {
                "R2", -3.9,
                "N", 0,
                "D1", 4.7,
                "D2", 3.5,
                "D3", 2.6,
                "D4", 2,
                "D5", 1.5,
                "D6", 1.125,
                "D7", 0.85
            };
            TransmissionRatios[] = {"High",15};
            gearBoxMode = "full-auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels {
            class L2 {
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                damping = 75;
                steering = 0;
                side = "left";
                weight = 150;
                mass = 150;
                MOI = 25;
                latStiffX = 25;
                latStiffY = 280;
                longitudinalStiffnessPerUnitGravity = 100000;
                maxBrakeTorque = 40000;
                sprungMass = 4000;
                springStrength = 324000;
                springDamperRate = 36000;
                dampingRate = 1;
                dampingRateInAir = 8830;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                maxDroop = 0.15;
                maxCompression = 0.15;
            };
            class L3: L2 {
                boneName = "wheel_podkolol2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "wheel_podkolol3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class R2: L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "wheel_podkolop2";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "wheel_podkolop3";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "wheel_podkolop4";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "wheel_podkolop5";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "wheel_podkolop6";
                center = "wheel_2_7_axis";
                boundary = "wheel_2_7_bound";
            };
        };
        cost = 1500000;
        damageResistance = 0.02;
        crewVulnerable = 1;
        armor = 600;
        armorStructural = 15;

        #include "cfg\HitPoints.hpp"
        class Turrets: Turrets {
            class CargoTurret1: CargoTurret {
                gunnerAction = "passenger_inside_3";
                gunnerCompartments = "Compartment2";
                memoryPointsGetInGunner = "pos cargo1";
                memoryPointsGetInGunnerDir = "pos cargo1 dir";
                gunnerName = "Passenger Gunner 1";
                proxyIndex = 1;
                maxElev = 15;
                minElev = -25;
                maxTurn = 60;
                minTurn = -60;
                isPersonTurret = 2;
                ejectDeadGunner = 1;
                gunnerInAction = "passenger_inside_3";
                startEngine = 0;
                allowLauncherIn = 1;
                allowLauncherOut = 1;
                LODTurnedIn = 1200;
                forceHideGunner = 1;
            };
            class CargoTurret2: CargoTurret1 {
                gunnerCompartments = "Compartment3";
                memoryPointsGetInGunner = "pos cargo2";
                memoryPointsGetInGunnerDir = "pos cargo2 dir";
                gunnerName = "Passenger Gunner 2";
                proxyIndex = 2;
            };
            class CargoTurret3: CargoTurret1 {
                proxyIndex = 3;
                gunnerName = "Passenger Gunner 3";
                gunnerCompartments = "Compartment4";
                memoryPointsGetInGunner = "pos cargo3";
                memoryPointsGetInGunnerDir = "pos cargo3 dir";
            };
            class CargoTurret4: CargoTurret1 {
                proxyIndex = 4;
                gunnerName = "Passenger Gunner 4";
                gunnerCompartments = "Compartment5";
                memoryPointsGetInGunner = "pos cargo4";
                memoryPointsGetInGunnerDir = "pos cargo4 dir";
            };
            class CargoTurret5: CargoTurret1 {
                proxyIndex = 5;
                gunnerName = "Passenger Gunner 5";
                gunnerCompartments = "Compartment6";
                memoryPointsGetInGunner = "pos cargo5";
                memoryPointsGetInGunnerDir = "pos cargo6 dir";
            };
            class CargoTurret6: CargoTurret1 {
                proxyIndex = 6;
                gunnerName = "Passenger Gunner 6";
                gunnerCompartments = "Compartment6";
                memoryPointsGetInGunner = "pos cargo6";
                memoryPointsGetInGunnerDir = "pos cargo6 dir";
            };
            class CargoTurret7: CargoTurret1 {
                proxyIndex = 7;
                gunnerName = "Passenger Gunner 7";
                gunnerCompartments = "Compartment3";
                memoryPointsGetInGunner = "pos cargo6";
                memoryPointsGetInGunnerDir = "pos cargo6 dir";
            };
            class CargoTurret8: CargoTurret1 {
                proxyIndex = 8;
                gunnerName = "Passenger Gunner 8";
                gunnerCompartments = "Compartment2";
                memoryPointsGetInGunner = "pos cargo6";
                memoryPointsGetInGunnerDir = "pos cargo6 dir";
            };
            class CargoTurret9: CargoTurret1 {
                proxyIndex = 9;
                gunnerName = "Passenger Gunner 9";
                gunnerCompartments = "Compartment6";
                memoryPointsGetInGunner = "pos cargo6";
                memoryPointsGetInGunnerDir = "pos cargo6 dir";
            };
            class CargoTurret10: CargoTurret1 {
                proxyIndex = 10;
                gunnerName = "Passenger Gunner 10";
                gunnerCompartments = "Compartment6";
                memoryPointsGetInGunner = "pos cargo6";
                memoryPointsGetInGunnerDir = "pos cargo6 dir";
            };
            class CargoTurret11: CargoTurret1 {
                proxyIndex = 11;
                gunnerName = "Passenger Gunner 11";
                gunnerCompartments = "Compartment6";
                memoryPointsGetInGunner = "pos cargo11";
                memoryPointsGetInGunnerDir = "pos cargo11 dir";
            };

            class MainTurret: MainTurret {
                class Turrets {};
                body = "mainTurret";
                gun = "mainGun";
                weapons[] = {
                    "ls_weapon_tx130_aa",
                    "ls_weapon_tx130_cannon",
                    "missiles_titan"
                };
                memoryPointGun[] = {"usti hlavne 1","usti hlavne 2"};
                magazines[] = {
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_AA",
                    "ls_magazine_tx130_cannon",
                    "ls_magazine_tx130_cannon",
                    "ls_magazine_tx130_cannon",
                    "ls_magazine_tx130_cannon",
                    "4Rnd_Titan_long_missiles",
                    "4Rnd_Titan_long_missiles",
                    "4Rnd_Titan_long_missiles",
                    "4Rnd_Titan_long_missiles"
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
                inGunnerMayFire = 1;
                outGunnerMayFire = 0;
                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
                gunnerOutOpticsModel = "";
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
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

                class ViewGunner {
                    initAngleX = -9;
                    initAngleY = 0;
                    initFov = 0.9;
                    minFov = 0.25;
                    maxFov = 1.25;
                    minAngleX = -65;
                    maxAngleX = 85;
                    minAngleY = -150;
                    maxAngleY = 150;
                    minMoveX = -0.075;
                    maxMoveX = 0.075;
                    minMoveY = -0.075;
                    maxMoveY = 0.075;
                    minMoveZ = -0.075;
                    maxMoveZ = 0.1;
                };

                class ViewOptics: ViewOptics {
                    initAngleX = 0;
                    initAngleY = 0;
                    initFov = 0.9;
                    minFov = 0.25;
                    maxFov = 1.25;
                    minAngleX = -85;
                    maxAngleX = 85;
                    minAngleY = -150;
                    maxAngleY = 150;
                    minMoveX = -0.075;
                    maxMoveX = 0.075;
                    minMoveY = -0.075;
                    maxMoveY = 0.075;
                    minMoveZ = -0.075;
                    maxMoveZ = 0.075;
                    visionMode[] = {"Normal","NVG","TI"};
                };

                class HitPoints {
                    class HitGunL {
                        armor = -250;
                        material = -1;
                        armorComponent = "gun_left";
                        name = "hit_main_gun_point";
                        visual = "gun_left";
                        passThrough = 0;
                        minimalHit = 0.03;
                        explosionShielding = 0.2;
                        radius = 0.2;
                        isGun = 1;
                    };
                    class HitGunR {
                        armor = -250;
                        material = -1;
                        armorComponent = "gun_right";
                        name = "hit_main_gun_point";
                        visual = "gun_right";
                        passThrough = 0;
                        minimalHit = 0.03;
                        explosionShielding = 0.2;
                        radius = 0.2;
                        isGun = 1;
                    };
                };
            };

            class CommanderOptics: CommanderOptics {
                memoryPointGunnerOutOptics = "commanderview";
                memoryPointGunnerOptics = "commanderview";
                minElev = -10;
                maxElev = 30;
                initElev = 0;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 0;
                minCamElev = -90;
                maxCamElev = 90;
                weapons[] = {"SmokeLauncher"};
                magazines[] = {"SmokeLauncherMag"};
                soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm.wss",0.56234133,1,30};
                soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm.wss",0.56234133,1,30};
                outGunnerMayFire = 0;
                inGunnerMayFire = 1;
                gunnerAction = "Commander_APC_tracked_01_crv_out";
                gunnerInAction = "Commander_APC_tracked_01_crv_in";
                gunnerGetInAction = "GetInAMV_cargo";
                gunnerGetOutAction = "GetOutLow";
                turretInfoType = "RscWeaponRangeFinder";
                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
                gunnerforceoptics = 0;
                usePip = 1;
                animationSourceStickX = "com_turret_control_x";
                animationSourceStickY = "com_turret_control_y";
                gunnerLeftHandAnimName = "com_turret_control";
                turretFollowFreeLook = 2;
                LODOpticsIn = 0;
                LODTurnedIn = 1100;
                LODTurnedOut = 1;
                viewGunnerShadowAmb = 0.5;
                viewGunnerShadowDiff = 0.05;
                gunnerOutOpticsModel = "";
                gunnerOpticsEffect[] = {};

                class ViewGunner: ViewCargo {
                    initAngleX = -6;
                    initAngleY = 0;
                    initFov = 0.9;
                    minFov = 0.25;
                    maxFov = 1.25;
                    minAngleX = -65;
                    maxAngleX = 85;
                    minAngleY = -150;
                    maxAngleY = 150;
                    minMoveX = -0.075;
                    maxMoveX = 0.075;
                    minMoveY = -0.075;
                    maxMoveY = 0.075;
                    minMoveZ = -0.075;
                    maxMoveZ = 0.1;
                };
                class ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.31;
                    minFov = 0.034;
                    maxFov = 0.31;
                    visionMode[] = {"Normal","NVG","TI"};
                    thermalMode[] = {2,3};
                };

                startEngine = 0;
                stabilizedInAxes = 3;
                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.8;
                viewGunnerInExternal = 1;
                showCrewAim = 1;

                class HitPoints {
                    class HitComTurret {
                        armor = 0.1;
                        material = -1;
                        armorComponent = "hit_com_turret";
                        name = "hit_com_turret_point";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.1;
                        explosionShielding = 1;
                        radius = 0.15;
                        isTurret = 1;
                    };
                    class HitComGun {
                        armor = 0.1;
                        material = -1;
                        armorComponent = "hit_com_gun";
                        name = "hit_com_gun_point";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.1;
                        explosionShielding = 1;
                        radius = 0.15;
                        isGun = 1;
                    };
                };

                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander {};
                    class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander {};
                };
            };
        };

        class RenderTargets {
            class gunner_display {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "pip1_pos";
                    pointDirection = "pip1_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.305731;
                    turret[] = {0, 0};
                };
            };

            class driver_display {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "pip2_pos";
                    pointDirection = "pip2_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.8;
                    turret[] = {-1};
                };
            };
        };
        #include "cfg\Sounds.hpp"

        // class Sounds
        // {
        // 	soundSetsInt[] = {"APC_Tracked_03_Engine_RPM0_INT_SoundSet","APC_Tracked_03_Engine_RPM1_INT_SoundSet","APC_Tracked_03_Engine_RPM2_INT_SoundSet","APC_Tracked_03_Engine_RPM3_INT_SoundSet","APC_Tracked_03_Engine_RPM4_INT_SoundSet","APC_Tracked_03_Engine_INT_Burst_SoundSet","APC_Tracked_03_Tracks_01_INT_SoundSet","APC_Tracked_03_Tracks_02_INT_SoundSet","APC_Tracked_03_Tracks_03_INT_SoundSet","APC_Tracked_03_Tracks_04_INT_SoundSet","APC_Tracked_03_Tracks_05_INT_SoundSet","APC_Tracked_03_Tracks_06_INT_SoundSet","APC_Tracked_03_Interior_Tone_Engine_Off_SoundSet","APC_Tracked_03_Interior_Tone_Engine_On_SoundSet","APC_Tracked_03_Rattling_INT_SoundSet","APC_Tracked_03_Stress_INT_SoundSet","APC_Tracked_03_Rain_INT_SoundSet","APC_Tracked_03_Tracks_Brake_Hard_INT_SoundSet","APC_Tracked_03_Tracks_Brake_Soft_INT_SoundSet","APC_Tracked_03_Tracks_Turn_Hard_INT_SoundSet","APC_Tracked_03_Tracks_Turn_Soft_INT_SoundSet","APC_Tracked_03_Drive_Water_INT_SoundSet","APC_Tracked_03_Drive_Dirt_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Hard_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
        // 	soundSetsExt[] = {"APC_Tracked_03_Engine_RPM0_EXT_SoundSet","APC_Tracked_03_Engine_RPM1_EXT_SoundSet","APC_Tracked_03_Engine_RPM2_EXT_SoundSet","APC_Tracked_03_Engine_RPM3_EXT_SoundSet","APC_Tracked_03_Engine_RPM4_EXT_SoundSet","APC_Tracked_03_Engine_EXT_Burst_SoundSet","APC_Tracked_03_Tracks_01_EXT_SoundSet","APC_Tracked_03_Tracks_02_EXT_SoundSet","APC_Tracked_03_Tracks_03_EXT_SoundSet","APC_Tracked_03_Tracks_04_EXT_SoundSet","APC_Tracked_03_Tracks_05_EXT_SoundSet","APC_Tracked_03_Tracks_06_EXT_SoundSet","APC_Tracked_03_Rattling_EXT_SoundSet","APC_Tracked_03_Rain_EXT_SoundSet","APC_Tracked_03_Tracks_Brake_Hard_EXT_SoundSet","APC_Tracked_03_Tracks_Brake_Soft_EXT_SoundSet","APC_Tracked_03_Tracks_Turn_Hard_EXT_SoundSet","APC_Tracked_03_Tracks_Turn_Soft_EXT_SoundSet","APC_Tracked_03_Drive_Water_EXT_SoundSet","APC_Tracked_03_Drive_Dirt_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
        // };
        driverAction = "driver_offroad01";
        driverInAction = "driver_offroad01";
        viewDriverInExternal = 1;
        proxytype = "CPDriver";
        proxyIndex = 1;
        forcehideDriver = 1;
        DriverForceOptics = 0;
        memoryPointTrack1L = "Track LL";
        memoryPointTrack1R = "Track LR";
        memoryPointTrack2L = "Track RL";
        memoryPointTrack2R = "Track RR";
        dustFrontLeftPos = "dustFrontLeft";
        dustFrontRightPos = "dustFrontRight";
        dustBackLeftPos = "dustBackLeft";
        dustBackRightPos = "dustBackRight";
        class Exhausts {
            class Exhaust_1 {
                position = "Exhaust_1_pos";
                direction = "Exhaust_1_dir";
                effect = "ExhaustEffectTankSide";
            };
            class Exhaust_2 {
                position = "Exhaust_2_pos";
                direction = "Exhaust_2_dir";
                effect = "ExhaustEffectTankSide";
            };
        };
        driver = "ls_clone_phase2_rifleman";
        crew = "ls_clone_phase2_rifleman";
        typicalCargo[] = {
            "ls_clone_phase2_rifleman"
        };
        memoryPointTaskMarker = "TaskMarker_1_pos";
        //Slingload mem points.
        slingLoadCargoMemoryPoints[] = {
            "light_l", //front left
            "light_r", //front right
            "exhaust_1_pos", //rear left
            "exhaust_2_pos" //rear right
        };
        class AnimationSources: AnimationSources {
            class maxholdstervalue {
                source = "maxholdstervalue";
                weapon = "missiles_titan";
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class recoil_cannon_source {
                source = "reload";
                weapon = "ls_weapon_tx130_cannon";
            };
            class recoil_mg_source {
                source = "reload";
                weapon = "ls_weapon_tx130_aa";
            };
        };

        class Reflectors {
            class Left {
                color[] = {1900, 1800, 1700};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 1;
                dayLight = 0;
                flareSize = 0.1;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Right: Left {
                position = "Light_R";
                direction = "Light_R_end";
                hitpoint = "Light_R";
                selection = "Light_R";
            };
        };

        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 100;
                canBeTransported = 1;
                dimensions[] = {
                    "BBox_1_1_pos",
                    "BBox_1_2_pos"
                };
            };
        };
    };

    class ls_vehicle_tx130: ls_vehicle_tx130_base {
        scope = 2;
        faction = "ls_gar";
        side = 1;
    };
};
