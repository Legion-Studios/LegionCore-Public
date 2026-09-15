class ls_weapon_e60r_base: ls_launcher_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(e60r_displayName);

    model = QPATHTOF(e60r\ls_weapon_e60r.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(e60r\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\e60r_ui_ca.paa);
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOEF(weapons_plx,anims\plx1_handanim.rtm)};

    magazines[] = {"ls_magazine_e60r_at"};
    magazineWell[] = {"ls_magwell_e60r"};

    recoil = "recoil_titan_long";
    cursor = "missile";
    intertia = 1.4;
    aimTransitionSpeed = 0.5;

    class Single: Single {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e60r_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
        };
    };

    class TopDown: TopDown {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e60r_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
        };
    };

    class OpticsModes {
        class StepScope {
            cameraDir = "look";
            discretefov[] = {0.08333, 0.04167};
            discreteInitIndex = 0;
            distanceZoomMax = 300;
            distanceZoomMin = 300;
            memoryPointCamera = "eye";
            nFovLimit = 0.08333;
            opticsDisablePeripherialVision = 1;
            opticsFlare = 0;
            opticsID = 1;
            opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
            opticsZoomInit = 0.08333;
            opticsZoomMax = 0.04167;
            opticsZoomMin = 0.08333;
            useModelOptics = 1;
            visionMode[] = {"Normal", "TI"};
            thermalMode[] = {0, 1};
        };
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 200;
    };
};
class ls_weapon_e60r: ls_weapon_e60r_base {
    scope = 2;
    author = AUTHOR;

    ace_javelin_enabled = 1;
};
DEPRECATED(ls_weapon_e60r_at,ls_weapon_e60r);
DEPRECATED(ls_weapon_e60r_aa,ls_weapon_e60r);
