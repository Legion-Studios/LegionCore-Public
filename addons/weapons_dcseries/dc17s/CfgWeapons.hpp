class ls_weapon_dc17s_base: ls_pistol_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(dc17s_displayName);
    descriptionShort = ECSTRING(weapons,blasterPistol);

    model = QPATHTOF(dc17s\ls_weapon_dc17s.p3d);
    hiddenSelections[] = {
        "frame",
        "movingParts",
        "grip"
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

    recoil = "recoil_pistol_4five";
    aimTransitionSpeed = 1.5;
    inertia = 0.3;
    dexterity = 1.7;
    initSpeed = -0.944882;
    maxRecoilSway = 0.008;
    swayDecaySpeed = 2;

    muzzles[] = {"this"};
    modes[] = {"Single"};
    class Single: Mode_SemiAuto {
        recoil = "recoil_pistol_heavy";
        recoilProne = "recoil_prone_pistol_heavy";
        reloadTime = RPM(300);
        dispersion = 0.001015;
        maxRange = 50;
        maxRangeProbab = 0.1;
        midRange = 25;
        midRangeProbab = 0.6;
        minRange = 5;
        minRangeProbab = 0.3;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc17s_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
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
                acc_flashlight_pistol = 1;
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
    displayName = CSTRING(dc17s_fordo_displayName);
    descriptionShort = CSTRING(dc17s_fordo_descriptionShort);
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
