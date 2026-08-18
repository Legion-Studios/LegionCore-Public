class ls_droidVest_bx: ls_droidVest {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(bx_vest);
    descriptionShort = "$STR_A3_SP_NOARMOR";

    model = QPATHTOF(vests\bx\ls_vest_droid_bx.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\bx\ls_vest_droid_bx.p3d);
    };
};

DEPRECATED(ls_cis_bxCommando_vest,ls_droidVest_bx);
