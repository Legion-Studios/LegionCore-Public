class lsd_gar_arfAntenna_hud: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic ARF antenna (Combat)";

    model = QPATHTOF(equipment\arfAntenna\lsd_gar_arfAntenna.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\arfAntenna\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_arf_antenna_ca.paa);

    ACE_OverlayDirt = "\A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
    ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

    hoa_sling_slingWithHelmet = 1;
};

class lsd_gar_arfAntennaPressurized_hud: ls_divingGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic ARF antenna (Pressurized)";

    model = QPATHTOF(equipment\arfAntenna\lsd_gar_arfAntenna.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\arfAntenna\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_arf_antenna_ca.paa);

    ACE_OverlayDirt = "\A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
    ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

    hoa_sling_slingWithHelmet = 1;
};
