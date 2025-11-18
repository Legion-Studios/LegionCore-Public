class ls_droid_b1: ls_droid_base {
    scope = 2;
    author = AUTHOR;
    displayName = "B1 Battle Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1.jpg);
    genericNames = "ls_droid_b1";
    identityTypes[] = {"ls_b1BattleDroid"};

    uniformClass = "ls_droidUniform_b1";
    model = QPATHTOF(uniforms\b1\ls_uniform_droid_b1.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1";

    magazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_3("ls_magazine_e5")
    };
    respawnMagazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_3("ls_magazine_e5")
    };
    linkedItems[] = {"ls_droidHelmet_b1", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1", LINKED_ITEMS_DROID};

    class HitPoints: HitPoints {
        class HitFace {
            armor = 1;
            material = -1;
            name = "face_hub";
            passThrough = 0.8;
            radius = 0.08;
            explosionShielding = 0.1;
            minimalHit = 0.01;
        };
        class HitNeck: HitFace {
            armor = 1;
            material = -1;
            name = "neck";
            passThrough = 0.8;
            radius = 0.1;
            explosionShielding = 0.5;
            minimalHit = 0.01;
        };
        class HitHead: HitNeck {
            armor = 1;
            material = -1;
            name = "head";
            passThrough = 0.8;
            radius = 0.2;
            explosionShielding = 0.5;
            minimalHit = 0.01;
            depends = "HitFace max HitNeck";
        };
        class HitPelvis: HitHead {
            armor = 6;
            material = -1;
            name = "pelvis";
            passThrough = 0.8;
            radius = 0.24;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.01;
            depends = "0";
        };
        class HitAbdomen: HitPelvis {
            armor = 1;
            material = -1;
            name = "spine1";
            passThrough = 0.8;
            radius = 0.16;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitDiaphragm: HitAbdomen {
            armor = 1;
            material = -1;
            name = "spine2";
            passThrough = 0.8;
            radius = 0.18;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitChest: HitDiaphragm {
            armor = 1;
            material = -1;
            name = "spine3";
            passThrough = 0.8;
            radius = 0.18;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitBody: HitChest {
            armor = 1000;
            material = -1;
            name = "body";
            passThrough = 1;
            radius = 0;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
            depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
        };
        class HitArms: HitBody {
            armor = 3;
            material = -1;
            name = "arms";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.01;
            depends = "0";
        };
        class HitHands: HitArms {
            armor = 3;
            material = -1;
            name = "hands";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.01;
            depends = "HitArms";
        };
        class HitLegs: HitHands {
            armor = 3;
            material = -1;
            name = "legs";
            passThrough = 1;
            radius = 0.14;
            explosionShielding = 1;
            visual = "injury_legs";
            minimalHit = 0.01;
            depends = "0";
        };
        class Incapacitated: HitLegs {
            armor = 1000;
            material = -1;
            name = "body";
            passThrough = 1;
            radius = 0;
            explosionShielding = 1;
            visual = "";
            minimalHit = 0;
            depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
        };
        class HitLeftArm {
            armor = 1;
            material = -1;
            name = "hand_l";
            passThrough = 1;
            radius = 0.08;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.01;
        };
        class HitRightArm: HitLeftArm {
            name="hand_r";
        };
        class HitLeftLeg {
            armor = 1;
            material = -1;
            name = "leg_l";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 1;
            visual = "injury_legs";
            minimalHit = 0.01;
        };
        class HitRightLeg: HitLeftLeg {
            name="leg_r";
        };
    };
};

class ls_droid_b1_officer: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid Commander";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_officer.jpg);

    uniformClass = "ls_droidUniform_b1_officer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\officer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };

    ROLE_OFFICER;

    backpack = "ls_droidBackpack_b1_antenna";
    linkedItems[] = {"ls_droidHelmet_b1_officer", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_officer", LINKED_ITEMS_DROID};
};

class ls_droid_b1_hologram: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Hologram)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_hologram.jpg);

    uniformClass = "ls_droidUniform_b1_hologram";
    model = QPATHTOF(uniforms\b1\ls_uniform_droid_b1_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b1\data\hologram\camo1.rvmat),
        QPATHTOF(uniforms\b1\data\hologram\camo2.rvmat)
    };

    backpack = "ls_droidBackpack_b1_hologram";
    linkedItems[] = {"ls_droidHelmet_b1_hologram", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_hologram", LINKED_ITEMS_DROID};
};

class ls_droid_b1_simulation: ls_droid_b1_hologram {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Simulation)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_simulation.jpg);

    uniformClass = "ls_droidUniform_b1_simulation";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
    };

    backpack = "ls_droidBackpack_b1_simulation";
    linkedItems[] = {"ls_droidHelmet_b1_simulation", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_simulation", LINKED_ITEMS_DROID};
};

class ls_droid_b1_geonosis: ls_droid_b1 {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
};

class ls_droid_b1_geonosisOfficer: ls_droid_b1_officer {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisOfficer.jpg);

    uniformClass = "ls_droidUniform_b1_geonosisOfficer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\officer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\officer_camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_antenna_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosisOfficer", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosisOfficer", LINKED_ITEMS_DROID};
};

class ls_droid_b1_training: ls_droid_b1 {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
};

class ls_droid_b1_saboteur: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Saboteur)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_saboteur.jpg);

    ROLE_ENGINEER;

    uniformClass = "ls_droidUniform_b1_saboteur";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\saboteur_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\saboteur_camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_predef_saboteur";
    linkedItems[] = {"ls_droidHelmet_b1_saboteur", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_saboteur", LINKED_ITEMS_DROID};
};

class ls_droid_b1_oom_base: ls_droid_b1 {
    scope = 0;
    genericNames = "ls_droid_oom";
    editorSubCategory = "ls_edsubcat_cis_oomDroids";
    backpack = "";
};

class ls_droid_b1_crew: ls_droid_b1_oom_base {
    scope = 2;
    author = AUTHOR;
    displayName = "OOM-Series Crew Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_crew.jpg);

    ROLE_CREWMAN;

    uniformClass = "ls_droidUniform_b1_crew";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\crew_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\crew_camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_crew";
    linkedItems[] = {"ls_droidHelmet_b1_crew", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_crew", LINKED_ITEMS_DROID};
};

class ls_droid_b1_pilot: ls_droid_b1_oom_base {
    scope = 2;
    author = AUTHOR;
    displayName = "OOM-Series Pilot Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_pilot.jpg);
    icon = "ls_iconManPilot";

    uniformClass = "ls_droidUniform_b1_pilot";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\pilot_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
};

class ls_droid_b1_security: ls_droid_b1_oom_base {
    scope = 2;
    author = AUTHOR;
    displayName = "OOM-Series Security Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_security.jpg);

    uniformClass = "ls_droid_b1_security";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\security_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
};
