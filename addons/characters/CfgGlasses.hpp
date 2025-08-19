class CfgGlasses {
    class G_Combat;
    class ls_combatGlasses_base: G_Combat {
        scope = 0;
        author = AUTHOR;
        model = "\A3\Weapons_f\DummyNVG.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        identityTypes[] = {"NoGlasses", 0};
        mass = 2;
        mode = 4;

        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
        ACE_OverlayDirt = "\A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ACE_Resistance = 1;
        ACE_Protection = 1;
        ACE_TintAmount = 0;
    };

    class G_Diving;
    class ls_divingGlasses_base: G_Diving {
        scope = 0;
        author = AUTHOR;
        model = "\A3\Weapons_f\DummyNVG.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        identityTypes[] = {"NoGlasses", 0};
        mass = 2;
        mode = 4;

        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
        ACE_OverlayDirt = "\A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ACE_Resistance = 1;
        ACE_Protection = 1;
        ACE_TintAmount = 0;
    };

    #include "equipment\chestrig\CfgGlasses.hpp"
    #include "equipment\coif\CfgGlasses.hpp"
    #include "equipment\hood\CfgGlasses.hpp"
    #include "equipment\scarf\CfgGlasses.hpp"
    #include "equipment\shoulderPouch\CfgGlasses.hpp"
    #include "vests\poncho\CfgGlasses.hpp"
};
