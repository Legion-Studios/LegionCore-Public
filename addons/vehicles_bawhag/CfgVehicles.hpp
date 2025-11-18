class Optics_Armored;
class Optics_Gunner_MBT_02: Optics_Armored {
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
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;

        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };

        class Sounds: Sounds {
            class Engine;
            class Movement;
        };
    };

    class ls_vehicle_bawhag_base: Tank_F {
        scope = 0;
        author = AUTHOR;
        transportSoldier = 0;
        accuracy = 0.25;
        EPEImpulseDamageCoef = 5;
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_bawhag.jpg);
        picture = QPATHTOF(data\ui\bawhag_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\bawhag_icon_ca.paa);
        displayName = "BAW Heavy Artillery Gun";
        model = QPATHTOF(ls_vehicle_bawhag.p3d);
        side = 0;
        faction = "ls_cis";
        editorSubcategory = "ls_edsubcat_repulsorliftArmor";
        hiddenSelections[] = {
            "body",
            "eyes",
            "gun"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body_co.paa),
            QPATHTOF(data\eyes_co.paa),
            QPATHTOF(data\gun_co.paa),
        };
        // AI information
        isUav = 1;
        crew = "O_UAV_AI";
        typicalCargo[] = {"O_UAV_AI"};
        uavCameraDriverPos = "driver_view";
        uavCameraDriverDir = "driver_view_dir";
        artilleryScanner = 1;
        availableForSupportTypes[] = {
            "Artillery"
        };
        driverAction = "Disabled";
        driverInAction = "Disabled";
        viewDriverInExternal = 1;
        threat[] = {0.80000001,1,0.30000001};
        // ARMAMENTS
        weapons[] = {};
        magazines[] = {};
        // MEMORY POINTS
        gunBeg = "";
        gunEnd = "";
        memorypointgun = "";
        memoryPointsLeftWaterEffect = "EngineEffectL";
        memoryPointsRightWaterEffect = "EngineEffectR";
        memoryPointTrack1L = "Track LL";
        memoryPointTrack1R = "Track LR";
        memoryPointTrack2L = "Track RL";
        memoryPointTrack2R = "Track RR";
        dustFrontLeftPos = "dustFrontLeft";
        dustFrontRightPos = "dustFrontRight";
        dustBackLeftPos = "dustBackLeft";
        dustBackRightPos = "dustBackRight";
        memoryPointDriverOptics = "driver_view";
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


        insideSoundCoef = 0.89999998;

        canFloat = 1;
        waterLeakiness = 2.5;
        waterAngularDampingCoef = 4;
        waterLinearDampingCoefY = 4;
        waterLinearDampingCoefX = 4;
        waterLinearDampingCoefZ = 4;
        engineShiftY = 1.2;
        rudderForceCoef = 100;
        forceHideDriver = 1;
        rudderForceCoefAtMaxSpeed = 100;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0;
        waterSpeedFactor = 3000;
        maxFordingDepth = 0.5;
        waterResistance = 1;
        turnCoef = 0.5;
        engineEffectSpeed = 5;

        #include "cfg\PhysX.hpp"
        #include "cfg\HitPoints.hpp"
        #include "cfg\Sounds.hpp"

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turret {};
                gunBeg = "Usti hlavne";
                gunEnd = "Konec hlavne";
                elevationMode = 3;
                maxHorizontalRotSpeed = 0.78;
                maxVerticalRotSpeed = 0.26;
                memoryPointGunnerOptics = "gunner_view";
                memoryPointGun = "gunner_view_dir";

                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
                discreteDistanceInitIndex = 2;

                proxyIndex = 2;
                weapons[] = {
                    "mortar_155mm_AMOS"
                };
                magazines[] = {
                    "32Rnd_155mm_Mo_shells",
                    "2Rnd_155mm_Mo_guided",
                    "2Rnd_155mm_Mo_guided",
                    "6Rnd_155mm_Mo_mine",
                    "2Rnd_155mm_Mo_Cluster",
                    "6Rnd_155mm_Mo_smoke",
                    "2Rnd_155mm_Mo_LG",
                    "6Rnd_155mm_Mo_AT_mine"
                };
                minElev = 0;
                maxElev = 90;
                initElev = 0;
                minTurn = -90;
                maxTurn = 90;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best.wss",
                    0.0099999998,
                    1,
                    50
                };
                turretInfoType = "RscWeaponRangeArtilleryAuto";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;
                class OpticsIn: Optics_Gunner_MBT_02 {
                    class Wide: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
                        initFov = 0.17399999;
                        minFov = 0.0077777999;
                        maxFov = 0.14;
                        visionMode[] = {
                            "Normal",
                            "NVG",
                            "TI"
                        };
                        thermalMode[] = {0, 1};
                    };
                    class Medium: Medium {};
                    class Narrow: Narrow {};
                };
                gunnerAction = "Disabled";
                gunnerInAction = "Disabled";
                forceHideGunner = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                class HitPoints {
                    class HitTurret {
                        armor = 0.80000001;
                        material = -1;
                        name = "turret_hit";
                        visual = "main_turret";
                        passThrough = 0;
                        minimalHit = 0.02;
                        explosionShielding = 0.30000001;
                        radius = 0.25;
                    };
                    class HitGun {
                        armor = 0.30000001;
                        material = -1;
                        name = "gun_hit";
                        visual = "main_gun";
                        passThrough = 0;
                        minimalHit = 0;
                        explosionShielding = 1;
                        radius = 0.25;
                    };
                };
            };
        };

        cost = 1500000;

        class RenderTargets {};
        class ViewOptics: ViewOptics {
            visionMode[] = {
                "Normal",
                "NVG",
                "TI"
            };
            thermalMode[] = {0, 1};
            initFov = 0.85000002;
            minFov = 0.85000002;
            maxFov = 0.85000002;
        };

    };

    class ls_vehicle_bawhag: ls_vehicle_bawhag_base {
        scope = 2;
        author = AUTHOR;

        class SimpleObject {
            animate[] = {
                {"maingun", 0},
                {"mainturret", 0},
                {"damagehide", 0}
            };
        };
    };

    class ls_staticVehicle_base;
    class ls_vehicle_bawhag_static: ls_staticVehicle_base {
        scope = 2;
        author = AUTHOR;
        displayName = "BAW Heavy Artillery Gun";

        model = QPATHTOF(ls_vehicle_bawhag_static.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_bawhag.jpg);
        reversed = 0;
        destrType = 0;
        featureType = 2;

        hiddenSelections[] = {
            "body",
            "eyes",
            "gun"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body_co.paa),
            QPATHTOF(data\eyes_co.paa),
            QPATHTOF(data\gun_co.paa)
        };
    };

    class ls_wreck_base;
    class ls_vehicle_bawhag_wreck: ls_wreck_base {
        scope = 2;
        author = AUTHOR;
        displayName = "BAW Heavy Artillery Gun";
        model = QPATHTOF(ls_vehicle_bawhag_wreck.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_bawhag_wreck.jpg);
    };

    DEPRECATED(ls_ground_bawhag_wreck,ls_vehicle_bawhag_wreck);
    DEPRECATED(ls_ground_bawhagCIS_static,ls_vehicle_bawhag_static);
};
