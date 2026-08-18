class ls_clone_scout_base: ls_clone_unit_base {
    scope = 1;
    author = AUTHOR;
    displayName = CSTRING(scout);

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
};

class ls_clone_scout_undersuit: ls_clone_scout_base {
    author = AUTHOR;

    uniformClass = "ls_cloneUniform_scout_undersuit";
    nakedUniform = "U_BasicBody";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\scout\data\camo1_co.paa)
    };
};

// TODO: Move to characters_clone_legions
class ls_clone_scout_standard_DC15A: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(scout);

    uniformClass = "ls_cloneUniform_scout";
    nakedUniform = "ls_cloneUniform_scout_undersuit";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_scout.jpg);

    weapons[] = {"ls_weapon_dc15a", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15a", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15a")};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15a")};
    linkedItems[] = {"ls_cloneHelmet_scout", "ls_cloneVest_scout", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_cloneHelmet_scout", "ls_cloneVest_scout", LINKED_ITEMS_CLONE};
    backpack = "";
};

DEPRECATED(ls_clone_scout,ls_clone_scout_base);
