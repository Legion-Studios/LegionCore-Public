class ls_grenade_n20_ammo: ls_grenade_ammo_base {
    model = QPATHTOF(n20\ls_grenade_n20.p3d);
    soundFly[] = {QPATHTOEF(sounds,weapons\grenade\thermalDetClassC_fuse.wss),1, 5, 20};
    ace_grenades_pullPinSound[] = {QPATHTOEF(sounds,weapons\grenade\pin_long.wss), 1.5, 1, 10};
};
