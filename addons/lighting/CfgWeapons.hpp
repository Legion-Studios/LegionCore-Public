class CfgWeapons {
    class Binocular;
    class NVGoggles: Binocular {
        class ItemInfo;
    };
    class ls_nvg_headlamp_invisible: NVGoggles {
        scope = 2;
        author = AUTHOR;
        displayName = "Invisible Headlamp (Center)";
        descriptionShort = "";
        descriptionUse = "";

        model = QPATHTOEF(common,data\models\ls_empty.p3d);
        modelOptics = QPATHTOEF(common,data\models\ls_empty.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        visionMode[] = {"Normal"};
        ace_nightvision_bluRadius = 0;
        ace_nightvision_border = "";

        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOEF(common,data\models\ls_empty.p3d);
            modelOff = QPATHTOEF(common,data\models\ls_empty.p3d);
            hiddenSelections[] = {};
        };

        class ADDON: GVAR(default) {
            soundOn = QGVAR(toggle);
            soundOff = QGVAR(toggle);
            sources[] = {"center"};
        };
    };

    class ls_nvg_headlamp_invisible_double: ls_nvg_headlamp_invisible {
        author = AUTHOR;
        displayName = "Invisible Headlamp (Double)";

        class ADDON: ADDON {
            sources[] = {"left", "right"};
        };
    };
};
