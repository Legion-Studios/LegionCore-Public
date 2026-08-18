class ls_cloneVest_commando_tech_omegaAtin: ls_sob_commando_tech_vest {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Tech Vest (Omega [Atin])";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\commandos\data\uniforms\omega_lower_co.paa)
    };

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_tech_vest_activeCamo";
};

class ls_cloneVest_commando_tech_stealth: ls_sob_commando_tech_vest {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Tech Vest (Stealth)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\commandos\data\uniforms\mpStealth_lower_co.paa)
    };

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_tech_vest_activeCamo";
};
