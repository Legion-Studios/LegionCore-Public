class ls_cloneNVG_commando_antenna_deltaFixer: ls_sob_commando_antenna_nvg {
    author = AUTHOR;
    displayName = "Katarn I Clone Commando Antenna (Delta [Fixer])";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\commandos\data\helmets\deltaFixer_camo1_co.paa),
        QPATHTOF(units\commandos\data\helmets\deltaFixer_camo1_co.paa)
    };

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_antenna_nvg_activeCamo";
};

class ls_cloneNVG_commando_antenna_omegaAtin: ls_sob_commando_antenna_nvg {
    author = AUTHOR;
    displayName = "Katarn I Clone Commando Antenna (Omega [Atin])";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\commandos\data\helmets\omega_camo1_co.paa),
        QPATHTOF(units\commandos\data\helmets\omega_camo1_co.paa)
    };

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_antenna_nvg_activeCamo";
};

class ls_cloneNVG_commando_visor_omegaFi: ls_sob_commando_visor_nvg {
    author = AUTHOR;
    displayName = "Katarn I Clone Commando Visor (Omega [Fi])";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\commandos\data\helmets\omega_camo1_co.paa),
        QPATHTOF(units\commandos\data\helmets\omega_camo1_co.paa)
    };

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_visor_nvg_activeCamo";
};

class ls_cloneNVG_commando_visor_mpStealth: ls_sob_commando_visor_nvg {
    author = AUTHOR;
    displayName = "Katarn I Clone Commando Visor (Stealth)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\commandos\data\helmets\mpStealth_camo1_co.paa),
        QPATHTOF(units\commandos\data\helmets\mpStealth_camo1_co.paa)
    };

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_visor_nvg_activeCamo";
};

DEPRECATED(ls_nvg_clone_commando_antenna_deltaFixer,ls_cloneNVG_commando_antenna_deltaFixer);
DEPRECATED(ls_nvg_clone_commando_antenna_omegaAtin,ls_cloneNVG_commando_antenna_omegaAtin);
DEPRECATED(ls_nvg_clone_commando_visor_omegaFi,ls_cloneNVG_commando_visor_omegaFi);
DEPRECATED(ls_nvg_clone_commando_visor_mpStealth,ls_cloneNVG_commando_visor_mpStealth);
