class ls_droid_bx: ls_droid_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(bx);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx.jpg);
    genericNames = "ls_droid_bx";
    identityTypes[] = {"ls_b1BattleDroid", "ls_head_bxDroid"};
    editorSubcategory = "ls_edsubcat_specialOperations";

    uniformClass = "ls_droidUniform_bx";
    model = QPATHTOF(uniforms\bx\ls_uniform_droid_bx.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\bx\data\body_co.paa)};

    linkedItems[] = {"ls_helmet_invisible_armorLevel5", "ls_droidVest_bx", "ls_nvg_invisible", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_helmet_invisible_armorLevel5", "ls_droidVest_bx", "ls_nvg_invisible", LINKED_ITEMS_DROID};

    class HitPoints: HitPoints {
        class HitFace: HitFace {
            armor = 1;
            passThrough = 0.8;
        };
        class HitNeck: HitNeck {
            armor = 6;
            passThrough = 0.8;
        };
        class HitHead: HitHead {
            armor = 1;
            passThrough = 0.8;
        };
        class HitPelvis: HitPelvis {
            armor = 8;
            passThrough = 0.33;
        };
        class HitAbdomen: HitAbdomen {
            armor = 8;
            passThrough = 0.33;
        };
        class HitDiaphragm: HitDiaphragm {
            armor = 8;
            passThrough = 0.33;
        };
        class HitChest: HitChest {
            armor = 8;
            passThrough = 0.33;
        };
        class HitArms: HitArms {
            armor = 8;
            passThrough = 0.7;
        };
        class HitHands: HitHands {
            armor = 8;
            passThrough = 0.7;
        };
        class HitLegs: HitLegs {
            armor = 8;
            passThrough = 0.7;
        };
        ADD_ACE_HITPOINTS;
        class HitBody: HitBody {};
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
    displayName = CSTRING(bx_captain);

    uniformClass = "ls_droidUniform_bx_captain";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\body_captain_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_captain.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

class ls_droid_bx_security: ls_droid_bx {
    author = AUTHOR;
    displayName = CSTRING(bx_security);

    uniformClass = "ls_droidUniform_bx_security";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\body_security_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_security.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

class ls_droid_bx_diplomat: ls_droid_bx {
    author = AUTHOR;
    displayName = CSTRING(bx_diplomat);

    uniformClass = "ls_droidUniform_bx_diplomat";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\body_diplomat_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_diplomat.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

class ls_droid_bx_training: ls_droid_bx {
    author = AUTHOR;
    displayName = CSTRING(bx_training);

    uniformClass = "ls_droidUniform_bx_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\body_training_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_training.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

class ls_droid_bx_bountyHunter: ls_droid_bx {
    author = AUTHOR;
    displayName = CSTRING(bx_bountyHunter);

    uniformClass = "ls_droidUniform_bx_bountyHunter";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\body_bountyHunter_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_bountyHunter.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

class ls_droid_bx_junkyard: ls_droid_bx {
    author = AUTHOR;
    displayName = CSTRING(bx_junkyard);

    uniformClass = "ls_droidUniform_bx_junkyard";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\bx\data\junkyard\body_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\bx\data\junkyard\body.rvmat)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_junkyard.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

class ls_droid_bx_hologram: ls_droid_bx {
    author = AUTHOR;
    displayName = CSTRING(bx_hologram);

    uniformClass = "ls_droidUniform_bx_hologram";
    model = QPATHTOF(uniforms\bx\ls_uniform_droid_bx_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\bx\data\hologram\body.rvmat)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_hologram.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

class ls_droid_bx_simulation: ls_droid_bx_hologram {
    author = AUTHOR;
    displayName = CSTRING(bx_simulation);

    uniformClass = "ls_droidUniform_bx_simulation";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_simulation.jpg);

    EGVAR(activeCamo,camoItem) = "ls_droid_bx_activeCamo";
};

// Needed for WebKnight Droids
DEPRECATED(lsd_cis_bxDroid_base,ls_droid_bx);
DEPRECATED(lsd_cis_bxdroid_specops,ls_droid_bx);
