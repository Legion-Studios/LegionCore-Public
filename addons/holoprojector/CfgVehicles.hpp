class CfgVehicles {
    class House_small_F;
    class GVAR(base): House_small_F {
        scope = 0;
        scopeCurator = 0; // House_F (annoyingly) defines scopeCurator
        author = AUTHOR;

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_holoprojectors";

        GVAR(height) = HEIGHT_DEFAULT;
        GVAR(mapScale) = 1;

        armor = 500;
        armorLights = 1;
        isLockingDisabled = 1; // disables locking onto this object

        XEH_ENABLED;
    };

    class GVAR(bountyPuck_static): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Holoprojector Map";

        GVAR(height) = 0.5;

        model = QPATHTOF(bountyPuck\GVAR(bountyPuck).p3d);
        hiddenSelections[] = {
            "body",
            "glow"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(bountyPuck\data\body_co.paa),
            QPATHTOF(bountyPuck\data\glow_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\GVAR(bountyPuck_static).jpg);
    };

    class GVAR(table_circle): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Holotable (Circular)";

        GVAR(mapScale) = 2;

        model = QPATHTOF(holotable\GVAR(table_circle).p3d);
        hiddenSelections[] = {
            "body",
            "lights",
            "holo"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(holotable\data\circle\body_co.paa),
            QPATHTOF(holotable\data\circle\lights_co.paa),
            QPATHTOF(holotable\data\circle\holo_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\GVAR(table_circle).jpg);

        class MarkerLights {
            class Light_1 {
                color[] = {0.3, 0.3, 1};
                ambient[] = {0, 0, 0.09};
                intensity = 1000;
                name = "Light_pos";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = 0;
                activeLight = 1;
                blinking = 0;
                dayLight = 0;
                drawLight = 0;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 0.2;
                    hardLimitStart = 2;
                    hardLimitEnd = 5;
                };
            };
        };
    };

    class GVAR(table_rectangle): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Holotable (Rectangular)";

        GVAR(height) = 1.2;
        GVAR(mapScale) = 2;

        model = QPATHTOF(holotable\GVAR(table_rectangle).p3d);
        hiddenSelections[] = {
            "body",
            "holo"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(holotable\data\rectangle\body_co.paa),
            QPATHTOF(holotable\data\rectangle\holo_co.paa)
        };
        editorPreview = QPATHTOF(data\ui\editorPreviews\GVAR(table_rectangle).jpg);

        class MarkerLights {
            class Light_1 {
                color[] = {0.3, 0.3, 0.7};
                ambient[] = {0, 0, 0.09};
                intensity = 1000;
                name = "Light_1_pos";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = 0;
                activeLight = 1;
                blinking = 0;
                dayLight = 0;
                drawLight = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 0.2;
                    hardLimitStart = 2;
                    hardLimitEnd = 5;
                };
            };
            class Light_2 {
                color[] = {0.3, 0.3, 1};
                ambient[] = {0, 0, 0.09};
                intensity = 1000;
                name = "Light_2_pos";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = 0;
                activeLight = 1;
                blinking = 0;
                dayLight = 0;
                drawLight = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 0.2;
                    hardLimitStart = 2;
                    hardLimitEnd = 5;
                };
            };
        };
    };

    DEPRECATED(ls_holoprojector_bountyPuck_groundHolder,GVAR(bountyPuck_static));
    DEPRECATED(Land_holotable_circular,GVAR(table_circle));
    DEPRECATED(Land_holotable_rectangular,GVAR(table_rectangle));
};
