class CfgGlasses {
    class None;
    class ls_glasses_headlamp_invisible: None {
        scope = 2;
        author = AUTHOR;
        displayName = "Invisible Headlamp (Center)";

        model = QPATHTOEF(common,data\models\ls_empty.p3d);
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        class ADDON: GVAR(default) {
            soundOn = QGVAR(toggle);
            soundOff = QGVAR(toggle);
            sources[] = {"center"};
        };
    };

    class ls_glasses_headlamp_invisible_double: ls_glasses_headlamp_invisible {
        author = AUTHOR;
        displayName = "Invisible Headlamp (Double)";

        class ADDON: ADDON {
            sources[] = {"left", "right"};
        };
    };
};
