class CfgVehicles {
    class House_F;
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
    class ls_vehicle_mtt_base: Tank_F {
        scope = 0;
        author = AUTHOR;

        displayname = "Multi-Troop Transport";
        driver = "ls_droid_b1_crew";
        crew = "ls_droid_b1_crew";
        availableForSupportTypes[] = {
            "Transport"
        };
        typicalCargo[] = {
            "ls_droid_b1_crew"
        };
        hiddenselections[] = {
            "body1",
            "body2",
            "door"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body1_co.paa),
            QPATHTOF(data\body2_co.paa),
            QPATHTOF(data\door_co.paa)
        };
        cost = 1500000;
        model = QPATHTOF(ls_vehicle_mtt.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mtt_cis.jpg);
        picture = QPATHTOF(data\ui\mtt_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\mtt_icon_ca.paa);
        side = 0;
        faction = "ls_cis";
        editorSubcategory = "ls_edsubcat_repulsorliftarmor";
        insideSoundCoef = 0.89999998;
        threat[] = {0.80000001, 1, 0.30000001};
        damageResistance = 0.02;
        crewVulnerable = 1;
        armor = 1000;
        armorStructural = 6;
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
        extCameraPosition[] = {0,10,-23};

        cargoGetInAction[] = {
            "GetInLow"
        };
        cargoGetOutAction[] = {
            "GetOutLow"
        };
        transportSoldier = 36;
        cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
        cargoactions[] =
        {
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
            "apctracked2_slot1_in",
        };


        #include "cfg\PhysX.hpp"
        #include "cfg\Turrets.hpp"
        #include "cfg\Sounds.hpp"

        driverAction = "driver_apcwheeled2_out";
        driverInAction = "driver_apcwheeled2_in";
        viewDriverInExternal = 1;
        selectionFireAnim = "zasleh4";
        proxytype = "CPDriver";
        proxyIndex = 1;
        forcehideDriver = 1;
        DriverForceOptics = 1;
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
        memoryPointsGetInCargo = "pos_cargo";
        memoryPointsGetInCargoDir = "pos_cargo_dir";
        memoryPointsGetInCargoPrecise[] = {
            "pos_cargo"
        };

        #include "cfg\Exhausts.hpp"

        class Reflectors {};
        class RenderTargets {};

        textureList[] = {
            "CIS", 1,
            "TradeFederation", 0
        };
        class TextureSources {
            class CIS {
                displayname = "CIS";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(data\body1_co.paa),
                    QPATHTOF(data\body2_co.paa),
                    QPATHTOF(data\door_co.paa)
                };
                factions[] = {
                    "ls_cis"
                };
            };

            class TradeFederation: CIS {
                displayname = "Trade Federation";
                textures[] = {
                    QPATHTOF(data\federation\body1_co.paa),
                    QPATHTOF(data\federation\body2_co.paa),
                    QPATHTOF(data\federation\door_co.paa)
                };
            };
        };
    };

    class ls_vehicle_mtt_cis: ls_vehicle_mtt_base {
        scope = 2;
        author = AUTHOR;
        displayname = "Multi-Troop Transport (CIS)";
    };

    class ls_vehicle_mtt_federation: ls_vehicle_mtt_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Multi-Troop Transport (Federation)";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mtt_federation.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\federation\body1_co.paa),
            QPATHTOF(data\federation\body2_co.paa),
            QPATHTOF(data\federation\door_co.paa)
        };
    };

    class ls_staticVehicle_base;
    class ls_vehicle_mtt_cis_static: ls_staticVehicle_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Multi Troop Transport (CIS)";
        model = QPATHTOF(ls_vehicle_mtt_static.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mtt_cis.jpg);
        vehicleClass = "Structures";
        hiddenselections[] = {
            "body1",
            "body2",
            "door"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\body1_co.paa),
            QPATHTOF(data\body2_co.paa),
            QPATHTOF(data\door_co.paa)
        };
    };

    class ls_vehicle_mtt_federation_static: ls_vehicle_mtt_cis_static {
        author = AUTHOR;
        displayName = "Multi Troop Transport (Trade Federation)";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mtt_federation.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\federation\body1_co.paa),
            QPATHTOF(data\federation\body2_co.paa),
            QPATHTOF(data\federation\door_co.paa)
        };
    };

    class ls_wreck_base;
    class ls_vehicle_mtt_wreck: ls_wreck_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Multi-Troop Transport";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mtt_wreck.jpg);
        model = QPATHTOF(ls_vehicle_mtt_wreck.p3d);
    };

    DEPRECATED(ls_ground_mttCIS_static,ls_vehicle_mtt_cis_static);
    DEPRECATED(ls_ground_mttFederation_static,ls_vehicle_mtt_federation_static);
};
