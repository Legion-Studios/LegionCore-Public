// RANK_UPPER technically doesn't need to be a separate param but I wanted to keep the case the same
#define TRADITIONAL_HELMET(CLAN_NAME, RANK, RANK_UPPER) \
    class DOUBLES(ls_mandalorianHelmet,CONCAT(CLAN_NAME,RANK_UPPER)): ls_mandalorianHelmet_traditional { \
        author = AUTHOR; \
        displayName = CSTRING(TRIPLES(CLAN_NAME,RANK,helmet)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\CLAN_NAME\data\DOUBLES(RANK,helmet_co.paa)), \
            QPATHTOF(helmets\traditional\data\visor_co.paa), \
            QPATHTOF(helmets\traditional\data\neck_co.paa) \
        }; \
        picture = QPATHTOF(data\ui\QUADS(traditionalHelmet,CLAN_NAME,RANK,ui_ca.paa)); \
    }

#define TRADITIONAL_VEST(CLAN_NAME, RANK, RANK_UPPER) \
    class DOUBLES(ls_mandalorianVest,CONCAT(CLAN_NAME,RANK_UPPER)): ls_mandalorianVest_standard { \
        author = AUTHOR; \
        displayName = CSTRING(TRIPLES(CLAN_NAME,RANK,vest)); \
        hiddenSelectionsTextures[] = { \
            QPATHTOF(units\CLAN_NAME\data\DOUBLES(RANK,vest_co.paa)), \
        }; \
        picture = QPATHTOF(data\ui\QUADS(traditionalVest,CLAN_NAME,RANK,ui_ca.paa)); \
    }
