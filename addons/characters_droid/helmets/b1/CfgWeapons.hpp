class ls_droidHelmet_b1: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_helmet);
    descriptionShort = "$STR_A3_SP_AL_I";

    ace_hearing_protection = 0.85;
    ace_hearing_lowervolume = 0.2;

    model = QPATHTOF(helmets\b1\ls_helmet_droid_b1.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_ui_ca.paa);

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\b1\ls_helmet_droid_b1.p3d);
        hiddenselections[] = {"camo1"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 4;
                passThrough = 0.5;
            };
        };
    };
};
class ls_droidHelmet_b1_geonosis: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_geonosis_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_geonosis_ui_ca.paa);
};
class ls_droidHelmet_b1_training: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_training_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\training\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_training_ui_ca.paa);
};
class ls_droidHelmet_b1_advanced: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_advanced_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\advanced\camo1_co.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(uniforms\b1\data\advanced\camo1.rvmat)};
    picture = QPATHTOF(data\ui\b1Helmet_advanced_ui_ca.paa);
};

class ls_droidHelmet_b1_saboteur: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_saboteur_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\saboteur_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_saboteur_ui_ca.paa);
};

class ls_droidHelmet_b1_firefighter: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_firefighter_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\firefighter_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_firefighter_ui_ca.paa);
};

class ls_droidHelmet_b1_scout: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_scout_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\scout_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_scout_ui_ca.paa);
};
class ls_droidHelmet_b1_scout_geonosis: ls_droidHelmet_b1_scout {
    author = AUTHOR;
    displayName = CSTRING(b1_scout_geonosis_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\geonosis\scout_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_scout_geonosis_ui_ca.paa);
};

class ls_droidHelmet_b1_grenadier: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\grenadier_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_grenadier_ui_ca.paa);
};
class ls_droidHelmet_b1_grenadier_geonosis: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_geonosis_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\geonosis\grenadier_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_grenadier_geonosis_ui_ca.paa);
};

class ls_droidHelmet_b1_commander: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_commander_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\commander_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_commander_ui_ca.paa);
};
class ls_droidHelmet_b1_commander_geonosis: ls_droidHelmet_b1_commander {
    author = AUTHOR;
    displayName = CSTRING(b1_commander_geonosis_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\geonosis\commander_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_commander_geonosis_ui_ca.paa);
};
class ls_droidHelmet_b1_commander_advanced: ls_droidHelmet_b1_commander {
    author = AUTHOR;
    displayName = CSTRING(b1_commander_advanced_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\advanced\commander_camo1_co.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(uniforms\b1\data\advanced\camo1.rvmat)};
    picture = QPATHTOF(data\ui\b1Helmet_commander_advanced_ui_ca.paa);
};

class ls_droidHelmet_b1_crew: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_crew_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\crew_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_crew_ui_ca.paa);
};
class ls_droidHelmet_b1_crew_geonosis: ls_droidHelmet_b1_crew {
    author = AUTHOR;
    displayName = CSTRING(b1_crew_geonosis_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\geonosis\crew_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_crew_geonosis_ui_ca.paa);
};

class ls_droidHelmet_b1_junkyard: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_junkyard_helmet);

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\junkyard\camo1_co.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(uniforms\b1\data\junkyard\camo1.rvmat)};
    picture = QPATHTOF(data\ui\b1Helmet_junkyard_ui_ca.paa);
};

class ls_droidHelmet_b1_hologram: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_hologram_helmet);

    model = QPATHTOF(helmets\b1\ls_helmet_droid_b1_hologram.p3d);
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(uniforms\b1\data\hologram\camo1.rvmat)};
    // picture = QPATHTOF(data\ui\b1Helmet_hologram_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\b1\ls_helmet_droid_b1_hologram.p3d);
    };
};
class ls_droidHelmet_b1_simulation: ls_droidHelmet_b1_hologram {
    author = AUTHOR;
    displayName = CSTRING(b1_simulation_helmet);

    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\redHologram_ca.paa)};
    // picture = QPATHTOF(data\ui\b1Helmet_simulation_ui_ca.paa);
};

DEPRECATED(ls_cis_b1_helmet,ls_droidHelmet_b1);
