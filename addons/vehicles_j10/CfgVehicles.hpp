class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
    };
    class StaticAAWeapon: StaticWeapon {
        class Turrets;
    };
    class StaticMGWeapon: StaticWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
            };
        };
        class AnimationSources;
    };
    class ls_vehicle_j10_base: StaticMGWeapon {
        scope = 0;
        author = AUTHOR;
        displayName = "J-10 Dual Blaster Cannon";

        picture = QPATHTOF(data\ui\j10_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\j10_icon_ca.paa);

        crew = "ls_droid_b1";
        typicalCargo[] = {"ls_droid_b1"};
        side = 0;
        editorSubcategory = "EdSubcat_Turrets";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_j10.jpg);

        class Armory {
            description = "J-10 Dual Blaster Cannon";
        };

        model = QPATHTOF(ls_turret_j10_cannon.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\camo1_co.paa)};

        UiPicture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
        cost = 150000;
        getInAction = "";
        getOutAction = "";
        armor = 30.0;
        explosionShielding = 10;
        class Damage {
            tex[] = {};
            mat[] = {
                "A3\Static_F_Gamma\data\StaticTurret_01.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_02.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_03.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"
            };
        };
        minTotalDamageThreshold = 0.5;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                // selectionFireAnim = "zasleh";
                optics = 1;
                discreteDistance[] = {
                    100, 200,
                    300, 400,
                    600, 800,
                    1000, 1200,
                    1500, 1600,
                    1700, 1800,
                    1900, 2000
                };
                discreteDistanceInitIndex = 2;
                turetInfoType = "RscOptics_crows";
                gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F.p3d";
                minElev = -15;
                maxElev = 25;
                minTurn = -180;
                maxTurn = 180;
                weapons[] = {
                    "ls_weapon_j10"
                };
                magazines[] = {
                    "ls_magazine_30mw_500Rnd_red",
                    "ls_magazine_30mw_500Rnd_red",
                    "ls_magazine_30mw_500Rnd_red",
                    "ls_magazine_30mw_500Rnd_red"
                };
                gunnerAction = "ls_gunner_j10";
                memoryPointGunnerOptics = "gunnerview";
                gunnerLeftHandAnimName = "gun";
                gunnerRightHandAnimName = "gun";
                gunnerLeftLegAnimName = "";
                gunnerRightLegAnimName = "";
                gunnerInAction = "";
                gunnerGetOutAction = "";
                GunnerName = "Gunner";
                gunnerForceOptics = 0;
                disableSountAttenuation = 1;
                ejectDeadGunner = 1;
                memoryPointsGetInGunner = "pos_gunner";
                memoryPointsGetInGunnerDir = "pos_gunner_dir";
                class ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.5;
                    minFov = 0.25;
                    maxFov = 1.25;
                    visionMode[] = {"Normal", "NVG"};
                    thermalMode[] = {0, 1};
                };
            };
        };
        soundGetOut[] = {"A3\sounds_f\dummysound.wss", 0.001, 1, 5};
        soundGetIn[] = {"A3\sounds_f\dummysound.wss", 0.00031622773, 1, 5};

        class AnimationSources: AnimationSources {
            class muzzleAlt {
                source = "ammo";
                weapon = "ls_weapon_j10";
            };
            class muzzleRot {
                source = "ammoRandom";
                weapon = "ls_weapon_j10";
            };

            class recoil_source {
                source = "reload";
                weapon = "ls_weapon_j10";
            };

            class ReloadAnim {
                source = "reloadMagazine";
                weapon = "ls_weapon_j10";
            };

        };
    };

    class ls_vehicle_j10: ls_vehicle_j10_base {
        scope = 2;
        author = AUTHOR;
        faction = "ls_cis";

        class ls_animations {
            reloaded = "ls_reload_j10_state";
        };

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "";
            magazineLocation = "_target selectionPosition 'ace interact'";
            desiredAmmo = 500;
            ammoLoadTime = 3;
            ammoUnloadTime = 0.5;
        };
    };
};
