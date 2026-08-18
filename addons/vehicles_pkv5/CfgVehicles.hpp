class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class HitPoints;
    };
    class Tank_F: Tank {
        class ViewOptics;
        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
        };
        class Turrets {
            class MainTurret;
        };
        class CommanderOptics;
        class ViewCargo;
    };
    class ls_vehicle_pkv5_base: Tank_F {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(displayName);

        model = QPATHTOF(ls_vehicle_pkv5.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\republic\camo1_co.paa),
            QPATHTOF(data\republic\camo2_cannon_co.paa)
        };
        picture = QPATHTOF(data\ui\pkv5_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\pkv5_icon_ca.paa);

        side = BLUFOR;
        crew = "ls_clone_phase2_standard_DC15A";
        typicalCrew[] = {"ls_clone_phase2_standard_DC15A"};
        faction = "ls_gar";
        editorSubcategory = "ls_edsubcat_repulsorliftArmor";

        accuracy = 1000; // accuracy > 4 is not possible to be fully recognized during game
        cost = 1500000;
        damageResistance = 0.02;
        crewVulnerable = 0;

        memoryPointDriverOptics = "pip0_pos";
        memoryPointDriverOpticsDir = "pip0_dir";
        driverForceOptics = 0;
        driverAction = "Driver_MBT_03_cannon_F_out";
        driverInAction = "Driver_MBT_01_cannon_F_in";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";

        LODDriverTurnedIn = 1000;
        LODDriverTurnedOut = 1000;
        // remove 'turn out' option for respective seat
        forceHideDriver = -1;

        armor = 900;
        armorStructural = 6;

        #include "cfg\PhysX.hpp"
        #include "cfg\Hitpoints.hpp"
        #include "cfg\Reflectors.hpp"
        #include "cfg\Sounds.hpp"

        slingLoadCargoMemoryPoints[] = {
            "light_l",
            "light_r",
            "exhaust_1_pos",
            "exhaust_2_pos"
        };

        transportSoldier = 2;
        cargoAction[] = {
            "passenger_inside_1",
            "passenger_inside_2",
            "passenger_inside_3",
            "passenger_inside_4"
        };
        cargoProxyIndexes[] = {4, 5};

        PILOT_CARGO_SPEC(0);
        showNVGCargo[] = {4, 5};

        // class AnimationSources: AnimationSources {
        //     class muzzle_rot_cannon {source = "ammorandom"; weapon = "cannon_120mm";};
        //     class muzzle_rot_coax {source = "ammorandom"; weapon = "LMG_M200";};
        //     class muzzle_rot_HMG {source = "ammorandom"; weapon = "HMG_NSVT";};
        //     class recoil_source {source = "reload"; weapon = "cannon_120mm";};
        // };

        memoryPointTrack1L = "wheel_1_7_bound";
        memoryPointTrack1R = "wheel_2_7_bound";
        memoryPointTrack2L = "wheel_1_7_bound";
        memoryPointTrack2R = "wheel_2_7_bound";

        smokeLauncherGrenadeCount = 8; // Number of smoke shells launched at once
        smokeLauncherVelocity = 14; // Velocity which smoke shells are launched at
        smokeLauncherOnTurret = 0; // 0 if smoke launchers are on hull, 1 if on turret
        smokeLauncherAngle = 120; // Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                maxVerticalRotSpeed = 1.8;
                body = "mainTurret";
                gun = "mainGun";
                memoryPointGunnerOptics = "pip1_pos";
                memoryPointGun = "machinegun";

                gunnerInAction = "ManActTestDriver";
                gunnerAction = "";

                canHideGunner = 1;
                gunnerForceOptics = 0;
                gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
                weapons[] = {"ls_weapon_hmp_turret_50mm_he"};
                magazines[] = {ITEM_6("ls_magazine_50mm_200Rnd_HE_red")};
                maxHorizontalRotSpeed = 1.8;

                LODTurnedIn = 1000;
                LODTurnedOut = 1000;
                forceHideGunner = -1;

                initElev = 0;
                minElev = -3;
                maxElev = 30;
                minTurn = -360;
                maxTurn = 360;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                stabilizedInAxes = 3;
                usePip = 1;
                soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best.wss", "db-40", 1, 50};

                driverAction = "driver_hemtt";
                driverInAction = "driver_hemtt";
                viewGunnerInExternal = 0;

                // FCS
                turretInfoType = "RscWeaponRangeZeroing";
                proxyindex = 2;
                discreteDistance[] = {
                    100, 200, 300, 400, 500, 600, 700, 800,
                    900, 1000, 1100, 1200, 1300, 1400, 1500, 1600,
                    1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400
                };
                discreteDistanceInitIndex = 5;

                TURRET_SPEC(1);

                class OpticsIn {
                    class Wide: ViewOptics {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngle = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.3;
                        minFov = 0.3;
                        maxFov = 0.3;
                        visionMode[] = {"Normal", "TI"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
                        gunnerOpticsEffect[] = {};
                    };
                    class Medium: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
                        initFov = 0.07;
                        minFov = 0.07;
                        maxFov = 0.07;
                    };
                    class Narrow: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
                        initFov = 0.028;
                        minFov = 0.028;
                        maxFov = 0.028;
                    };
                };

                class HitPoints {
                    class HitTurret {
                        armor = 0.6;
                        material = -1;
                        name = "hit_turret_point";
                        visual = "-";
                        isTurret = 1;
                        armorComponet = "hit_turret";
                        passThrough = 0;
                        minimalHit = 0.1;
                        explosionShielding = 0.3;
                        radius = 0.25;
                    };
                    class HitGun {
                        armor = 0.3;
                        material = -1;
                        name = "hit_gun_point";
                        armorComponent = "hit_gun";
                        visual = "-";
                        isTurret = 1;
                        passThrough = 0;
                        minimalHit = 0;
                        explosionShielding = 1;
                        radius = 0.25;
                    };
                };

                class Turrets {};
            };
            class CommanderOptics: CommanderOptics {
                canHideGunner = 1;
                memoryPointGunnerOutOptics = "commanderview";
                memoryPointGunnerOptics = "commanderview";
                animationSourceBody = "";
                minElev = -25;
                maxElev = 60;
                initElev = 0;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 0;
                proxyIndex = 3;
                minCamElev = -90;
                maxCamElev = 90;
                weapons[] = {"SmokeLauncher"};
                magazines[] = {"SmokeLauncherMag"};

                gunnerAction = "";
                gunnerInAction = "Commander_APC_tracked_01_crv_in";
                forceHideGunner = -1;

                soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best.wss", 0.01, 1, 50};
                soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best.wss", 0.01, 1, 50};
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;

                gunnerGetInAction = "GetInAMV_cargo";
                gunnerGetOutAction = "GetOutLow";
                turretInfoType = "RscWeaponRangeFinder";
                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
                gunnerForceOptics = 0;
                usePip = 1;
                animationSourceStickX = "com_turret_control_x";
                animationSourceStickY = "com_turret_control_y";
                gunnerLeftHandAnimName = "com_turret_control";
                turretFollowFreeLook = 2;
                LODOpticsIn = 0;
                LODTurnedIn = 1000;
                LODTurnedOut = 1000;
                viewGunnerShadowAmb = 0.5;
                viewGunnerShadowDiff = 0.05;
                gunnerOutOpticsModel = "";
                gunnerOpticsEffect[] = {};

                startEngine = 0;
                stabilizedInAxes = 3;
                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.8;
                viewGunnerInExternal = 1;
                showCrewAim = 1;

                TURRET_SPEC(1);

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

                class HitPoints {
                    class HitComGun {
                        armor = 0.6;
                        explosionShielding = 1;
                        material = 52;
                        name = "gun";
                        passThrough = 1;
                        visual = "gun";
                    };
                    class HitComTurret {
                        armor = 0.8;
                        explosionShielding = 1;
                        material = 51;
                        name = "turret";
                        passThrough = 1;
                        visual = "turret";
                    };
                };
            };
        };

        class Damage {
            tex[] = {};
            mat[] = {
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",

                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",

                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",

                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
                "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat",

                "A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher.rvmat",
                "A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
                "A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat"
            };
        };

        class ViewOptics: ViewOptics {
            visionMode[] = {
                "Normal",
                "NVG"
            };
        };

        class RenderTargets {
            class RenderTarget0 {
                renderTarget = "renderTarget0";
                class CameraView0 {
                    pointPosition = "pip0_pos";
                    pointDirection = "pip0_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
            };
            class RenderTarget1 {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "pip1_pos";
                    pointDirection = "pip1_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.8;
                };
            };
            class RenderTarget2 {
                renderTarget = "rendertarget2";
                class CameraView2 {
                    pointPosition = "pip1_pos";
                    pointDirection = "pip1_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.8;
                };
            };
        };

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

        textureList[] = {"standard", 1, "standard_logo", 1};
        class TextureSources {
            class standard {
                author = AUTHOR;
                displayName = CSTRING(standard);
                factions[] = {};
                textures[] = {
                    QPATHTOF(data\republic\camo1_co.paa),
                    QPATHTOF(data\republic\camo2_cannon_co.paa)
                };
            };
            class standard_logo: standard {
                author = AUTHOR;
                displayName = CSTRING(standard_logo);
                textures[] = {
                    QPATHTOF(data\republic\logo\camo1_co.paa),
                    QPATHTOF(data\republic\logo\camo2_cannon_co.paa)
                };
            };
        };
    };

    class ls_vehicle_pkv5: ls_vehicle_pkv5_base {
        scope = 2;
        author = AUTHOR;
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5.jpg);
    };

    // Defined but scope 0'd just to prevent warnings from unused stringtables
    class ls_vehicle_pkv5_aaa: ls_vehicle_pkv5_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(aaa_displayName);

        // model = QPATHTOF(ls_vehicle_pkv5_aaa.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\republic\camo1_co.paa),
            QPATHTOF(data\republic\camo2_aaa_co.paa)
        };
        // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_aaa.jpg);

        class TextureSources: TextureSources {
            class standard: standard {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\camo1_co.paa),
                    QPATHTOF(data\republic\camo2_aaa_co.paa)
                };
            };
            class standard_logo: standard_logo {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\logo\camo1_co.paa),
                    QPATHTOF(data\republic\logo\camo2_aaa_co.paa)
                };
            };
        };
    };

    class ls_vehicle_pkv5_mlrs: ls_vehicle_pkv5_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(mlrs_displayName);

        // model = QPATHTOF(ls_vehicle_pkv5_mlrs.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\republic\camo1_co.paa),
            QPATHTOF(data\republic\camo2_mlrs_co.paa)
        };
        // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_mlrs.jpg);

        class TextureSources: TextureSources {
            class standard: standard {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\camo1_co.paa),
                    QPATHTOF(data\republic\camo2_mlrs_co.paa)
                };
            };
            class standard_logo: standard_logo {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\logo\camo1_co.paa),
                    QPATHTOF(data\republic\logo\camo2_mlrs_co.paa)
                };
            };
        };
    };

    class ls_vehicle_pkv5_mortar: ls_vehicle_pkv5_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(mortar_displayName);

        // model = QPATHTOF(ls_vehicle_pkv5_mortar.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\republic\camo1_co.paa),
            QPATHTOF(data\republic\camo2_mortar_co.paa)
        };
        // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_mortar.jpg);

        class TextureSources: TextureSources {
            class standard: standard {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\camo1_co.paa),
                    QPATHTOF(data\republic\camo2_mortar_co.paa)
                };
            };
            class standard_logo: standard_logo {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\logo\camo1_co.paa),
                    QPATHTOF(data\republic\logo\camo2_mortar_co.paa)
                };
            };
        };
    };

    class ls_vehicle_pkv5_mp: ls_vehicle_pkv5_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(mp_displayName);

        // model = QPATHTOF(ls_vehicle_pkv5_mp.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\republic\camo1_co.paa),
            QPATHTOF(data\republic\camo2_mp_co.paa)
        };
        // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_mp.jpg);

        class TextureSources: TextureSources {
            class standard: standard {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\camo1_co.paa),
                    QPATHTOF(data\republic\camo2_mp_co.paa)
                };
            };
            class standard_logo: standard_logo {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\republic\logo\camo1_co.paa),
                    QPATHTOF(data\republic\logo\camo2_mp_co.paa)
                };
            };
        };
    };

    class ls_vehicle_pkv5_imperial: ls_vehicle_pkv5 {
        author = AUTHOR;

        side = OPFOR;
        crew = "ls_imperial_army_armored";
        typicalCrew[] = {"ls_imperial_army_armored"};
        faction = "ls_imperial";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\imperial\camo1_co.paa),
            QPATHTOF(data\imperial\camo2_cannon_co.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\imperial\camo1.rvmat),
            QPATHTOF(data\imperial\camo2_cannon.rvmat)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_imperial.jpg);

        class TextureSources: TextureSources {
            class standard: standard {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\imperial\camo1_co.paa),
                    QPATHTOF(data\imperial\camo2_cannon_co.paa)
                };
            };
            class standard_logo: standard_logo {
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\imperial\logo\camo1_co.paa),
                    QPATHTOF(data\imperial\logo\camo2_cannon_co.paa)
                };
            };
        };
    };

    // class ls_vehicle_pkv5_aaa_imperial: ls_vehicle_pkv5_aaa {
    //     author = AUTHOR;

    //     side = OPFOR;
    //     crew = "ls_imperial_army_armored";
    //     typicalCrew[] = {"ls_imperial_army_armored"};
    //     faction = "ls_imperial";

    //     hiddenSelectionsTextures[] = {
    //         QPATHTOF(data\imperial\camo1_co.paa),
    //         QPATHTOF(data\imperial\camo2_aaa_co.paa)
    //     };
    //     hiddenSelectionsMaterials[] = {
    //         QPATHTOF(data\imperial\camo1.rvmat),
    //         QPATHTOF(data\imperial\camo2_aaa.rvmat)
    //     };
    //     // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_aaa_imperial.jpg);

    //     class TextureSources: TextureSources {
    //         class standard: standard {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\camo1_co.paa),
    //                 QPATHTOF(data\imperial\camo2_aaa_co.paa)
    //             };
    //         };
    //         class standard_logo: standard_logo {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\logo\camo1_co.paa),
    //                 QPATHTOF(data\imperial\logo\camo2_aaa_co.paa)
    //             };
    //         };
    //     };
    // };

    // class ls_vehicle_pkv5_mlrs_imperial: ls_vehicle_pkv5_mlrs {
    //     author = AUTHOR;

    //     side = OPFOR;
    //     crew = "ls_imperial_army_armored";
    //     typicalCrew[] = {"ls_imperial_army_armored"};
    //     faction = "ls_imperial";

    //     hiddenSelectionsTextures[] = {
    //         QPATHTOF(data\imperial\camo1_co.paa),
    //         QPATHTOF(data\imperial\camo2_mlrs_co.paa)
    //     };
    //     hiddenSelectionsMaterials[] = {
    //         QPATHTOF(data\imperial\camo1.rvmat),
    //         QPATHTOF(data\imperial\camo2_mlrs.rvmat)
    //     };
    //     // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_mlrs_imperial.jpg);

    //     class TextureSources: TextureSources {
    //         class standard: standard {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\camo1_co.paa),
    //                 QPATHTOF(data\imperial\camo2_mlrs_co.paa)
    //             };
    //         };
    //         class standard_logo: standard_logo {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\logo\camo1_co.paa),
    //                 QPATHTOF(data\imperial\logo\camo2_mlrs_co.paa)
    //             };
    //         };
    //     };
    // };

    // class ls_vehicle_pkv5_mortar_imperial: ls_vehicle_pkv5_mortar {
    //     author = AUTHOR;

    //     side = OPFOR;
    //     crew = "ls_imperial_army_armored";
    //     typicalCrew[] = {"ls_imperial_army_armored"};
    //     faction = "ls_imperial";

    //     hiddenSelectionsTextures[] = {
    //         QPATHTOF(data\imperial\camo1_co.paa),
    //         QPATHTOF(data\imperial\camo2_mortar_co.paa)
    //     };
    //     hiddenSelectionsMaterials[] = {
    //         QPATHTOF(data\imperial\camo1.rvmat),
    //         QPATHTOF(data\imperial\camo2_mortar.rvmat)
    //     };
    //     // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_mortar_imperial.jpg);

    //     class TextureSources: TextureSources {
    //         class standard: standard {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\camo1_co.paa),
    //                 QPATHTOF(data\imperial\camo2_mortar_co.paa)
    //             };
    //         };
    //         class standard_logo: standard_logo {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\logo\camo1_co.paa),
    //                 QPATHTOF(data\imperial\logo\camo2_mortar_co.paa)
    //             };
    //         };
    //     };
    // };

    // class ls_vehicle_pkv5_mp_imperial: ls_vehicle_pkv5_mp {
    //     author = AUTHOR;

    //     side = OPFOR;
    //     crew = "ls_imperial_army_armored";
    //     typicalCrew[] = {"ls_imperial_army_armored"};
    //     faction = "ls_imperial";

    //     hiddenSelectionsTextures[] = {
    //         QPATHTOF(data\imperial\camo1_co.paa),
    //         QPATHTOF(data\imperial\camo2_mp_co.paa)
    //     };
    //     hiddenSelectionsMaterials[] = {
    //         QPATHTOF(data\imperial\camo1.rvmat),
    //         QPATHTOF(data\imperial\camo2_mp.rvmat)
    //     };
    //     // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_pkv5_mp_imperial.jpg);

    //     class TextureSources: TextureSources {
    //         class standard: standard {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\camo1_co.paa),
    //                 QPATHTOF(data\imperial\camo2_mp_co.paa)
    //             };
    //         };
    //         class standard_logo: standard_logo {
    //             author = AUTHOR;
    //             textures[] = {
    //                 QPATHTOF(data\imperial\logo\camo1_co.paa),
    //                 QPATHTOF(data\imperial\logo\camo2_mp_co.paa)
    //             };
    //         };
    //     };
    // };
};
