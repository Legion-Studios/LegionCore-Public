class ls_gar_engineer_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Engineer Helmet";

    model = QPATHTOF(helmets\engineer\ls_cloneHelmet_engineer.p3d);
    hiddenSelections[] = {
        "camo1",
        "illum",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\engineer\data\helmet_co.paa),
        QPATHTOF(helmets\engineer\data\light_co.paa),
        QPATHTOF(helmets\engineer\data\visor_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        ""
    };
    picture = QPATHTOF(_ui\engineer_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\engineer\ls_cloneHelmet_engineer.p3d);
        hiddenSelections[] = {
            "camo1",
            "illum",
            "visor"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };

    class ls_lighting {
        enabled = 1;
        lightModes[] = {
            QEGVAR(lighting,whiteHigh), QEGVAR(lighting,whiteLow),
            QEGVAR(lighting,redHigh), QEGVAR(lighting,redLow),
            QEGVAR(lighting,blueHigh), QEGVAR(lighting,blueLow)
        };

        soundOn = QEGVAR(lighting,activationRepublic);
        soundOff = QEGVAR(lighting,deactivationRepublic);
        soundToggle = QEGVAR(lighting,toggle);

        sources[] = {"center"};
        class center {
            attachBone = "head";
            attachBoneFollow = 1;
            attachOffset[] = {-0.0575, 0.087, 0.2};
            attachVectorDir[] = {0, 0, 0};
            attachVectorUp[] = {0, 0, 0};
        };
    };
};
