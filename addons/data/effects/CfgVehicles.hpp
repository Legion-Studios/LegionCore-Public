class ls_tracer_placeable_base: House_F {
    scope = 0;
    author = AUTHOR;
    displayName = "==Tracer Base==";
    editorCategory = "ls_edcat_statics";
    editorSubcategory = "ls_edsubcat_screenshotSupport";
    icon = QPATHTOF(icons\actions\intel.paa);
    model = QPATHTOF(effects\ls_laser_blue.p3d);
};

// STANDARD TRACERS
class ls_tracer_blue_placeable: ls_tracer_placeable_base {
    scope = 2;
    displayName = "Tracer: Blue Plasma";
    editorPreview = QPATHTOF(effects\data\editorPreview\ls_tracer_blue_placeable.jpg);
    hiddenSelections[] = {"ends"};
    hiddenSelectionsTextures[] = {""};
};

class ls_tracer_red_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Red Plasma";
    model = QPATHTOF(effects\ls_laser_red.p3d);
    editorPreview = QPATHTOF(effects\data\editorPreview\ls_tracer_red_placeable.jpg);
};

class ls_tracer_green_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Green Plasma";
    model = QPATHTOF(effects\ls_laser_green.p3d);
    editorPreview = QPATHTOF(effects\data\editorPreview\ls_tracer_green_placeable.jpg);
};

class ls_tracer_yellow_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Yellow Plasma";
    model = QPATHTOF(effects\ls_laser_yellow.p3d);
    editorPreview = QPATHTOF(effects\data\editorPreview\ls_tracer_yellow_placeable.jpg);
};

class ls_tracer_beamGreen_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Green Beam";
    model = QPATHTOF(effects\ls_beam_green.p3d);
};
class ls_tracer_greenBeam_placeable: ls_tracer_beamGreen_placeable {
    scope = 1;
};

class ls_tracer_ice_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Ice";
    model = QPATHTOF(effects\ls_laser_ice.p3d);
};

class ls_tracer_heat_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Heat";
    model = QPATHTOF(effects\ls_laser_heat.p3d);
};

class ls_tracer_lime_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Lime";
    model = QPATHTOF(effects\ls_laser_lime.p3d);
};

class ls_tracer_grey_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Grey";
    model = QPATHTOF(effects\ls_laser_grey.p3d);
};

class ls_tracer_aheago_placeable: ls_tracer_blue_placeable {
    displayName = "Tracer: Aheago";
    model = QPATHTOF(effects\ls_laser_aheago.p3d);
};

// STUNS

class ls_tracer_stun_placeable: ls_tracer_placeable_base {
    scope = 2;
    scopeCurator = 2;
    displayName = "Tracer: Stun";
    model = QPATHTOF(effects\ls_stun_blue.p3d);
    editorPreview = QPATHTOF(effects\data\editorPreview\ls_tracer_stun_placeable.jpg);
};

// MUZZLEFLASHES

class ls_muzzleflash_blue_placeable: ls_tracer_placeable_base {
    scope = 2;
    scopeCurator = 2;
    displayName = "Muzzleflash: Blue";
    model = QPATHTOF(effects\ls_muzzleflash_pistol_blue.p3d);
    editorPreview = QPATHTOF(effects\data\editorPreview\muzzleflash_blue.jpg);
};

class ls_muzzleflash_red_placeable: ls_tracer_placeable_base {
    scope = 2;
    scopeCurator = 2;
    displayName = "Muzzleflash: Red";
    model = QPATHTOF(effects\ls_muzzleflash_pistol_red.p3d);
    editorPreview = QPATHTOF(effects\data\editorPreview\muzzleflash_red.jpg);
};

class ls_muzzleflash_yellow_placeable: ls_tracer_placeable_base {
    scope = 2;
    scopeCurator = 2;
    displayName = "Muzzleflash: Yellow";
    model = QPATHTOF(effects\ls_muzzleflash_pistol_yellow.p3d);
    editorPreview = QPATHTOF(effects\data\editorPreview\muzzleflash_yellow.jpg);
};
