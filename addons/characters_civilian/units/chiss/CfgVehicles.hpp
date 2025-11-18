class ls_civilian_chiss_scientist: C_scientist_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_scientist);

class ls_civilian_chiss_journalist: C_journalist_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_journalist);

class ls_civilian_chiss_worker: C_man_w_worker_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_worker);

class ls_civilian_chiss_pilot: C_man_pilot_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};

    ROLE_PILOT;
};
CIVILIAN_PRESENCE(ls_civilian_chiss_pilot);

class ls_civilian_chiss_polo1: C_man_polo_1_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_polo1);

class ls_civilian_chiss_polo2: C_man_polo_2_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_polo2);

class ls_civilian_chiss_polo3: C_man_polo_3_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_polo3);

class ls_civilian_chiss_polo4: C_man_polo_4_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_polo4);

class ls_civilian_chiss_polo5: C_man_polo_5_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_polo5);

class ls_civilian_chiss_polo6: C_man_polo_6_F {
    author = AUTHOR;
    faction = "ls_civilians";
    editorPreview = "";
    editorSubcategory = "ls_edsubcat_chissAscendency";
    identityTypes[] = {"LanguageENG_F", "ls_head_chiss"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_polo6);

class ls_civilian_chiss_officer: ls_civilian_chiss_polo6 {
    author = AUTHOR;
    displayName = "Officer";

    uniformClass = "U_B_GEN_Commander_F";
    model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Commander_F_co.paa"};

    linkedItems[] = {"H_Beret_gen_F", "V_TacVest_gen_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"H_Beret_gen_F", "V_TacVest_gen_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};
CIVILIAN_PRESENCE(ls_civilian_chiss_officer);
