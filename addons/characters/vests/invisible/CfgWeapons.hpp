class ls_vest_invisible_armorLevel0: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel0_vest);
    descriptionShort = "$STR_A3_SP_NOARMOR";

    class ItemInfo: ItemInfo {
        vestType = "Rebreather";
        ARMOR_VEST_NONE;
    };
};

class ls_vest_invisible_armorLevel1: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel1_vest);
    descriptionShort = "$STR_A3_SP_AL_I";

    class ItemInfo: ItemInfo {
        vestType = "Rebreather";
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {
                armor = 8;
                passThrough = 0.5;
            };
            class Diaphragm: Diaphragm {
                armor = 8;
                passThrough = 0.5;
            };
            class Abdomen: Abdomen {
                armor = 8;
                passThrough = 0.5;
            };
            class Body: Body {};
        };
    };
};

class ls_vest_invisible_armorLevel2: ls_vest_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel2_vest);
    descriptionShort = "$STR_A3_SP_AL_II";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {
                armor = 12;
                passThrough = 0.4;
            };
            class Diaphragm: Diaphragm {
                armor = 12;
                passThrough = 0.4;
            };
            class Abdomen: Abdomen {
                armor = 12;
                passThrough = 0.4;
            };
            class Body: Body {};
        };
    };
};

class ls_vest_invisible_armorLevel3: ls_vest_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel3_vest);
    descriptionShort = "$STR_A3_SP_AL_III";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {
                armor = 16;
                passThrough = 0.3;
            };
            class Diaphragm: Diaphragm {
                armor = 16;
                passThrough = 0.3;
            };
            class Abdomen: Abdomen {
                armor = 16;
                passThrough = 0.3;
            };
            class Body: Body {};
        };
    };
};

class ls_vest_invisible_armorLevel4: ls_vest_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel4_vest);
    descriptionShort = "$STR_A3_SP_AL_IV";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {
                armor = 16;
                passThrough = 0.2;
            };
            class Diaphragm: Diaphragm {
                armor = 16;
                passThrough = 0.2;
            };
            class Abdomen: Abdomen {
                armor = 16;
                passThrough = 0.2;
            };
            class Body: Body {};
        };
    };
};

class ls_vest_invisible_armorLevel5: ls_vest_invisible_armorLevel1 {
    author = AUTHOR;
    displayName = CSTRING(invisible_armorLevel5_vest);
    descriptionShort = "$STR_A3_SP_AL_V";

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {
                armor = 24;
                passThrough = 0.1;
            };
            class Diaphragm: Diaphragm {
                armor = 24;
                passThrough = 0.1;
            };
            class Abdomen: Abdomen {
                armor = 24;
                passThrough = 0.1;
            };
            class Body: Body {};
        };
    };
};
