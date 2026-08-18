class ls_cloneVest_officer: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(officer_vest);
    descriptionShort = "$STR_A3_SP_AL_I";

    model = QPATHTOF(vests\officer\ls_vest_clone_officer.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\officer\data\pauldron_co.paa),
        QPATHTOF(vests\officer\data\kama_co.paa),
        QPATHTOF(vests\officer\data\bandolier_co.paa),
        QPATHTOF(vests\officer\data\ammo_co.paa)
    };
    picture = QPATHTOF(data\ui\officerVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_vest_clone_officer.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        mass = 80;

        ARMOR_VEST_OFFICER;
    };
};

class ls_cloneVest_lieutenant: ls_cloneVest_officer {
    author = AUTHOR;
    displayName = CSTRING(lieutenant_vest);

    model = QPATHTOF(vests\officer\ls_vest_clone_lieutenant.p3d);
    hiddenSelections[] = {"camo1", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\officer\data\pauldron_co.paa),
        QPATHTOF(vests\officer\data\bandolier_co.paa),
        QPATHTOF(vests\officer\data\ammo_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_vest_clone_lieutenant.p3d);
        hiddenSelections[] = {"camo1", "camo3", "camo4"};
    };
};

class ls_cloneVest_kama: ls_cloneVest_officer {
    author = AUTHOR;
    displayName = CSTRING(kama_vest);

    model = QPATHTOF(vests\officer\ls_vest_clone_kama.p3d);
    hiddenSelections[] = {"camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\officer\data\kama_co.paa)
    };
    picture = QPATHTOF(data\ui\kamaVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_vest_clone_kama.p3d);
        hiddenSelections[] = {"camo2"};
    };
};
