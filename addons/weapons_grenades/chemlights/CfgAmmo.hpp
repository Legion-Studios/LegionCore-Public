class ls_grenade_chemlightBlue_ammo: Chemlight_green {
    model = QPATHTOF(chemlights\ls_grenade_chemlightBlue.p3d);
    effectsSmoke = "ChemlightLight_blue";
};

class ls_grenade_chemlightGreen_ammo: ls_grenade_chemlightBlue_ammo {
    model = QPATHTOF(chemlights\ls_grenade_chemlightGreen.p3d);
    effectsSmoke = "ChemlightLight_green";
};

class ls_grenade_chemlightOrange_ammo: ls_grenade_chemlightBlue_ammo {
    model = QPATHTOF(chemlights\ls_grenade_chemlightOrange.p3d);
    effectsSmoke = "ChemlightLight_yellow";
};

class ls_grenade_chemlightRed_ammo: ls_grenade_chemlightBlue_ammo {
    model = QPATHTOF(chemlights\ls_grenade_chemlightRed.p3d);
    effectsSmoke = "ChemlightLight_red";
};
