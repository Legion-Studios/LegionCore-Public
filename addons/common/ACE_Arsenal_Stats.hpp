class ACE_Arsenal_Stats {
    // This is a direct copy of ACE's statBase class
    // This is to prevent missing base class errors when launching the game without ace
    class ls_statBase {
        scope = 1;
        priority = 0;
        stats[] = {};
        displayName = "";
        showBar = 0;
        showText = 0;
        barStatement = "";
        textStatement = "";
        condition = QUOTE(true);
        tabs[] = {{}, {}};
    };
};
