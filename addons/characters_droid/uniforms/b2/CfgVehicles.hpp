class ls_droid_b2: ls_droid_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b2);

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

    weapons[] = {"ls_weapon_wristblaster_B2", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_wristblaster_B2", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_wristblaster_B2")};
    respawnMagazines[] = {ITEM_10("ls_magazine_wristblaster_B2")};

    class HitPoints: HitPoints {
        class HitFace: HitFace {
            armor = 50;
        };
        class HitNeck: HitNeck {
            armor = 50;
        };
        class HitHead: HitHead {
            armor = 10;
            depends = "0";
        };
        class HitPelvis: HitPelvis {
            armor = 50;
            passThrough = 0.5;
        };
        class HitAbdomen: HitAbdomen {
            armor = 50;
            passThrough = 0.5;
            radius = 0.2;        };
        class HitDiaphragm: HitDiaphragm {
            armor = 50;
            passThrough = 0.5;
        };
        class HitChest: HitChest {
            armor = 50;
            passThrough = 0.5;
            radius = 0.2;
        };
        class HitArms: HitArms {
            armor = 20;
            passThrough = 1;
            radius = 0.16;
        };
        class HitHands: HitHands {
            armor = 20;
        };
        class HitLegs: HitLegs {
            armor = 20;
        };
        ADD_ACE_HITPOINTS;
        class HitBody: HitBody {};
    };
};

class ls_droid_b2_junkyard: ls_droid_b2 {
    author = AUTHOR;
    displayName = CSTRING(b2_junkyard);

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

    weapons[] = {"ls_weapon_wristblaster_B2_junkyard", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_wristblaster_B2_junkyard", THROW_PUT};
};

class ls_droid_b2_hologram: ls_droid_b2 {
    author = AUTHOR;
    displayName = CSTRING(b2_hologram);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b2_hologram.jpg);

    uniformClass = "ls_droidUniform_b2_hologram";
    model = QPATHTOF(uniforms\b2\ls_uniform_droid_b2_hologram.p3d);
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
    displayName = CSTRING(b2_simulation);

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
