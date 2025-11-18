class ls_garUniform_jediCommander: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Jedi Commander Armor";

    // model = QPATHTOF(uniforms\jediCommander\ls_uniform_jedi_commander.p3d);
    picture = QPATHTOF(data\ui\jediUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_gar_jediCommander";
        containerClass = "Supply150";
        mass = 40;
    };
};
