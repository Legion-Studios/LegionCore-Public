class ls_droidHelmet_b1: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayname = "B1 Droid Head";

    ace_hearing_protection = 0.85;
    ace_hearing_lowervolume = 0.2;

    model = QPATHTOF(helmets\b1\ls_helmet_droid_b1.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_ui_ca.paa);

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\b1\ls_helmet_droid_b1.p3d);
        hiddenselections[] = {"camo1"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointname = "HitHead";
                armor = 12;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};

class ls_droidHelmet_b1_officer: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = "B1 Commander Droid Head";

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\officer_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_officer_ui_ca.paa);
};

class ls_droidHelmet_b1_hologram: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Head (Hologram)";

    model = QPATHTOF(helmets\b1\ls_helmet_droid_b1_hologram.p3d);
    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(uniforms\b1\data\hologram\camo1.rvmat)};
    // picture = QPATHTOF(data\ui\b1Helmet_hologram_ui_ca.paa); // HEMTT has an issue generating this for some reason
};

class ls_droidHelmet_b1_simulation: ls_droidHelmet_b1_hologram {
    author = AUTHOR;
    displayName = "B1 Droid Head (Simulation)";

    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\hologram\redHologram_ca.paa)};
    // picture = QPATHTOF(data\ui\b1Helmet_hologram_ui_ca.paa);
};

class ls_droidHelmet_b1_geonosis: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Head (Geonosis)";

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_geonosis_ui_ca.paa);
};

class ls_droidHelmet_b1_geonosisOfficer: ls_droidHelmet_b1_officer {
    author = AUTHOR;
    displayName = "B1 Commander Droid Head (Geonosis)";

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\geonosis\officer_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_geonosisOfficer_ui_ca.paa);
};

class ls_droidHelmet_b1_training: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Head (Training)";

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\training\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_training_ui_ca.paa);
};

class ls_droidHelmet_b1_saboteur: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = "B1 Droid Head (Saboteur)";

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\saboteur_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_saboteur_ui_ca.paa);
};

class ls_droidHelmet_b1_crew: ls_droidHelmet_b1 {
    author = AUTHOR;
    displayName = "OOM-Series Crew Droid Head";

    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\b1\data\crew_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Helmet_crew_ui_ca.paa);
};

class ls_cis_b1_helmet: ls_droidHelmet_b1 {
    scope = 1;
};
