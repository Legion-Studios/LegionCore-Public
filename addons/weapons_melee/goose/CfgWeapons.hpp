class ls_weapon_goose: ls_weapon_melee_base {
    scope = 2;
    author = AUTHOR;
    displayName = ECSTRING(meme,goose_displayName);
    descriptionShort = ECSTRING(meme,goose_descriptionShort);
    baseWeapon = "ls_weapon_goose";

    model = QPATHTOEF(meme,goose\ls_meme_goose.p3d);
    picture = QPATHTOEF(meme,data\ui\goose_wide_ui_ca.paa);

    IMS_Melee_Param_Damage = 0.3;
    IMS_WeaponType = "onehanded";
};
