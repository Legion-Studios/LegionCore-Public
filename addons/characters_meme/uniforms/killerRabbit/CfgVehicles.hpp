class ls_meme_killerRabbit: ls_indfor_unit_base {
    #ifdef DEBUG_MODE_FULL
        scope = 2;
    #else
        scope = 1;
    #endif
    author = AUTHOR;
    displayName = "The Killer Rabbit (WIP)";

    uniformClass = "ls_memeUniform_killerRabbit";
    model = "\A3\Animals_F\rabbit\rabbit_F.p3d";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Rabbit_F.jpg";

    faction = "ls_memefor";
    editorSubcategory = "ls_edsubcat_units";

    armor = 10;
    armorStructural = 0.4;
    explosionShielding = 0.04;
    minTotalDamageThreshold = 0.001;
    impactDamageMultiplier = 0.5;

    moves = "ls_CfgMovesKillerRabbit";
    nameSound = "veh_animal";
    fsmFormation = "";
    fsmDanger = "";
    maxTurnAngularVelocity = 30;
    costTurnCoef = 1e-05;
    canBleed = 0;
    boneHead = "head";
    bonePrimaryWeapon = "head";
    weaponBone = "head";
    triggerAnim = "";

    class Wounds {
        tex[] = {};
        mat[] = {
            "A3\Animals_F\Rabbit\data\Rabbit.rvmat",
            "A3\Animals_F\Rabbit\data\W1_Rabbit.rvmat",
            "A3\Animals_F\Rabbit\data\W2_Rabbit.rvmat"
        };
    };
};
