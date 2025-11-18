class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class HitPoints;
        class NewTurret;
    };
    class Tank_F: Tank {
        class AnimationSources;
        class ViewOptics;
        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
        };
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class Sounds;
    };
    class ls_vehicle_aat_base: Tank_F {
        scope = 0;
        author = AUTHOR;
        displayname = "Armored Assault Tank";
        model = QPATHTOF(ls_vehicle_aat.p3d);
        picture = QPATHTOF(data\ui\aat_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\aat_icon_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_aat.jpg);
        side = 0;
        faction = "ls_cis";
        editorSubcategory = "ls_edsubcat_repulsorLiftArmor";
        cost = 1500000;
        threat[] = {0.8, 1, 0.3};


        driver = "ls_droid_b1_crew";
        crew = "ls_droid_b1_crew";
        typicalCargo[] = {"ls_droid_b1_crew"};

        driverAction = "driver_apcwheeled2_out";
        driverInAction = "driver_apcwheeled2_in";
        viewDriverInExternal = 1;

        selectionFireAnim = "zasleh4";
        proxytype = "CPDriver";
        proxyIndex = 1;
        forcehideDriver = 1;
        DriverForceOptics = 1;
        weapons[] = {
            "ls_gmg_40mm"
        };
        magazines[] = {
            "ls_magazine_40mm_50Rnd_G_red",
            "ls_magazine_40mm_50Rnd_G_red"
        };
        memoryPointGun[] = {
            "gun_driver_l",
            "gun_driver_r"
        };
        memorypointLRocket = "rocketl";
        memorypointRRocket = "rocketr";
        memorypointLmissile = "rocketl";
        memorypointRmissile = "rocketr";

        insideSoundCoef = 0.89999998;

        // Potential water "hover"/amphibious effects
        // Currently, the AAT floats, but it does not move
        // Need to look into potential rudder/engine formats
        canFloat = 1;
        waterLeakiness = 2.5;
        waterAngularDampingCoef = 4;
        waterLinearDampingCoefY = 4;
        waterLinearDampingCoefX = 4;
        waterLinearDampingCoefZ = 4;
        engineShiftY = 1.2;
        rudderForceCoef = 100;
        rudderForceCoefAtMaxSpeed = 100;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0;
        waterSpeedFactor = 3000;
        maxFordingDepth = 0.5;
        waterResistance = 1;
        turnCoef = 0.5;
        engineEffectSpeed = 5;

        damageResistance = 0.02;
        crewVulnerable = 1;
        armor = 500;
        armorStructural = 6;
        #include "cfg\HitPoints.hpp"

        #include "cfg\PhysX.hpp"
        #include "cfg\Turrets.hpp"
        #include "cfg\Sounds.hpp"

        class RenderTargets {};
        class Reflectors {};

        class AnimationSources: AnimationSources {
            class recoil_source {
                source = "reload";
                weapon = "ls_cannon_120mm";
            };
        };

        hiddenSelections[] = {
            "body1",
            "body2",
            "gun"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body1_co.paa),
            QPATHTOF(data\body2_co.paa),
            QPATHTOF(data\gun_co.paa)
        };

        textureList[] = {
            "TradeFederation", 1,
            "CIS", 1,
            "Blue", 1,
            "Red", 0,
            "Green", 0,
            "Black", 0,
            "Winter", 0
        };
        class TextureSources {
            class TradeFederation {
                displayname = "Trade Federation";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\body1_co.paa),
                    QPATHTOF(data\body2_co.paa),
                    QPATHTOF(data\gun_co.paa)
                };
                factions[] = {};
            };

            class CIS: TradeFederation {
                displayname = "CIS";
                textures[] = {
                    QPATHTOF(data\textures\cis\body1_co.paa),
                    QPATHTOF(data\textures\cis\body2_co.paa),
                    QPATHTOF(data\textures\cis\gun_co.paa)
                };
            };

            class Red: TradeFederation {
                displayname = "CIS Red";
                textures[] = {
                    QPATHTOF(data\textures\red\body1_co.paa),
                    QPATHTOF(data\textures\red\body2_co.paa),
                    QPATHTOF(data\textures\red\gun_co.paa)
                };
            };

            class Green: TradeFederation {
                displayname = "CIS Green";
                textures[] = {
                    QPATHTOF(data\textures\green\body1_co.paa),
                    QPATHTOF(data\textures\green\body2_co.paa),
                    QPATHTOF(data\textures\green\gun_co.paa)
                };
            };

            class Black: TradeFederation {
                displayname = "CIS Black";
                textures[] = {
                    QPATHTOF(data\textures\black\body1_co.paa),
                    QPATHTOF(data\textures\black\body2_co.paa),
                    QPATHTOF(data\textures\black\gun_co.paa)
                };
            };

            class Winter: TradeFederation {
                displayname = "CIS Winter";
                textures[] = {
                    QPATHTOF(data\textures\winter\body1_co.paa),
                    QPATHTOF(data\textures\winter\body2_co.paa),
                    QPATHTOF(data\textures\winter\gun_co.paa)
                };
            };
        };
    };

    class ls_vehicle_aat: ls_vehicle_aat_base {
        scope = 2;
        author = AUTHOR;
        displayname = "AAT (Trade Federation)";
    };

    AAT_VARIANT(Red,red); // 1st param is used in displayName, 2nd param for class/file paths
    AAT_VARIANT(Green,green);
    AAT_VARIANT(Black,black);
    AAT_VARIANT(CIS,cis);
    AAT_VARIANT(Winter,winter);

    class ls_wreck_base;
    class ls_vehicle_aat_wreck: ls_wreck_base {
        scope = 2;
        author = AUTHOR;
        displayname = "AAT";
        model = QPATHTOF(ls_vehicle_aat_wreck.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_aat_wreck.jpg);
    };

    // Deprecated classes
    DEPRECATED(ls_ground_aat,ls_vehicle_aat);
    DEPRECATED(ls_ground_aat_red,ls_vehicle_aat_red);
    DEPRECATED(ls_ground_aat_green,ls_vehicle_aat_green);
    DEPRECATED(ls_ground_aat_black,ls_vehicle_aat_black);
    DEPRECATED(ls_ground_aat_blue,ls_vehicle_aat_cis);
    DEPRECATED(ls_ground_aat_winter,ls_vehicle_aat_winter);
    DEPRECATED(ls_ground_aat_wreck,ls_vehicle_aat_wreck);
};
