class ls_clone_rangefinder_hud: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper Rangefinder";

    model = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_rangefinder_nvg_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_rangefinder_ca.paa);

    mode = 4;
    mass = 2;
    identityTypes[] = {};

    ACE_Overlay = QPATHTOEF(characters_clone,equipment\interiorHud\data\p2_hud_ca.paa);
    ACE_OverlayDirt = QPATHTOEF(characters_clone,equipment\interiorHud\data\p2_hud_dirty_ca.paa);
    ACE_OverlayCracked = QPATHTOEF(characters_clone,equipment\interiorHud\data\p2_hud_cracked_ca.paa);
    ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
    ACE_Resistance = 1;
    ACE_Protection = 1;
    ACE_TintAmount = 0;

    hoa_sling_slingWithHelmet = 1;
};

class ls_clone_p1Rangefinder_hud: ls_clone_rangefinder_hud {
    author = AUTHOR;
    displayName = "Clone Trooper P1 Rangefinder";

    model = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_p1Rangefinder_nvg_off.p3d);

    ACE_Overlay = QPATHTOEF(characters_clone,equipment\interiorHud\data\p1_hud_ca.paa);
    ACE_OverlayDirt = QPATHTOEF(characters_clone,equipment\interiorHud\data\p1_hud_dirty_ca.paa);
    ACE_OverlayCracked = QPATHTOEF(characters_clone,equipment\interiorHud\data\p1_hud_cracked_ca.paa);
};
