class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets;
    };
    class StaticMGWeapon: StaticWeapon {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class HMG_02_base_F: StaticMGWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
            };
        };
    };
    class ls_vehicle_mrbc_base: HMG_02_base_F {
        scope = 0;
        author = AUTHOR;
        displayName = "MRBC MK-I";

        side = 1;
        faction = "ls_gar";
        editorSubcategory = "EdSubcat_Turrets";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mrbc.jpg);

        model = QPATHTOF(ls_turret_mrbc.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };

        picture = QPATHTOF(data\ui\mrbc_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\mrbc_icon_ca.paa);

        explosionShielding = 10;
        soundGetOut[] = {"A3\sounds_f\dummysound.wss", 0.001, 1, 5};
        soundGetIn[] = {"A3\sounds_f\dummysound.wss", 0.00031622773, 1, 5};

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                selectionFireAnim = "zasleh";
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
                    "ls_weapon_mrbc"
                };
                magazines[] = {
                    "ls_magazine_30mw_500Rnd_blue",
                    "ls_magazine_30mw_500Rnd_blue",
                    "ls_magazine_30mw_500Rnd_blue",
                    "ls_magazine_30mw_500Rnd_blue"
                };
                gunnerAction = "ls_gunner_mrbc";
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

        class AnimationSources {
            class revolving {
                source = "revolving";
                weapon = "ls_weapon_mrbc";
            };
        };

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ls_weapon_mrbc_proxy";
            magazineLocation = "_target selectionPosition 'usti hlavne'";
            disassembleWeapon = "ls_launcher_mrbc_carry";
            disassembleTurret = "";
            ammoLoadTime = 3;
            ammoUnloadTime = 3;
            desiredAmmo = 500;
        };
    };

    class ls_vehicle_mrbc: ls_vehicle_mrbc_base {
        scope = 2;
        author = AUTHOR;
        // editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mrbc.jpg);
        crew = "ls_clone_phase2_rifleman";
        typicalCargo[] = {"ls_clone_phase2_rifleman"};

        class assembleInfo {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {"ls_backpack_mrbc"};
            primary = 1;
        };
    };

    class Weapon_Bag_Base;
    class ls_backpack_mrbc: Weapon_Bag_Base {
        scope = 2;
        author = AUTHOR;
        displayName = "Folded MRBC MK-I";

        model = QPATHTOF(ls_turret_mrbc_backpack.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOF(data\ui\mrbc_backpack_ui_ca.paa);

        editorCategory = "ls_edcat_groundholders";

        class assembleInfo {
            assembleTo = "ls_vehicle_mrbc";
            base = "";
            displayName = "MRBC MK-I";
            dissasembleTo[] = {};
            primary = 1;
        };
    };

    class HMG_01_base_F: StaticMGWeapon {
        class Turrets;
    };
    class HMG_01_A_base_F: HMG_01_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class ls_vehicle_autoTurret_base: HMG_01_A_base_F {
        scope = 0;
        author = AUTHOR;
        displayname = "Auto Defense Turret";

        side = 0;

        model = QPATHTOF(ls_turret_autoturret.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_autoTurret.jpg);
        picture = QPATHTOF(data\ui\autoTurret_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\autoTurret_icon_ca.paa);

        class DestructionEffects {
            class ImpactSparks1 {
                simulation = "particles";
                type = "ls_sparks_1";
                position = "telo";
                intensity = 1;
                interval = 1;
                lifeTime = 0.1;
            };
            class ImpactSparks2: ImpactSparks1 {
                type = "ls_sparks_2";
            };
            class smoke: ImpactSparks1 {
                type = "WeaponWreckSmoke";
            };
        };

        class AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "ls_weapon_autoTurret_mg";
            };
            class muzzleflash {
                source = "reload";
                weapon = "ls_weapon_autoTurret_mg";
            };
            class muzzle_source_rot {
                source = "ammorandom";
                weapon = "ls_weapon_autoTurret_mg";
            };
            class revolving {
                source = "revolving";
                weapon = "ls_weapon_autoTurret_mg";
            };
        };
        class GunParticles {};

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minElev = -40;
                maxElev = 40;
                minTurn = -360;
                maxTurn = 360;
                soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner.wss",0.316228,1,30};
                soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical.wss",0.316228,1,30};
                selectionFireAnim = "zasleh";
                weapons[] = {
                    "ls_weapon_autoTurret_mg"
                };
                magazines[] = {
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red",
                    "ls_magazine_autoTurretMG_120Rnd_red"
                };
                class HitPoints {
                    class HitGun {
                        armor = 0.3;
                        material = -1;
                        name = "gun";
                        visual = "camo1";
                        passThrough = 1;
                        radius = 0.3;
                    };

                    class HitTurret: HitGun {
                        name = "turret";
                        armor = 0.3;
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(data\autoturret\camo1.rvmat),
                "A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
                "A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
            };
            forceInGarage = 1;
        };
    };
    class ls_vehicle_autoTurret_orsf: ls_vehicle_autoTurret_base {
        scope = 2;
        author = AUTHOR;

        side = 1;
        faction = "ls_osrf";
        crew = "B_UAV_AI_F";
    };
    class ls_vehicle_autoTurret_pirate: ls_vehicle_autoTurret_base {
        scope = 2;
        author = AUTHOR;

        faction = "ls_pirates";
        crew = "O_UAV_AI_F";
    };
    class ls_vehicle_autoTurret_mercenary: ls_vehicle_autoTurret_base {
        scope = 2;
        author = AUTHOR;

        side = 2;
        faction = "ls_mercenaries";
        crew = "I_UAV_AI_F";
    };
    class ls_vehicle_autoTurret_civilian: ls_vehicle_autoTurret_base {
        scope = 2;
        author = AUTHOR;

        side = 3;
        faction = "ls_civilians";
        crew = "C_UAV_AI_F";
    };

    class ls_vehicle_autoTurret_cqc_base: ls_vehicle_autoTurret_base {
        scope = 0;
        author = AUTHOR;
        displayname = "Auto Defense Turret (CQC)";

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"ls_weapon_autoTurret_cqc"};
                magazines[] = {
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red",
                    "ls_magazine_autoTurretCQC_15Rnd_red"
                };
            };
        };
        class AnimationSources: AnimationSources {
            class muzzle_source: muzzle_source {
                weapon = "ls_weapon_autoTurret_cqc";
            };
            class muzzleflash: muzzleflash {
                weapon = "ls_weapon_autoTurret_cqc";
            };
            class muzzle_source_rot: muzzle_source_rot {
                weapon = "ls_weapon_autoTurret_cqc";
            };
            class revolving: revolving {
                weapon = "ls_weapon_autoTurret_cqc";
            };
        };
    };
    class ls_vehicle_autoTurret_orsf_cqc: ls_vehicle_autoTurret_cqc_base {
        scope = 2;
        author = AUTHOR;

        side = 1;
        faction = "ls_osrf";
        crew = "B_UAV_AI_F";
    };
    class ls_vehicle_autoTurret_pirate_cqc: ls_vehicle_autoTurret_cqc_base {
        scope = 2;
        author = AUTHOR;

        side = 0;
        faction = "ls_pirates";
        crew = "O_UAV_AI_F";
    };
    class ls_vehicle_autoTurret_mercenary_cqc: ls_vehicle_autoTurret_cqc_base {
        scope = 2;
        author = AUTHOR;

        side = 2;
        faction = "ls_mercenaries";
        crew = "I_UAV_AI_F";
    };
    class ls_vehicle_autoTurret_civilian_cqc: ls_vehicle_autoTurret_cqc_base {
        scope = 2;
        author = AUTHOR;

        side = 3;
        faction = "ls_civilians";
        crew = "C_UAV_AI_F";
    };
};
