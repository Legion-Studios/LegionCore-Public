COMMANDO_UNIFORM(aiwhaDikut,Aiwha [Di'kut]);
COMMANDO_UNIFORM(aiwhaSarge,Aiwha [Sarge]);
COMMANDO_UNIFORM(aiwhaTyto,Aiwha [Tyto]);
COMMANDO_UNIFORM(aiwhaZag,Aiwha [Zag]);
COMMANDO_UNIFORM(bravoRam,Bravo [Ram]);
COMMANDO_UNIFORM(bravo2,Bravo [2]);
COMMANDO_UNIFORM(bravo3,Bravo [3]);
COMMANDO_UNIFORM(bravo4,Bravo [4]);
COMMANDO_UNIFORM(deltaBoss,Delta [Boss]);
COMMANDO_UNIFORM(deltaFixer,Delta [Fixer]);
COMMANDO_UNIFORM(deltaScorch,Delta [Scorch]);
COMMANDO_UNIFORM(deltaSev,Delta [Sev]);
COMMANDO_UNIFORM(foxtrotGregor,Foxtrot [Gregor]);
COMMANDO_UNIFORM(hodasalJungle,Hodasal Camo);
COMMANDO_UNIFORM(mpGunner,Gunner);
COMMANDO_UNIFORM(mpMarksman,Marksman);
COMMANDO_UNIFORM(mpRecon,Recon);
COMMANDO_UNIFORM(mpStealth,Stealth);
COMMANDO_UNIFORM(yayaxCov,Yayax [Cov]);
COMMANDO_UNIFORM(yayaxDev,Yayax [Dev]);
COMMANDO_UNIFORM(yayaxJind,Yayax [Jind]);
COMMANDO_UNIFORM(yayaxYover,Yayax [Yover]);

class ls_cloneUniform_commando_omega: ls_sob_commando_uniform {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Armor (Omega)";

    EGVAR(activeCamo,camoItem) = "ls_sob_commando_uniform_activeCamo";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_clone_commando_omegaNiner";
    };
};
