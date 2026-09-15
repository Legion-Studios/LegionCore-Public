class CfgVehicles {
    class StaticShip;
    class ls_prop_tibannaProp_base: StaticShip {
        scope = 0;
        scopeCurator = 0; // Static ship defines scopeCurator so this needs to be set in child classes
        author = AUTHOR;

        icon = "iconObject_5x4";
        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_tibanna";
    };
    class ls_prop_tibannaCollector: ls_prop_tibannaProp_base {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Tibanna Gas Collector";

        model = QPATHTOF(ls_prop_tibanna_Collector.p3d);
        hiddenSelections[] = {"camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\grey\camo2_co.paa)};
    };

    class ls_prop_tibannaCollector_bespin: ls_prop_tibannaCollector {
        author = AUTHOR;
        displayName = "Tibanna Gas Collector (Besbin)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bespin\camo2_co.paa)
        };
    };

    class ls_prop_tibannaProcessor: ls_prop_tibannaProp_base {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Tibanna Gas Processor";

        model = QPATHTOF(ls_prop_tibanna_Processor.p3d);
        hiddenSelections[] = {"camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\grey\camo2_co.paa)};
    };

    class ls_prop_tibannaProcessor_bespin: ls_prop_tibannaProcessor {
        author = AUTHOR;
        displayName = "Tibanna Gas Processor (Besbin)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bespin\camo2_co.paa)
        };
    };

    class ls_prop_tibannaRefinery_hexContainers: ls_prop_tibannaProp_base {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Tibanna Gas Refinery - Hex Containers";

        model = QPATHTOF(ls_prop_tibanna_Refinery_hex.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\grey\camo1_co.paa),
            QPATHTOF(data\grey\camo2_co.paa),
        };
    };

    class ls_prop_tibannaRefinery_hexContainers_bespin: ls_prop_tibannaRefinery_hexContainers {
        author = AUTHOR;
        displayName = "Tibanna Gas Refinery - Hex Containers (Besbin)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bespin\camo1_co.paa),
            QPATHTOF(data\bespin\camo2_co.paa),
        };
    };

    class ls_prop_tibannaRefinery_spheres: ls_prop_tibannaRefinery_hexContainers {
        author = AUTHOR;
        displayName = "Tibanna Gas Refinery - Spheres";
        model = QPATHTOF(ls_prop_tibanna_Refinery_sphere.p3d);
    };

    class ls_prop_tibannaRefinery_spheres_bespin: ls_prop_tibannaRefinery_spheres {
        author = AUTHOR;
        displayName = "Tibanna Gas Refinery - Spheres (Besbin)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bespin\camo1_co.paa),
            QPATHTOF(data\bespin\camo2_co.paa),
        };
    };

    class ls_prop_tibannaRefinery_tanks: ls_prop_tibannaRefinery_hexContainers {
        author = AUTHOR;
        displayName = "Tibanna Gas Refinery - Tanks";
        model = QPATHTOF(ls_prop_tibanna_Refinery_tank.p3d);
    };

    class ls_prop_tibannaRefinery_tanks_bespin: ls_prop_tibannaRefinery_tanks {
        author = AUTHOR;
        displayName = "Tibanna Gas Refinery - Tanks (Besbin)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bespin\camo1_co.paa),
            QPATHTOF(data\bespin\camo2_co.paa),
        };
    };
};
