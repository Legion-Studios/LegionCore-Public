class lsd_gar_artilleryGunner_hud: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Artillery Gunner Shielding (Phase 2)";

    model = QPATHTOF(equipment\nvgs\artilleryGunner\lsd_gar_artilleryGunner_nvg.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\artilleryGunner\data\camo1_co.paa)
    };

    ACE_Overlay = QPATHTOEF(characters_clone,equipment\interiorHud\data\p2_hud_ca.paa);
    ACE_OverlayDirt = QPATHTOEF(characters_clone,equipment\interiorHud\data\p2_hud_dirty_ca.paa);
    ACE_OverlayCracked = QPATHTOEF(characters_clone,equipment\interiorHud\data\p2_hud_cracked_ca.paa);

    hoa_sling_slingWithHelmet = 1;
};

class lsd_gar_p1ArtilleryGunner_hud: lsd_gar_artilleryGunner_hud {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Artillery Gunner Shielding (Phase 1)";

    ACE_Overlay = QPATHTOEF(characters_clone,equipment\interiorHud\data\p1_hud_ca.paa);
    ACE_OverlayDirt = QPATHTOEF(characters_clone,equipment\interiorHud\data\p1_hud_dirty_ca.paa);
    ACE_OverlayCracked = QPATHTOEF(characters_clone,equipment\interiorHud\data\p1_hud_cracked_ca.paa);
};
