class ls_weapon_westarM5_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayname = CSTRING(westarM5_displayName);
    descriptionShort = ECSTRING(weapons,blasterRifle);
    baseWeapon = "ls_weapon_westarM5";

    model = QPATHTOF(westarM5\ls_weapon_westarM5.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(westarM5\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\westarM5_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(westarM5\anims\westarM5_handanim.rtm)};
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_westarM5"};
    magazineWell[] = {"ls_magwell_westarM5"};

    drySound[] = {QPATHTOEF(sounds,weapons\dry\westar.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\dc17s\reload.wss), 0.56234133, 1, 30};
    changeFireModeSound[] = {"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_firemode.wss", 0.316228, 1, 5};

    fireLightDiffuse[] = {FIRELIGHT_BLUE};

    aimTransitionSpeed = 0.9;
    recoil = "recoil_ak12";
    dexterity = 1.4;
    initSpeed = -1;
    inertia = 0.6;

    muzzles[] = {"this"};
    modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2"};
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(400);
        dispersion = 0.0014545;
        maxRange = 30;
        maxRangeProbab = 0.05;
        midRange = 15;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.9;
        aiRateOfFire = 1e-06;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_westarM5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class Burst: Mode_Burst {
        reloadTime = RPM(500);
        dispersion = 0.0014545;
        maxRange = 100;
        maxRangeProbab = 0.05;
        midRange = 50;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.9;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_westarM5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class Single: Mode_SemiAuto {
        reloadTime = RPM(400);
        dispersion = 0.0014545;
        maxRange = 250;
        maxRangeProbab = 0.2;
        midRange = 150;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.5;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_westarM5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class burst_medium: Burst {
        showToPlayer = 0;
        maxRange = 100;
        maxRangeProbab = 0.05;
        midRange = 75;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.5;
        aiRateOfFire = 2;
    };
    class single_medium_optics1: Single {
        showToPlayer = 0;
        requiredOpticType = 1;

        maxRange = 450;
        maxRangeProbab = 0.3;
        midRange = 300;
        midRangeProbab = 0.7;
        minRange = 5;
        minRangeProbab = 0.2;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
    };
    class single_medium_optics2: single_medium_optics1 {
        requiredOpticType = 2;
        maxRange = 600;
        maxRangeProbab = 0.05;
        midRange = 400;
        midRangeProbab = 0.7;
        minRange = 100;
        minRangeProbab = 0.1;
        aiRateOfFire = 6;
        aiRateOfFireDistance = 600;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_westarM5_scope = 1;
            };
        };
    };
};

class ls_weapon_westarM5: ls_weapon_westarM5_base {
    scope = 2;
    author = AUTHOR;
};

class ls_weapon_westarM5_scoped: ls_weapon_westarM5 {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_westarM5_scope";
        };
    };
};

class ls_weapon_westarM5_ugl: ls_weapon_westarM5_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(westarM5_ugl_displayName);
    baseWeapon = "ls_weapon_westarM5_ugl";

    model = QPATHTOF(westarM5\ls_weapon_westarM5_ugl.p3d);
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(westarM5\anims\westarM5_ugl_handanim.rtm)};
    uiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";

    aimTransitionSpeed = 0.8;
    inertia = 0.7;

    muzzles[] = {"this", "UGL"};
    class UGL: UGL_F {
        displayName = "$STR_dn_staticGrenadeLauncher";
        magazines[] = {"ls_magazine_40mm_G76_HEF"};
        magazineWell[] = {"UGL_40x36", "ls_magwell_westarM5_ugl"};

        useModelOptics = 0;
        useExternalOptics = 0;
        initSpeed = 75;
        cameraDir = "OP_look";
        discreteDistance[] = {100};
        discreteDistanceInitIndex = 1;
        discreteDistanceCameraPoint[] = {"OP_eye"};

        class Single: Single {
            class StandardSound {
                begin1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_01.wss", 0.707946, 1, 200};
                begin2[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_02.wss", 0.707946, 1, 200};
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
                closure1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL.wss", 1, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
        };
    };
};

class ls_weapon_westarM5_ugl_scoped: ls_weapon_westarM5_ugl {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_westarM5_scope";
        };
    };
};

class optic_DMS: ItemCore {
    class ItemInfo: InventoryOpticsItem_Base_F {
        class OpticsModes {
            class Iron;
            class Snip;
        };
    };
};
class ls_cows_westarM5_scope: optic_DMS {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(westarM5_optic_scope_displayName);
    descriptionShort = CSTRING(westarM5_optic_scope_descriptionShort);

    model = QPATHTOF(westarM5\ls_cows_westarM5_scope.p3d);
    picture = QPATHTOF(data\ui\westarM5_scope_ui_ca.paa);

    class ItemInfo: ItemInfo {
        modelOptics = QPATHTOF(westarM5\ls_optic_westarM5.p3d);

        class OpticsModes: OpticsModes {
            class Iron: Iron {};
            class Snip: Snip {
                visionMode[] = {"Normal", "NVG"};
                thermalMode[] = {0, 1};
            };
        };
    };
};
