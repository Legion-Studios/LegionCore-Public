class lsd_gar_arfFlaps_hud: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic ARF Flaps";

    model = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlaps.p3d);
    hiddenSelections[] = {"camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arf\data\camo2_co.paa)
    };
    picture = QPATHTOF(_ui\arf_flaps_ui_ca.paa);

    ACE_OverlayDirt = "\A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
    ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

    hoa_sling_slingWithHelmet = 1;
};

class lsd_gar_arfFlapsAntenna_hud: lsd_gar_arfFlaps_hud {
    author = AUTHOR;
    displayName = "Republic ARF Flaps + Antenna";

    model = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlapsAntenna.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\arfAntenna\data\camo1_co.paa),
        QPATHTOF(helmets\arf\data\camo2_co.paa)
    };
};
