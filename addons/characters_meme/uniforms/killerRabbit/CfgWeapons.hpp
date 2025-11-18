class ls_memeUniform_killerRabbit: ls_uniform_base {
    #ifdef __A3_DEBUG__
        scope = 2;
    #else
        scope = 1;
    #endif
    author = AUTHOR;
    displayName = "The Killer Rabbit (WIP)";

    model = "\A3\Animals_F\rabbit\rabbit_F.p3d";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};

    class ItemInfo: ItemInfo {
        uniformClass = "ls_meme_killerRabbit";
        containerClass = "Supply150";
        mass = 40;
    };
};
