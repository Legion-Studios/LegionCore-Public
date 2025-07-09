class ls_droidUniform_b1: ls_droidUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "B1 Droid Chassis";

    model = QPATHTOF(uniforms\b1\ls_uniform_droid_b1_gh.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1";
    };
};

class ls_droidUniform_b1_officer: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "B1 Commander Droid Chassis";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\officer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_officer_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_officer";
    };
};

class ls_droidUniform_b1_hologram: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Chassis (Hologram)";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b1\data\hologram\camo1.rvmat),
        QPATHTOF(uniforms\b1\data\hologram\camo2.rvmat)
    };
    picture = QPATHTOF(data\ui\b1Uniform_hologram_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_hologram";
    };
};

class ls_droidUniform_b1_simulation: ls_droidUniform_b1_hologram {
    author = AUTHOR;
    displayName = "B1 Droid Chassis (Simulation)";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
    };
    // picture = QPATHTOF(data\ui\b1Uniform_simulation_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_simulation";
    };
};

class ls_droidUniform_b1_geonosis: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Chassis (Geonosis)";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_geonosis";
    };
};

class ls_droidUniform_b1_geonosisOfficer: ls_droidUniform_b1_officer {
    author = AUTHOR;
    displayName = "B1 Commander Droid Chassis (Geonosis)";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\officer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_geonosisOfficer_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_geonosisOfficer";
    };
};

class ls_droidUniform_b1_training: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Chassis (Training)";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_training_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_training";
    };
};

class ls_droidUniform_b1_saboteur: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Chassis (Saboteur)";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\saboteur_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\saboteur_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_saboteur_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_saboteur";
    };
};

class ls_droidUniform_b1_crew: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "OOM-Series Crew Droid";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\crew_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\crew_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_crew_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_crew";
    };
};

class ls_droidUniform_b1_pilot: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "OOM-Series Pilot Droid";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\pilot_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_pilot_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_pilot";
    };
};

class ls_droidUniform_b1_security: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = "OOM-Series Security Droid";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\security_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_security_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_security";
    };
};
