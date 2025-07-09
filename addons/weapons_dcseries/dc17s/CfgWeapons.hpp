class ls_weapon_dc17s_base: ls_pistol_base {
    scope = 0;
    author = AUTHOR;
    displayName = "DC-17S Blaster Pistol";

    model = QPATHTOF(dc17s\ls_weapon_dc17s.p3d);
    hiddenSelections[] = {
        "_frame",
        "_movingParts",
        "_grip"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc17s\data\frame_co.paa),
        QPATHTOF(dc17s\data\movingParts_co.paa),
        QPATHTOF(dc17s\data\grip_co.paa)
    };
    picture = QPATHTOF(data\ui\dc17s_ui_ca.paa);

    magazines[] = {"ls_magazine_dc17s"};
    magazineWell[] = {"ls_magwell_dc17s"};

    drySound[] = {QPATHTOEF(sounds,weapons\dry\westar.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\westar35.ogg), 0.56234133, 1, 30};
    soundBullet[] = {};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    inertia = 1.4;
    dexterity = 1.7;
    initSpeed = 300;
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;

    modes[] = {"Single", "close", "short", "medium"};
    muzzles[] = {"this"};

    class Single: Mode_SemiAuto {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc17s_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
        recoil = "recoil_pistol_heavy";
        recoilProne = "recoil_prone_pistol_heavy";
        reloadTime = 0.2;
        dispersion = 0.001015;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
    };
    class close: Single {
        showToPlayer = 0;
        aiRateOfFire = 0.25;
        aiRateOfFireDistance = 400;
        minRange = 0;
        minRangeProbab = 0.05;
        midRange = 200;
        midRangeProbab = 0.79;
        maxRange = 400;
        maxRangeProbab = 0.2;
    };
    class short: close {
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 500;
        minRange = 300;
        minRangeProbab = 0.2;
        midRange = 400;
        midRangeProbab = 0.7;
        maxRange = 500;
        maxRangeProbab = 0.2;
    };
    class medium: close {
        aiRateOfFire = 1;
        aiRateOfFireDistance = 900;
        minRange = 400;
        minRangeProbab = 0.2;
        midRange = 700;
        midRangeProbab = 0.7;
        maxRange = 900;
        maxRangeProbab = 0.2;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 24;
        holsterScale = 0.9;

        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {
                ls_muzzle_impulsor = 1;
            };
        };

        class CowsSlot: CowsSlot {
            class compatibleItems {};
        };

        class PointerSlot: PointerSlot {
            class compatibleItems {
                acc_flashlight = 1;
                acc_flashlight_pistol = 1;
                acc_pointer_IR = 1;
            };
        };
    };
};

class ls_weapon_dc17s: ls_weapon_dc17s_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc17s";
};

class ls_weapon_dc17s_fordo: ls_weapon_dc17s {
    author = AUTHOR;
    displayName = "DC-17S Blaster Pistol (Fordo)";
    baseWeapon = "ls_weapon_dc17s_fordo";

    hiddenSelectionsTextures[] = {
        QPATHTOF(dc17s\data\fordo\frame_co.paa),
        QPATHTOF(dc17s\data\movingParts_co.paa),
        QPATHTOF(dc17s\data\fordo\grip_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(dc17s\data\fordo\frame.rvmat),
        "",
        QPATHTOF(dc17s\data\fordo\grip.rvmat)
    };
    picture = QPATHTOF(data\ui\dc17s_fordo_ui_ca.paa);
};
