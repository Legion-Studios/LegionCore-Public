class ls_vest_poncho: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Poncho";

    model = QPATHTOF(vests\poncho\ls_vest_poncho.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\base\base_co.paa)
    };
    picture = QPATHTOF(data\ui\poncho_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\poncho\ls_vest_poncho.p3d);
        hiddenSelections[] = {"camo1"};
        containerClass = "Supply20";
        mass = 10;

        class HitpointsProtectionInfo {};
    };
};

class ls_vest_poncho_partnerBlack: ls_vest_poncho {
    author = AUTHOR;
    displayName = "Poncho (Partner, Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\partner\partner_black_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(vests\poncho\data\partner\partner.rvmat)
    };
    picture = QPATHTOF(data\ui\poncho_partnerBlack_ui_ca.paa);
};

class ls_vest_poncho_partnerWhite: ls_vest_poncho_partnerBlack {
    author = AUTHOR;
    displayName = "Poncho (Partner, White)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\partner\partner_white_co.paa)
    };
    picture = QPATHTOF(data\ui\poncho_partnerWhite_ui_ca.paa);
};

class ls_vest_poncho_peaceBlue: ls_vest_poncho {
    author = AUTHOR;
    displayName = "Poncho (Peace, Blue)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\peace\peace_blue_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(vests\poncho\data\peace\peace.rvmat)
    };
    picture = QPATHTOF(data\ui\poncho_peaceBlue_ui_ca.paa);
};

class ls_vest_poncho_peaceGreen: ls_vest_poncho_peaceBlue {
    author = AUTHOR;
    displayName = "Poncho (Peace, Green)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\peace\peace_green_co.paa)
    };
    picture = QPATHTOF(data\ui\poncho_peaceGreen_ui_ca.paa);
};

class ls_vest_poncho_peaceRed: ls_vest_poncho_peaceBlue {
    author = AUTHOR;
    displayName = "Poncho (Peace, Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\peace\peace_red_co.paa)
    };
    picture = QPATHTOF(data\ui\poncho_peaceRed_ui_ca.paa);
};

class ls_vest_poncho_sidestripeBlue: ls_vest_poncho {
    author = AUTHOR;
    displayName = "Poncho (Sidestripe, Blue)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\sidestripe\sidestripe_blue_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(vests\poncho\data\sidestripe\sidestripe.rvmat)
    };
    picture = QPATHTOF(data\ui\poncho_sidestripeBlue_ui_ca.paa);
};

class ls_vest_poncho_sidestripeBrown: ls_vest_poncho_sidestripeBlue {
    author = AUTHOR;
    displayName = "Poncho (Sidestripe, Brown)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\sidestripe\sidestripe_brown_co.paa)
    };
    picture = QPATHTOF(data\ui\poncho_sidestripeBrown_ui_ca.paa);
};

class ls_vest_poncho_sidestripeRed: ls_vest_poncho_sidestripeBlue {
    author = AUTHOR;
    displayName = "Poncho (Sidestripe, Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\sidestripe\sidestripe_red_co.paa)
    };
    picture = QPATHTOF(data\ui\poncho_sidestripeRed_ui_ca.paa);
};

class ls_vest_poncho_sidestripeWhite: ls_vest_poncho_sidestripeBlue {
    author = AUTHOR;
    displayName = "Poncho (Sidestripe, White)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\poncho\data\sidestripe\sidestripe_white_co.paa)
    };
    picture = QPATHTOF(data\ui\poncho_sidestripeWhite_ui_ca.paa);
};
