class ls_jabiimUniform_nimbusCommando: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Nimbus Commando Uniform";

    model = QPATHTOF(uniforms\nimbusCommando\ls_uniform_nimbusCommando.p3d);
    picture = QPATHTOF(data\ui\nimbusCommandoUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_jabiim_nimbusCommando";
        containerClass = "Supply150";
        mass = 40;
    };
};
