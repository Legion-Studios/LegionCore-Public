class ls_gar_engineer_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Engineer Vest";

    model = QPATHTOF(vests\engineer\ls_gar_engineer_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\engineer\data\heavy_accessories_engineer_co.paa)
    };
    picture = QPATHTOF(_ui\airborne_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\engineer\ls_gar_engineer_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 80;
        containerClass = "Supply100";
    };
};

class ls_gar_engineerNCO_vest: ls_gar_engineer_vest {
    author = AUTHOR;
    displayName = "Clone Engineer NCO Vest";

    model = QPATHTOF(vests\engineer\ls_gar_engineerNCO_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "ammo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\engineer\data\heavy_accessories_engineer_co.paa),
        QPATHTOF(vests\arc\data\arc_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\airborne_nco_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\engineer\ls_gar_engineerNCO_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "ammo"};
    };
};

class ls_gar_engineerOfficer_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Engineer Officer vest";

    model = QPATHTOF(vests\engineer\ls_gar_engineerOfficer_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\engineer\data\heavy_accessories_engineer_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\engineer\ls_gar_engineerOfficer_vest.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 80;
        containerClass = "Supply100";
    };
};
