class ls_orsf_trooper: ls_blufor_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Special Tactics Trooper";

    faction = "ls_orsf";

    uniformClass = "ls_orsfUniform_trooper";
    model = QPATHTOF(uniforms\trooper\ls_uniform_orsf_trooper.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3",
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\trooper\data\upper_co.paa),
        QPATHTOF(uniforms\trooper\data\lower_co.paa),
        QPATHTOF(uniforms\trooper\data\tacRig_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_orsf_trooper.jpg);

    weapons[] = {"ls_weapon_dc15a", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15a", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15a")};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15a")};
    linkedItems[] = {"ls_orsfHelmet_trooper", "ls_orsfVest_trooper", LINKED_ITEMS_ORSF};
    respawnlinkedItems[] = {"ls_orsfHelmet_trooper", "ls_orsfVest_trooper", LINKED_ITEMS_ORSF};
    backpack = "ls_orsfBackpack_trooper";

    camouflage = 1;
    sensitivity = 1.75;
    threat[] = {0.8, 0.3, 0.3};
    armor = 6;
    armorStructural = 4;
    explosionShielding = 0.3;
    minTotalDamageThreshold = 0.001;
    impactDamageMultiplier = 0.3;
};
