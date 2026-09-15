class ls_helmet_invisible_armorLevel0: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel0_helmet);
    descriptionShort = "$STR_A3_SP_NOARMOR";

    class ItemInfo: ItemInfo {
        ARMOR_HELMET_NONE;
    };
};

class ls_helmet_invisible_armorLevel1: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel1_helmet);
    descriptionShort = "$STR_A3_SP_AL_I";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head: Head {
                armor = 4;
                passThrough = 0.8;
            };
        };
    };
};

class ls_helmet_invisible_armorLevel2: ls_helmet_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel2_helmet);
    descriptionShort = "$STR_A3_SP_AL_II";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head: Head {
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class ls_helmet_invisible_armorLevel3: ls_helmet_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel3_helmet);
    descriptionShort = "$STR_A3_SP_AL_III";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head: Head {
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};

class ls_helmet_invisible_armorLevel4: ls_helmet_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel4_helmet);
    descriptionShort = "$STR_A3_SP_AL_IV";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head: Head {
                armor = 10;
                passThrough = 0.5;
            };
        };
    };
};

class ls_helmet_invisible_armorLevel5: ls_helmet_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel5_helmet);
    descriptionShort = "$STR_A3_SP_AL_V";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head: Head {
                armor = 12;
                passThrough = 0.5;
            };
        };
    };
};
