class CfgVehicles {
    // Has to inherit from ace
    class ace_dragging_clone;
    class ls_droid_droideka_clone: ace_dragging_clone {
        scope = 1;
        author = AUTHOR;
        displayName = ECSTRING(characters_droid,droideka);

        moves = "CfgMovesDroideka_ls";
        gestures = "CfgGesturesDroideka_ls";
        uniformClass = "ls_droidUniform_droideka";
        nakedUniform = "ls_droidUniform_droideka";
        model = QPATHTOEF(characters_droid,uniforms\droideka\ls_uniform_droideka.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {QPATHTOEF(characters_droid,uniforms\droideka\data\camo1_co.paa), QPATHTOEF(characters_droid,uniforms\droideka\data\camo2_co.paa)};

        identityTypes[] = {"ls_head_droideka", "ls_voice_none"};
        picture = QPATHTOEF(characters_droid,data\ui\droideka_icon_side_ca.paa);
        icon = QPATHTOEF(characters_droid,data\ui\droideka_icon_ca.paa);
        genericNames = "ls_droid_droideka";

        #include "\ls\core\addons\characters_droid\cfg\droidekaSounds.hpp"
    };
};
