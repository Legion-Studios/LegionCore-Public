class ls_droidGlasses_b1Tech: ls_combatGlasses_base {
    author = AUTHOR;
    scope = 2;
    displayName = CSTRING(b1_tech_nvg);
    descriptionShort = CSTRING(b1_tech_nvg_description);

    model = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Tech.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\b1\nvgs\monocles\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1TechNVG_ui_ca.paa);

    hoa_sling_slingWithHelmet = 1;
};

class ls_droidGlasses_b1Tech_geonosis: ls_droidGlasses_b1Tech {
    author = AUTHOR;
    displayName = CSTRING(b1_tech_geonosis_nvg);
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\b1\nvgs\monocles\data\geonosis_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1TechNVG_geonosis_ui_ca.paa);
};

class ls_droidGlasses_b1Grenadier: ls_droidGlasses_b1Tech {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_nvg);
    model = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Grenadier.p3d);
    picture = QPATHTOF(data\ui\b1GrenadierNVG_ui_ca.paa);
};
