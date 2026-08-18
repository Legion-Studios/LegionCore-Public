TRADITIONAL_HELMET(deathwatch,grunt,Grunt);
TRADITIONAL_HELMET(deathwatch,sergeant,Sergeant);
TRADITIONAL_HELMET(deathwatch,captain,Captain);

class ls_mandalorianHelmet_deathwatchNightowl: ls_mandalorianHelmet_nightowl {
    author = AUTHOR;
    displayName = CSTRING(deathwatch_nightowl_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\deathwatch\data\nightowl_helmet_co.paa),
        QPATHTOF(helmets\nightowl\data\visor_co.paa),
        QPATHTOF(helmets\nightowl\data\neck_co.paa)
    };
    picture = QPATHTOF(data\ui\nightowlHelmet_deathwatch_grunt_ui_ca.paa);
};

TRADITIONAL_VEST(deathwatch,grunt,Grunt);
TRADITIONAL_VEST(deathwatch,sergeant,Sergeant);
TRADITIONAL_VEST(deathwatch,captain,Captain);
