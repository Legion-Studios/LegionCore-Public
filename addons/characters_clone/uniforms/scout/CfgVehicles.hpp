class ls_clone_scout_base: ls_clone_unit_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Clone Scout Trooper";

    uniformClass = "ls_cloneUniform_scout";
    nakedUniform = "ls_cloneUniform_scout_undersuit";
    model = QPATHTOF(uniforms\scout\ls_uniform_clone_scout.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\scout\data\camo1_co.paa),
        QPATHTOF(uniforms\scout\data\armor_co.paa)
    };

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_scout.jpg);

    linkedItems[] = {"ls_cloneHelmet_scout", "ls_cloneVest_scout", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_cloneHelmet_scout", "ls_cloneVest_scout", LINKED_ITEMS_CLONE};
};

class ls_clone_scout_undersuit: ls_clone_scout_base {
    author = AUTHOR;
    displayName = "Clone Scout Trooper Undersuit";

    uniformClass = "ls_cloneUniform_scout_undersuit";
    nakedUniform = "U_BasicBody";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\scout\data\camo1_co.paa)
    };
};
