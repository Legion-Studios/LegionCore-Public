class ls_cloneVest_recon: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(recon_vest);

    model = QPATHTOF(vests\recon\ls_vest_clone_recon.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(vests\recon\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\reconVest_nco_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\recon\ls_vest_clone_recon.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 30;
    };
};
