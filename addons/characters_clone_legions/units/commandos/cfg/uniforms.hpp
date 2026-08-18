LEGACY_COMMANDO_UNIFORM(aiwhaDikut,Aiwha [Di'kut]);
LEGACY_COMMANDO_UNIFORM(aiwhaSarge,Aiwha [Sarge]);
LEGACY_COMMANDO_UNIFORM(aiwhaTyto,Aiwha [Tyto]);
LEGACY_COMMANDO_UNIFORM(aiwhaZag,Aiwha [Zag]);
LEGACY_COMMANDO_UNIFORM(bravoRam,Bravo [Ram]);
LEGACY_COMMANDO_UNIFORM(bravo2,Bravo [2]);
LEGACY_COMMANDO_UNIFORM(bravo3,Bravo [3]);
LEGACY_COMMANDO_UNIFORM(bravo4,Bravo [4]);
LEGACY_COMMANDO_UNIFORM(deltaBoss,Delta [Boss]);
LEGACY_COMMANDO_UNIFORM(deltaFixer,Delta [Fixer]);
LEGACY_COMMANDO_UNIFORM(deltaScorch,Delta [Scorch]);
LEGACY_COMMANDO_UNIFORM(deltaSev,Delta [Sev]);
LEGACY_COMMANDO_UNIFORM(foxtrotGregor,Foxtrot [Gregor]);
LEGACY_COMMANDO_UNIFORM(hodasalJungle,Hodasal Camo);
LEGACY_COMMANDO_UNIFORM(mpGunner,Gunner);
LEGACY_COMMANDO_UNIFORM(mpMarksman,Marksman);
LEGACY_COMMANDO_UNIFORM(mpRecon,Recon);
LEGACY_COMMANDO_UNIFORM(mpStealth,Stealth);
LEGACY_COMMANDO_UNIFORM(yayaxCov,Yayax [Cov]);
LEGACY_COMMANDO_UNIFORM(yayaxDev,Yayax [Dev]);
LEGACY_COMMANDO_UNIFORM(yayaxJind,Yayax [Jind]);
LEGACY_COMMANDO_UNIFORM(yayaxYover,Yayax [Yover]);

class ls_cloneUniform_commando_omega: ls_sob_commando_uniform {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Armor (Omega)";

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_uniform_activeCamo";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_clone_commando_omegaNiner";
    };
};
