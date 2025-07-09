class ls_droid_bx: ls_droid_base {
    scope = 2;
    author = AUTHOR;
    displayName = "BX Commando Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx.jpg);
    genericNames = "ls_droid_bx";
    identityTypes[] = {"LanguageENG_F", "ls_head_bxDroid"};
    editorSubcategory = "ls_edsubcat_specialOperations";

    uniformClass = "ls_droidUniform_bx";
    model = QPATHTOF(uniforms\bx\ls_uniform_droid_bx.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\bx\data\body_co.paa)};

    linkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
    respawn[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};

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
            radius = 0.23999999;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.01;
            depends = "0";
        };
        class HitAbdomen: HitPelvis {
            armor = 85;
            material = -1;
            name = "spine1";
            passThrough = 0.8;
            radius = 0.16;
            explosionShielding = 1;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitDiaphragm: HitAbdomen {
            armor = 95;
            material = -1;
            name = "spine2";
            passThrough = 0.8;
            radius = 0.18;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitChest: HitDiaphragm {
            armor = 110;
            material = -1;
            name = "spine3";
            passThrough = 0.8;
            radius = 0.18;
            explosionShielding = 10;
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
            armor = 30;
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
            armor = 15;
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
        };
        class HitLeftLeg {
            armor = 15;
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

class ls_droid_bx_activeCamo: ls_droid_bx {
    scope = 1;
    author = AUTHOR;

    uniformClass = "ls_droidUniform_bx_activeCamo";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_droid_bx_captain: ls_droid_bx {
    author = AUTHOR;
    displayName = "BX Commando Droid Captain";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_captain.jpg);

    uniformClass = "ls_droidUniform_bx_captain";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\captain_body_co.paa)
    };
};

class ls_droid_bx_security: ls_droid_bx {
    author = AUTHOR;
    displayName = "BX Security Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_security.jpg);

    uniformClass = "ls_droidUniform_bx_security";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\security_body_co.paa)
    };
};

class ls_droid_bx_diplomat: ls_droid_bx {
    author = AUTHOR;
    displayName = "BX Diplomat Droid";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_diplomat.jpg);

    uniformClass = "ls_droidUniform_bx_diplomat";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\diplomat_body_co.paa)
    };
};

class ls_droid_bx_hologram: ls_droid_bx {
    author = AUTHOR;
    displayName = "BX Commando Droid (Hologram)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_hologram.jpg);

    uniformClass = "ls_droidUniform_bx_hologram";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\bx\data\hologram\body.rvmat)
    };
};

class ls_droid_bx_simulation: ls_droid_bx_hologram {
    author = AUTHOR;
    displayName = "BX Commando Droid (Simulation)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_simulation.jpg);

    uniformClass = "ls_droidUniform_bx_simulation";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
    };
};

// Needed for WebKnight Droids
DEPRECATED(lsd_cis_bxDroid_base,ls_droid_bx);
DEPRECATED(lsd_cis_bxdroid_specops,ls_droid_bx);
