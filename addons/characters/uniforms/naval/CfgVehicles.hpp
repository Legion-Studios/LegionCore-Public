class ls_naval_unit_base: ls_blufor_unit_base {
    scope = 0;
    author = AUTHOR;
    displayName = "Naval Uniform";

    model = QPATHTOF(uniforms\naval\ls_uniform_naval.p3d);
    uniformClass = "ls_uniform_naval";
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2",
        "camo3"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\naval\data\camo_co.paa),
        QPATHTOF(uniforms\naval\data\camo1_co.paa)
    };
};
