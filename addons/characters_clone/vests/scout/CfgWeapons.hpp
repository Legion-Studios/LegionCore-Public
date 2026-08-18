class ls_cloneVest_scout: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(scout_vest);
    descriptionShort = "$STR_A3_SP_AL_II";

    model = QPATHTOF(vests\scout\ls_vest_clone_scout.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(vests\scout\data\pouches_co.paa)};
    picture = QPATHTOF(data\ui\scoutVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\scout\ls_vest_clone_scout.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 30;
    };
};
