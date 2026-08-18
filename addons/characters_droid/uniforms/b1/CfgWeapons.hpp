class ls_droidUniform_b1: ls_droidUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_uniform);

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
class ls_droidUniform_b1_geonosis: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_geonosis";
    };
};
class ls_droidUniform_b1_training: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_training_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_training_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_training";
    };
};
class ls_droidUniform_b1_advanced: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_advanced_uniform);
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\advanced\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\advanced\camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b1\data\advanced\camo1.rvmat),
        QPATHTOF(uniforms\b1\data\advanced\camo2.rvmat)
    };
    picture = QPATHTOF(data\ui\b1Uniform_advanced_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_advanced";
    };
};

class ls_droidUniform_b1_heavy: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_heavy_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\heavy_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\heavy_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_heavy_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_heavy";
    };
};
class ls_droidUniform_b1_heavy_geonosis: ls_droidUniform_b1_heavy {
    author = AUTHOR;
    displayName = CSTRING(b1_heavy_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\heavy_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\heavy_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_heavy_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_heavy_geonosis";
    };
};

class ls_droidUniform_b1_grenadier: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\grenadier_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_grenadier_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_grenadier";
    };
};
class ls_droidUniform_b1_grenadier_geonosis: ls_droidUniform_b1_grenadier {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\grenadier_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_grenadier_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_grenadier_geonosis";
    };
};

class ls_droidUniform_b1_scout: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_scout_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\scout_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\scout_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_scout_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_scout";
    };
};
class ls_droidUniform_b1_scout_geonosis: ls_droidUniform_b1_scout {
    author = AUTHOR;
    displayName = CSTRING(b1_scout_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\scout_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\scout_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_scout_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_scout_geonosis";
    };
};

class ls_droidUniform_b1_firefighter: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_firefighter_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\firefighter_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\firefighter_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_firefighter_ui_ca.paa);

    ace_fire_protection = 1;

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_firefighter";
    };
};

class ls_droidUniform_b1_marine: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_marine_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\marine_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_marine_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_marine";
    };
};

class ls_droidUniform_b1_engineer: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_engineer_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\engineer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_engineer_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_engineer";
    };
};
class ls_droidUniform_b1_engineer_geonosis: ls_droidUniform_b1_engineer {
    author = AUTHOR;
    displayName = CSTRING(b1_engineer_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\engineer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_engineer_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_engineer_geonosis";
    };
};

class ls_droidUniform_b1_commander: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_commander_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\commander_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_commander_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_commander";
    };
};

class ls_droidUniform_b1_commander_advanced: ls_droidUniform_b1_commander {
    author = AUTHOR;
    displayName = CSTRING(b1_commander_advanced_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\advanced\commander_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\advanced\camo2_co.paa)
    };

    picture = QPATHTOF(data\ui\b1Uniform_commander_advanced_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_commander_advanced";
    };
};

class ls_droidUniform_b1_commander_geonosis: ls_droidUniform_b1_commander {
    author = AUTHOR;
    displayName = CSTRING(b1_commander_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\commander_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_commander_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_commander_geonosis";
    };
};

class ls_droidUniform_b1_saboteur: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_saboteur_uniform);

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
    displayName = CSTRING(b1_crew_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\crew_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\crew_camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_crew_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_crew";
    };
};
class ls_droidUniform_b1_crew_geonosis: ls_droidUniform_b1_crew {
    author = AUTHOR;
    displayName = CSTRING(b1_crew_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\crew_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_crew_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_crew_geonosis";
    };
};

class ls_droidUniform_b1_pilot: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_pilot_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\pilot_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_pilot_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_pilot";
    };
};
class ls_droidUniform_b1_pilot_geonosis: ls_droidUniform_b1_pilot {
    author = AUTHOR;
    displayName = CSTRING(b1_pilot_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\pilot_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_pilot_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_pilot_geonosis";
    };
};

class ls_droidUniform_b1_security: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_security_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\security_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_security_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_security";
    };
};
class ls_droidUniform_b1_security_geonosis: ls_droidUniform_b1_security {
    author = AUTHOR;
    displayName = CSTRING(b1_security_geonosis_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\security_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\b1Uniform_security_geonosis_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_security_geonosis";
    };
};

class ls_droidUniform_b1_junkyard: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_junkyard_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\junkyard\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\junkyard\camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b1\data\junkyard\camo1.rvmat),
        QPATHTOF(uniforms\b1\data\junkyard\camo2.rvmat)
    };
    picture = QPATHTOF(data\ui\b1Uniform_junkyard_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_junkyard";
    };
};

class ls_droidUniform_b1_hologram: ls_droidUniform_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_hologram_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b1\data\hologram\camo1.rvmat),
        QPATHTOF(uniforms\b1\data\hologram\camo2.rvmat)
    };
    // picture = QPATHTOF(data\ui\b1Uniform_hologram_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_hologram";
    };
};

class ls_droidUniform_b1_simulation: ls_droidUniform_b1_hologram {
    author = AUTHOR;
    displayName = CSTRING(b1_simulation_uniform);

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
    };
    // picture = QPATHTOF(data\ui\b1Uniform_simulation_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b1_simulation";
    };
};
