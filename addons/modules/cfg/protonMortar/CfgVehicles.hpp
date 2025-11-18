class ls_module_protonMortar_ordnance: ModuleOrdnance_F {
    author = AUTHOR;
    scope = 1;
    scopeCurator = 2;
    isGlobal = 1;
    category = "Ordnance";
    model = "\a3\Modules_F_Curator\Ordnance\surfaceMortar.p3d";
    displayName = "[LS] Proton Mortar";
    simulation = "house";
    portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
    // function = "ls_zeus_fnc_overwriteACEOrdnance";
    ammo = "ls_moduleAmmo_protonMortar";
    delete Arguments;
};
