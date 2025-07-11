class Turrets: Turrets {
    class MainTurret: MainTurret {
        class Turrets: Turrets {
            class CommanderOptics: CommanderOptics {
                body = "side_turret_l";
                gun = "side_gun_l";
                proxyIndex = 4;
                viewGunnerInExternal = 0;
                proxytype = "CPCommander";
                gunnername = "Commander";
                animationSourceBody = "ObsTurret";
                animationSourceGun = "ObsGun";
                minElev = -20;
                maxElev = 30;
                minTurn = -25;
                maxTurn = 25;
                initElev = 0;
                initTurn = 0;

                minOutElev = -25;
                maxOutElev = 45;
                initOutElev = 0;
                minOutTurn = -90;
                maxOutTurn = 90;
                initOutTurn = 0;

                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.8;
                stabilizedInAxes = 3;
                soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best.wss", 0.01, 1, 50};
                gunnerAction = "";
                gunnerInAction = "mbt2_slot2b_in";
                forceHideGunner = 0;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                gunnerRightHandAnimName = "";
                gunnerLeftHandAnimName = "";
                soundAttenuationTurret = "HeliAttenuationGunner";
                isPersonTurret = 1;
                personTurretAction = "vehicle_turnout_1";
                memoryPointGun[] = {
                    "konec_hlavne_1",
                    "konec_hlavne_2"
                };
                weapons[] = {"ls_lmg_127"};
                magazines[] = {"ls_magazine_127x99_500Rnd_red", "ls_magazine_127x99_500Rnd_red"};
                turretInfoType = "RscWeaponRangeZeroing";
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
                discreteDistanceInitIndex = 2;
                memoryPointGunnerOptics = "commanderview";
                memoryPointGunnerOutOptics = "commanderview";
                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
                gunnerOutOpticsModel = "";
                gunnerOpticsEffect[] = {};
                gunnerHasFlares = 1;
                turretfollowfreelook = 1;
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                startEngine = 0;
                // Turned out gunner should take damage, need to look into the issue
                LODTurnedOut = "VIEW_GUNNER";
                LODTurnedIn = "VIEW_GUNNER";
                selectionFireAnim = "";
                // gunBeg[] = {
                //     "konec_hlavne_1",
                //     "konec_hlavne_2"
                // };
                // gunEnd[] = {
                //     "usti_hlavne_1",
                //     "usti_hlavne_2"
                // };

                class OpticsIn  {
                    class Wide: ViewOptics {
                        initAngleX = 0;
                        minAngleX = -8;
                        maxAngleX = 8;
                        initAngleY = 0;
                        minAngleY = -45;
                        maxAngleY = 80;
                        initFov = 0.3;
                        minFov = 0.3;
                        maxFov = 0.3;
                        visionMode[] = {"Normal", "TI"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
                        gunnerOpticsEffect[] = {};
                    };
                };

                class HitPoints {
                    class HitTurret {
                        armor = 0.8;
                        material = -1;
                        name = "gunner_turret_hit";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.02;
                        explosionShielding = 0.3;
                        radius = 0.25;
                    };

                    class HitGun {
                        armor = 0.3;
                        material = -1;
                        name = "gunner_turret_hit";
                        visual = "";
                        passThrough = 0;
                        minimalHit = 0;
                        explosionShielding = 1;
                        radius = 0.25;
                    };
                };

                class Damage {
                    tex[] = {};
                    mat[] = {
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat",
                        "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat"
                    };
                };
            };
        };
        // Main gun
        // gunBeg = "usti hlavne";
        // gunEnd = "konec hlavne";
        //memoryPointGun[] = {"turret_l", "turret_r"};
        proxyIndex = 2;
        // Weapons and magazines
        weapons[] = {"ls_cannon_120mm"};
        magazines[] = {
            "ls_magazine_120mm_30Rnd_HE_red",
            "ls_magazine_120mm_30Rnd_HE_red",
            "ls_magazine_120mm_30Rnd_APFSDS_red",
            "ls_magazine_120mm_30Rnd_APFSDS_red",
            "ls_magazine_120mm_30Rnd_APFSDS_red"
        };
        // Turret servos
        minElev = -5;
        maxElev = 30;
        initElev = 10;
        minTurn = -360;
        maxTurn = 360;
        soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best.wss", "db-40", 1.0, 50};
        // FCS
        turretInfoType = "RscWeaponRangeZeroing";
        discreteDistance[] = {
            100, 200, 300, 400, 500, 600, 700, 800,
            900, 1000, 1100, 1200, 1300, 1400, 1500, 1600,
            1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400
        };
        discreteDistanceInitIndex = 5; // start at 600 meters
        // Optics view
        memoryPointGunnerOptics= "gunnerview";
        gunnerOutOpticsModel = "";
        gunnerOutOpticsEffect[] = {};
        gunnerOpticsEffect[] = {};
        gunnerForceOptics = 1;
        // Field of view values: 1 = 120°
        class OpticsIn {
            class Wide: ViewOptics {
                initAngleX = 0;
                minAngleX = -30;
                maxAngleX = 30;
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
        // Gunner operations and animations
        gunnerAction = "mbt2_slot2a_out";
        gunnerInAction = "mbt2_slot2a_in";
        forceHideGunner = 0;
        inGunnerMayFire = 1; // set to 0 to let gunner look around the internal compartment if modeled
        viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.

        class HitPoints {
            class HitTurret {
                armor = 0.8;
                material = -1;
                name = "main_turret_hit";
                visual = "vez";
                passThrough = 0;
                minimalHit = 0.02;
                explosionShielding = 0.3;
                radius = 0.25;
            };
            class HitGun {
                armor = 0.3;
                material = -1;
                name = "main_gun_hit";
                visual = "";
                passThrough = 0;
                minimalHit = 0;
                explosionShielding = 1;
                radius = 0.25;
            };
        };
    };
};
