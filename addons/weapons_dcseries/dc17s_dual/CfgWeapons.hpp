class ls_weapon_dc17s_dual_base: ls_weapon_dc17s_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(dc17s_dual_displayName);

    model = QPATHTOF(dc17s_dual\ls_weapon_dc17s_dual.p3d);

    magazines[] = {};
    magazineWell[] = {};

    GVAR(weaponType) = WEAPONTYPE_AKIMBO;
    GVAR(akimboDummy) = "ls_weapon_dc17s_dual_dummyWeapon";
    GVAR(akimboReloadTime) = 2.49;

    inertia = 0.3 / 2;
    dexterity = 1.7 / 2;

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(dc17s_dual\anims\dc17s_dual_handanim.rtm)};
    reloadAction = "ls_reload_dc17s_dual";
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17s_dual.ogg), 3.5481339, 1, 10};

    modes[] = {};
    muzzles[] = {"Right", "Left"};
    class Right: ls_weapon_dc17s_base {
        displayName = ECSTRING(weapons,rightHand);
        reloadAction = "ls_reload_dc17s_dual";
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17s_dual_reload.wss), 3.5481339, 1, 10};
        magazines[] = {"ls_magazine_dc17s"};
        magazineWell[] = {"ls_magwell_dc17s", "ls_magwell_dc17s_dual"};

        selectionFireAnim = "zasleh 1";
        muzzlePos = "usti hlavne 1";
        muzzleEnd = "konec hlavne 1";

        class EventHandlers {
            reload = QUOTE(call FUNC(animateAkimbo)); // Triggers *before* reload
        };
    };

    class Left: Right {
        displayName = ECSTRING(weapons,leftHand);
        selectionFireAnim = "zasleh 2";
        muzzlePos = "usti hlavne 2";
        muzzleEnd = "konec hlavne 2";
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {};
        };

        class CowsSlot: CowsSlot {
            class compatibleItems {};
        };

        class PointerSlot: PointerSlot {
            class compatibleItems {};
        };
    };
};

class ls_weapon_dc17s_dual: ls_weapon_dc17s_dual_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc17s_dual";
};

class ls_weapon_dc17s_dual_fordo: ls_weapon_dc17s_dual {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(dc17s_dual_fordo_displayName);
    descriptionShort = CSTRING(dc17s_fordo_descriptionShort);
    baseWeapon = "ls_weapon_dc17s_dual_fordo";

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

    GVAR(akimboDummy) = "ls_weapon_dc17s_dual_fordo_dummyWeapon";
};

class ls_weapon_dc17s_dual_dummyWeapon: NVGoggles {
    scope = 1;
    author = AUTHOR;
    displayName = "";
    descriptionShort = "";

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
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);

    visionMode[] = {"Normal"};
    thermalMode[] = {0, 1};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(dc17s_dual\ls_weapon_dc17s_dual_dummy.p3d);
        modelOff = QPATHTOF(dc17s_dual\ls_weapon_dc17s_dual_dummy.p3d);
        hiddenSelections[] = {
            "frame",
            "movingParts",
            "grip"
        };
        mass = 0;
    };
};

class ls_weapon_dc17s_dual_fordo_dummyWeapon: ls_weapon_dc17s_dual_dummyWeapon {
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
