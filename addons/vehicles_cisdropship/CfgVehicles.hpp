class CfgVehicles {
    class Plane_Base_F;
    class VTOL_Base_F: Plane_Base_F {
        class HitPoints;
    };
    class ls_vehicle_cisDropship_base: VTOL_Base_F {
        scope = 0;
        scopeCurator = 0; // Vanilla has scopeCurator defined
        author = AUTHOR;
        displayName = "Dropship (WIP)";

        picture = QPATHTOF(data\ui\cisDropship_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\cisDropship_icon_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_cisDropship.jpg);

        side = OPFOR;
        faction = "ls_cis";
        editorSubcategory = "EdSubcat_Helicopters";
        crew = "ls_droid_b1_pilot";
        typicalCargo[] = {"ls_droid_b1_pilot"};

        driverAction = "Plane_Fighter_03_pilot";
        getInRadius = 25;
        maxSpeed = 700;
        vtol = 4;
        simulation = "airplaneX";
        castDriverShadow = 0;
        driverIsCommander = 1;
        driverForceOptics = 1;
        unitInfoType = "RscOptics_CAS_Pilot";
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        driverOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
        gearDownTime = 7;
        gearUpTime = 4;
        gearsUpFrictionCoef = 0.5;
        gearRetracting = 1;
        lightOnGear = 0;

        memoryPointCM[] = {"flare_launcher_1", "flare_launcher_2"};
        memoryPointCMDir[] = {"flare_launcher_1_dir", "flare_launcher_2_dir"};
        memoryPointDriverOptics = "driverview";
        memoryPointsGetInDriver = "pos_driver";
        memoryPointsGetInDriverDir = "pos_driver_dir";

        model = QPATHTOF(ls_vehicle_cisDropship.p3d);
        hiddenSelections[] = {"fronthull", "backhull", "auxillary", "detail", "gear"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\fronthull_co.paa),
            QPATHTOF(data\backhull_co.paa),
            QPATHTOF(data\auxillary_co.paa),
            QPATHTOF(data\detail_co.paa),
            QPATHTOF(data\gear_co.paa)
        };

        weapons[] = {"CMFlareLauncher_Triples"};
        magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
        class Turrets {};

        class Exhausts {
            class Exhaust1 {
                direction = "Exhaust_1_dir";
                effect = "ExhaustsEffectVTOL1HP";
                engineIndex = 0;
                position = "Exhaust_1";
            };
            class Exhaust2: Exhaust1 {
                direction = "Exhaust_2_dir";
                engineIndex = 1;
                position = "Exhaust_2";
            };
            class Exhaust3: Exhaust1 {
                direction = "Exhaust_3_dir";
                engineIndex = 2;
                position = "Exhaust_3";
            };
            class Exhaust4: Exhaust1 {
                direction = "Exhaust_4_dir";
                engineIndex = 3;
                position = "Exhaust_4";
            };
            class Exhaust5: Exhaust1 {
                direction = "Exhaust_5_dir";
                engineIndex = 4;
                position = "Exhaust_5";
            };
            class Exhaust6: Exhaust1 {
                direction = "Exhaust_6_dir";
                engineIndex = 5;
                position = "Exhaust_6";
            };
        };

        class VehicleTransport {
            class Carrier {
                cargoBayDimensions[] = {"VTV_limit_1", "VTV_limit_2"};
                disableHeightLimit = 1;
                maxLoadMass = 2000000000;
                cargoAlignment[] = {"front", "left"};
                cargoSpacing[] = { 0, 0.15, 0 };
                exits[] = {"VTV_exit_1", "VTV_exit_2"};
                unloadingInterval = 2;
                loadingDistance = 10;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 50;
            };
        };

        class Reflectors {
            class Light_1 {
                ambient[] = {70, 75, 100};
                color[] = {7000, 7500, 10000};
                coneFadeCoef = 10;
                dayLight = 0;
                direction = "Light_1_dir";
                flareMaxDistance = 250;
                flareSize = 10;
                hitpoint = "Light_1_hit";
                innerAngle = 5;
                intensity = 50;
                outerAngle = 65;
                position = "Light_1_pos";
                selection = "Light_1_hide";
                size = 1;
                useFlare = 1;

                class Attenuation {
                    constant = 0;
                    hardLimitEnd = 200;
                    hardLimitStart = 100;
                    linear = 1;
                    quadratic = 1;
                    start = 0;
                };
            };
            class Light_2: Light_1 {
                direction = "Light_2_dir";
                hitpoint = "Light_2_hit";
                position = "Light_2_pos";
                selection = "Light_2_hide";
            };
            class Light_3: Light_1 {
                direction = "Light_3_dir";
                hitpoint = "Light_3_hit";
                position = "Light_3_pos";
                selection = "Light_3_hide";
            };
            class Light_4: Light_1 {
                direction = "Light_4_dir";
                hitpoint = "Light_4_hit";
                position = "Light_4_pos";
                selection = "Light_4_hide";
            };
            class Light_5: Light_1 {
                direction = "Light_5_dir";
                hitpoint = "Light_5_hit";
                position = "Light_5_pos";
                selection = "Light_5_hide";
            };
            class Light_6: Light_1 {
                direction = "Light_6_dir";
                hitpoint = "Light_6_hit";
                position = "Light_6_pos";
                selection = "Light_6_hide";
            };
            class Light_7: Light_1 {
                direction = "Light_7_dir";
                hitpoint = "Light_7_hit";
                position = "Light_7_pos";
                selection = "Light_7_hide";
            };
            class Light_8: Light_1 {
                direction = "Light_8_dir";
                hitpoint = "Light_8_hit";
                position = "Light_8_pos";
                selection = "Light_8_hide";
            };
        };

        textureList[] = {"Standard", 1};
        class TextureSources {
            class Standard {
                author = AUTHOR;
                displayName = "Standard";
                textures[] = {
                    QPATHTOF(data\fronthull_co.paa),
                    QPATHTOF(data\backhull_co.paa),
                    QPATHTOF(data\auxillary_co.paa),
                    QPATHTOF(data\detail_co.paa),
                    QPATHTOF(data\gear_co.paa)
                };
                factions[] = {};
            };
        };

        #include "cfg\HitPoints.hpp"
        #include "cfg\Sounds.hpp"
        #include "cfg\PhysX.hpp"
    };

    class ls_vehicle_cisDropship: ls_vehicle_cisDropship_base {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
    };
};
