class CfgVehicles {
    class StaticMGWeapon;
    class HMG_01_base_F: StaticMGWeapon {
        class Turrets;
    };
    class HMG_01_A_base_F: HMG_01_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_HMG_01_A_F: HMG_01_A_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
            };
        };
    };
    class ls_vehicle_turretDroid_base: B_HMG_01_A_F {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(displayName);

        icon = QPATHTOF(data\ui\turretDroid_icon_ca.paa);
        picture = QPATHTOF(data\ui\turretDroid_icon_side_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_turretDroid.jpg);

        extCameraPosition[] = {0, 0.5, -3};

        model = QPATHTOF(ls_turret_turretDroid.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\camo1_co.paa)};

        armor = 30;
        explosionShielding = 1;
        class HitPoints {
            class HitBody {
                simulation = "Default";
                armorComponent = "body";
                name = "body_point";
                armor = 1;
                material = -1;
                passThrough = 1;
                visual = "body";
                radius = 0.25;
            };
        };

        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(data\camo1.rvmat),
                QPATHTOF2(data\camo1_damage.rvmat),
                QPATHTOF2(data\camo1_destruct.rvmat)
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                selectionFireAnim = "zasleh";
                gunnerForceOptics = 1;
                memoryPointGun[] = {"usti hlavne", "usti hlavne 2"};

                minElev = -10;
                maxElev = 10;
                minTurn = -90;
                maxTurn = 90;

                maxHorizontalRotSpeed = 2;
                maxVerticalRotSpeed = 2;

                weapons[] = {"ls_weapon_hmg_65x39"};
                magazines[] = {ITEM_3("ls_magazine_65x39_250Rnd_red")};

                class HitPoints {
                    class HitGun {
                        simulation = "Default";
                        armorComponent = "gun";
                        name = "gun_point";
                        armor = 0.6;
                        material = -1;
                        passThrough = 0;
                        visual = "gun";
                        radius = 0.25;

                        class DestructionEffects {
                            class Smoke {
                                simulation = "particles";
                                type = "WeaponWreckSmoke";
                                position = "destructionEffect";
                                intensity = 1;
                                interval = 1;
                                lifeTime = 5;
                            };
                        };
                    };
                    class HitTurret: HitGun {
                        armor = 0.8;
                        armorComponent = "turret";
                        name = "turret_point";
                        visual = "turret";
                    };
                };

                turretInfoType = "RscOptics_crows";
                gunnerOpticsModel = "\A3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F.p3d";

                class ViewOptics: ViewOptics {
                    initFov = 0.5;
                    maxFov = 0.5;
                    minFov = 0.029;

                    minElev = -10;
                    maxElev = 10;
                    minTurn = -90;
                    maxTurn = 90;
                    visionMode[] = {"Normal", "NVG"};
                    thermalMode[] = {0, 1};
                };
            };
        };

        class AnimationSources {
            class muzzle_source_translate {
                source = "ammo";
                weapon = "ls_weapon_hmg_65x39";
            };
            class recoil_source {
                source = "reload";
                weapon = "ls_weapon_hmg_65x39";
            };
        };

        class assembleInfo {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {};
            primary = 0;
        };

        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteHeightLimit = 50;
            };
        };
    };

    class ls_vehicle_turretDroid_gar: ls_vehicle_turretDroid_base {
        scope = 2;
        author = AUTHOR;
        faction = "ls_gar";
    };

    class ls_vehicle_turretDroid_cis: ls_vehicle_turretDroid_base {
        scope = 2;
        author = AUTHOR;
        side = OPFOR;
        faction = "ls_cis";
        crew = "O_UAV_AI";
    };
};
