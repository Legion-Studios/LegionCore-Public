class ls_gar_marshalCommander_base: ls_clone_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Marshal Commander";
    genericNames = "ls_clone_p2_cc";

    uniformClass = "ls_gar_marshalCommander_uniform";
    nakedUniform = "lsd_gar_bodyGlove_uniform";
    model = QPATHTOF(uniforms\marshalCommander\ls_gar_marshalCommander_uniform.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "undersuit"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\marshalCommander\data\camo1_co.paa),
        QPATHTOF(uniforms\phase2\data\camo2_co.paa),
        QPATHTOF(uniforms\phase2\data\undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_gar_marshalCommander_base.jpg);

    weapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    linkedItems[] = {"ls_gar_phase2_helmet", "ls_gar_holster_vest", "lsd_gar_p2MarshalCommander_nvg", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_gar_phase2_helmet", "ls_gar_holster_vest", "lsd_gar_p2MarshalCommander_nvg", LINKED_ITEMS_CLONE};

    ROLE_OFFICER;
};
