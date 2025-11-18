class ls_weapon_e60r_base: ls_launcher_base {
    scope = 0;
    author = AUTHOR;
    displayName = "E-60R";

    model = QPATHTOF(e60r\ls_weapon_e60r.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(e60r\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\e60r_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOEF(weapons_plx,anims\plx1_handanim.rtm)
    };

    cursor = "missile";

    class Single: Single {
        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {QPATHTOEF(sounds,weapons\launcher\e60r_shot.wss), 10, 1, 2000};
            soundBegin[] = {"begin1", 1};
            // soundSetShot[] = {"Launcher_Titan_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
        };
    };
    class TopDown: TopDown {
        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {QPATHTOEF(sounds,weapons\launcher\e60r_shot.wss), 10, 1, 2000};
            soundBegin[] = {"begin1", 1};
            // soundSetShot[] = {"Launcher_Titan_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
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

class ls_weapon_e60r_at: ls_weapon_e60r_base {
    scope = 2;
    author = AUTHOR;
    displayName = "E-60R M1";
    descriptionShort = "Anti-Tank Missile Launcher";
    baseWeapon = "ls_weapon_e60r_at";

    magazines[] = {"ls_magazine_e60r_at"};
    magazineWell[] = {"ls_magwell_e60r_at"};

    nameSound = "atlauncher";
    cmImmunity = 0.2;
    weaponLockSystem = WEAPONLOCK_INFRARED;
};

class ls_weapon_e60r_aa: ls_weapon_e60r_base {
    scope = 2;
    author = AUTHOR;
    displayName = "E-60R M2";
    descriptionShort = "Anti-Air Missile Launcher";
    baseWeapon = "ls_weapon_e60r_aa";

    modes[] = {"Single"};
    magazines[] = {"ls_magazine_e60r_aa"};
    magazineWell[] = {"ls_magwell_e60r_aa"};

    nameSound = "aalauncher";
    cmImmunity = 0.4;
    initSpeed = 30;
    recoil = "recoil_titan_long";
    weaponLockSystem = WEAPONLOCK_RADAR;
};
