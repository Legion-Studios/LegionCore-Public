class ls_droidVest_bx: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "BX Commando Plating";

    model = QPATHTOF(vests\bx\ls_vest_droid_bx.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\bx\ls_vest_droid_bx.p3d);
        containerClass = "Supply40";
        mass = 1;
    };
};