class ls_droid_b2: ls_droid_base {
    scope = 2;
    author = AUTHOR;
    displayName = "B2 Battle Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b2.jpg);
    genericNames = "ls_droid_b2";

    uniformClass = "ls_droidUniform_b2";
    model = QPATHTOF(uniforms\b2\ls_uniform_droid_b2.p3d);
    hiddenSelections[] = {
        "camo_arms",
        "legs",
        "torso"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b2\data\arms_co.paa),
        QPATHTOF(uniforms\b2\data\legs_co.paa),
        QPATHTOF(uniforms\b2\data\torso_co.paa)
    };

    class HitPoints: HitPoints {
        class HitFace {
            armor = 50;
            material = -1;
            name = "face_hub";
            passThrough = 0.8;
            radius = 0.08;
            explosionShielding = 0.1;
            minimalHit = 0.01;
        };
        class HitNeck: HitFace {
            armor = 50;
            material = -1;
            name = "neck";
            passThrough = 0.8;
            radius = 0.1;
            explosionShielding = 0.5;
            minimalHit = 0.01;
        };
        class HitHead: HitNeck {
            armor = 20;
            material = -1;
            name = "head";
            passThrough = 0.8;
            radius = 0.2;
            explosionShielding = 0.5;
            minimalHit = 0.01;
            depends = "HitFace max HitNeck";
        };
        class HitPelvis: HitHead {
            armor = 30;
            material = -1;
            name = "pelvis";
            passThrough = 0.8;
            radius = 0.23999999;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.01;
            depends = "0";
        };
        class HitAbdomen: HitPelvis {
            armor = 40;
            material = -1;
            name = "spine1";
            passThrough = 0.8;
            radius = 0.2;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitDiaphragm: HitAbdomen {
            armor = 40;
            material = -1;
            name = "spine2";
            passThrough = 0.8;
            radius = 0.18;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitChest: HitDiaphragm {
            armor = 50;
            material = -1;
            name = "spine3";
            passThrough = 0.8;
            radius = 0.2;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitSensor: HitChest {
            armor = 10;
            radius = 0.1;
            name = "sensor_hit";
        };
        class HitBody: HitChest {
            armor = 60;
            material = -1;
            name = "body";
            passThrough = 1;
            explosionShielding = 6;
            radius = 0;
            visual = "injury_body";
            minimalHit = 0.01;
            depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
        };
        class HitArms: HitBody {
            armor = 10;
            material = -1;
            name = "arms";
            passThrough = 1;
            radius = 0.16;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.01;
            depends = "0";
        };
        class HitHands: HitArms {
            armor = 100;
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
            armor = 100;
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
            armor = 20;
            material = -1;
            name = "hand_l";
            passThrough = 1;
            radius = 0.08;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.01;
        };
        class HitRightArm: HitLeftArm {
            name = "hand_r";
            armor = 20;
        };
        class HitLeftLeg {
            armor = 20;
            material = -1;
            name = "leg_l";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 1;
            visual = "injury_legs";
            minimalHit = 0.01;
        };
        class HitRightLeg: HitLeftLeg {
            name = "leg_r";
        };
    };
};

class ls_droid_b2_junkyard: ls_droid_b2 {
    author = AUTHOR;
    displayName = "B2 Battle Droid (Junkyard)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b2_junkyard.jpg);

    uniformClass = "ls_droidUniform_b2_junkyard";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b2\data\junkyard\arms_co.paa),
        QPATHTOF(uniforms\b2\data\junkyard\legs_co.paa),
        QPATHTOF(uniforms\b2\data\junkyard\torso_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b2\data\junkyard\arms.rvmat),
        QPATHTOF(uniforms\b2\data\junkyard\legs.rvmat),
        QPATHTOF(uniforms\b2\data\junkyard\torso.rvmat)
    };
};

class ls_droid_b2_hologram: ls_droid_b2 {
    author = AUTHOR;
    displayName = "B2 Battle Droid (Hologram)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b2_hologram.jpg);

    uniformClass = "ls_droidUniform_b2_hologram";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b2\data\hologram\arms.rvmat),
        QPATHTOF(uniforms\b2\data\hologram\legs.rvmat),
        QPATHTOF(uniforms\b2\data\hologram\torso.rvmat)
    };
};

class ls_droid_b2_simulation: ls_droid_b2_hologram {
    author = AUTHOR;
    displayName = "B2 Battle Droid (Simulation)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b2_simulation.jpg);

    uniformClass = "ls_droidUniform_b2_simulation";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
    };
};

// Needed for WebKnight Droids
DEPRECATED(lsd_cis_b2Droid_base,ls_droid_b2);
DEPRECATED(lsd_cis_b2_standard,ls_droid_b2);
