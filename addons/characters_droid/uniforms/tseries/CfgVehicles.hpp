class ls_droid_tseries: ls_droid_base {
    scope = 0;
    author = AUTHOR;
    displayName = "T-Series Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_tseries.jpg);
    genericNames = "ls_droid_tseries";
    identityTypes[] = {"LanguageENG_F"};

    uniformClass = "ls_droidUniform_tseries";
    model = QPATHTOF(uniforms\tseries\ls_uniform_droid_tseries.p3d);
    hiddenSelections[] = {"upper", "lower"};
    hiddenSelectionsTextures[] = {
    };

    linkedItems[] = {"ls_nvg_invisible", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_nvg_invisible", LINKED_ITEMS_DROID};

    class HitPoints: HitPoints {
        class HitFace {
            armor = 75;
            material = -1;
            name = "face_hub";
            passThrough = 0.80000001;
            radius = 0.079999998;
            explosionShielding = 0.1;
            minimalHit = 0.0099999998;
        };
        class HitNeck: HitFace {
            armor = 75;
            material = -1;
            name = "neck";
            passThrough = 0.80000001;
            radius = 0.1;
            explosionShielding = 0.5;
            minimalHit = 0.0099999998;
        };
        class HitHead: HitNeck {
            armor = 75;
            material = -1;
            name = "head";
            passThrough = 0.80000001;
            radius = 0.2;
            explosionShielding = 0.5;
            minimalHit = 0.0099999998;
            depends = "HitFace max HitNeck";
        };
        class HitPelvis: HitHead {
            armor = 75;
            material = -1;
            name = "pelvis";
            passThrough = 0.80000001;
            radius = 0.23999999;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.0099999998;
            depends = "0";
        };
        class HitAbdomen: HitPelvis {
            armor = 75;
            material = -1;
            name = "spine1";
            passThrough = 0.80000001;
            radius = 0.16;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.0099999998;
        };
        class HitDiaphragm: HitAbdomen {
            armor = 75;
            material = -1;
            name = "spine2";
            passThrough = 0.80000001;
            radius = 0.18000001;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.0099999998;
        };
        class HitChest: HitDiaphragm {
            armor = 75;
            material = -1;
            name = "spine3";
            passThrough = 0.80000001;
            radius = 0.18000001;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.0099999998;
        };
        class HitSensor: HitChest {
            armor = 10;
            name = "sensor_hit";
        };
        class HitBody: HitChest {
            armor = 75;
            material = -1;
            name = "body";
            passThrough = 1;
            radius = 0;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.0099999998;
            depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
        };
        class HitArms: HitBody {
            armor = 10;
            material = -1;
            name = "arms";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.0099999998;
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
            minimalHit = 0.0099999998;
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
            minimalHit = 0.0099999998;
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
            radius = 0.079999998;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.0099999998;
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
            minimalHit = 0.0099999998;
        };
        class HitRightLeg: HitLeftLeg {
            name = "leg_r";
        };
    };
};
