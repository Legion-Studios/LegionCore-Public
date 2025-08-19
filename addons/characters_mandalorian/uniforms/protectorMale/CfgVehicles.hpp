class ls_mandalorian_protectorMale_base: ls_mandalorian_base {
    author = AUTHOR;

    uniformClass = "ls_mandalorianUniform_protectorMale";
    model = QPATHTOF(uniforms\protectorMale\ls_uniform_mandalorian_protectorMale.p3d);
    hiddenSelections[] = {
        "camo_upper",
        "camo_lower",
        "camo_undersuit",
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\protectorMale\data\upper_co.paa),
        QPATHTOF(uniforms\protectorMale\data\lower_co.paa),
        QPATHTOF(uniforms\protectorMale\data\undersuit_co.paa)
    };
};
