class CfgVehicles {
    class Radar_System_01_base_F;
    class ls_vehicle_radarDish_base: Radar_System_01_base_F {
        scope = 0;
        author = AUTHOR;
        displayName = "Radar [16 km]";

        model = QPATHTOF(ls_turret_radarDish.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_radarDish.jpg);

        picture = QPATHTOF(data\ui\radarDish_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\radarDish_icon_ca.paa);

        side = 3;
        faction = "ls_civilians";
        editorSubcategory = "EdSubcat_Turrets";
        crew = "C_UAV_AI_F";
        typicalCargo[] = {"C_UAV_AI_F"};

        textureList[] = {
            "Standard", 1,
            "Desert", 0,
            "Woodland", 0
        };
        class TextureSources {
            class Standard {
                author = AUTHOR;
                displayName = "Standard";
                textures[] = {
                    QPATHTOF(data\camo1_co.paa)
                };
                factions[] = {};
            };
            class Desert: Standard {
                displayName = "Sand";
                textures[] = {
                   QPATHTOF(data\textures\desert\camo1_co.paa)
                };
            };
            class Woodland: Standard {
                displayName = "Woodland";
                textures[] = {
                    QPATHTOF(data\textures\woodland\camo1_co.paa)
                };
            };
        };
    };

    class ls_vehicle_radarDish: ls_vehicle_radarDish_base {
        scope = 2;
        author = AUTHOR;
    };

    class ls_vehicle_radarDish_desert: ls_vehicle_radarDish_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Desert Radar [16km]";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\desert\camo1_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_radarDish_desert.jpg);
    };

    class ls_vehicle_radarDish_woodland: ls_vehicle_radarDish_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Woodland Radar [16km]";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\woodland\camo1_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_radarDish_woodland.jpg);
    };

    class ls_vehicle_radarDish_blufor: ls_vehicle_radarDish {
        author = AUTHOR;
        side = BLUFOR;
        faction = "ls_gar";
        crew = "B_UAV_AI_F";
        typicalCargo[] = {"B_UAV_AI_F"};
    };
    class ls_vehicle_radarDish_desert_blufor: ls_vehicle_radarDish_desert {
        author = AUTHOR;
        side = BLUFOR;
        faction = "ls_gar";
        crew = "B_UAV_AI_F";
        typicalCargo[] = {"B_UAV_AI_F"};
    };
    class ls_vehicle_radarDish_woodland_blufor: ls_vehicle_radarDish_woodland {
        author = AUTHOR;
        side = BLUFOR;
        faction = "ls_gar";
        crew = "B_UAV_AI_F";
        typicalCargo[] = {"B_UAV_AI_F"};
    };

    class ls_vehicle_radarDish_opfor: ls_vehicle_radarDish {
        author = AUTHOR;
        side = OPFOR;
        faction = "ls_cis";
        crew = "O_UAV_AI_F";
        typicalCargo[] = {"O_UAV_AI_F"};
    };
    class ls_vehicle_radarDish_desert_opfor: ls_vehicle_radarDish_desert {
        author = AUTHOR;
        side = OPFOR;
        faction = "ls_cis";
        crew = "O_UAV_AI_F";
        typicalCargo[] = {"O_UAV_AI_F"};
    };
    class ls_vehicle_radarDish_woodland_opfor: ls_vehicle_radarDish_woodland {
        author = AUTHOR;
        side = OPFOR;
        faction = "ls_cis";
        crew = "O_UAV_AI_F";
        typicalCargo[] = {"O_UAV_AI_F"};
    };

    class ls_vehicle_radarDish_independent: ls_vehicle_radarDish {
        author = AUTHOR;
        side = INDFOR;
        faction = "ls_mercenaries";
        crew = "I_UAV_AI_F";
        typicalCargo[] = {"I_UAV_AI_F"};
    };
    class ls_vehicle_radarDish_desert_independent: ls_vehicle_radarDish_desert {
        author = AUTHOR;
        side = INDFOR;
        faction = "ls_mercenaries";
        crew = "I_UAV_AI_F";
        typicalCargo[] = {"I_UAV_AI_F"};
    };
    class ls_vehicle_radarDish_woodland_independent: ls_vehicle_radarDish_woodland {
        author = AUTHOR;
        side = INDFOR;
        faction = "ls_mercenaries";
        crew = "I_UAV_AI_F";
        typicalCargo[] = {"I_UAV_AI_F"};
    };
};
