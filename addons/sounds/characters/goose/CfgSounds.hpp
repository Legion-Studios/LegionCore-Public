#define HONK_SOUND(SOUND_NAME) \
    class DOUBLES(ls_ugg,SOUND_NAME) { \
        name = CSTRING(DOUBLES(ugg,SOUND_NAME)); \
        sound[] = {QPATHTOF(characters\goose\SOUND_NAME.wss), 2, 1, 20}; \
        titles[] = {}; \
    }

HONK_SOUND(honk_01);
HONK_SOUND(honk_02);
HONK_SOUND(honk_03);
HONK_SOUND(honk_04);
HONK_SOUND(honk_05);
HONK_SOUND(honk_glass_01);
HONK_SOUND(honk_glass_02);
HONK_SOUND(honk_glass_03);
HONK_SOUND(honk_glass_04);
HONK_SOUND(honk_harmonica_01);
HONK_SOUND(honk_harmonica_02);
HONK_SOUND(honk_harmonica_03);
HONK_SOUND(honk_harmonica_04);
HONK_SOUND(honk_harmonica_05);
HONK_SOUND(honk_harmonica_06);
HONK_SOUND(honk_pylon_01);
HONK_SOUND(honk_pylon_02);
HONK_SOUND(honk_pylon_03);
HONK_SOUND(honk_pylon_04);
HONK_SOUND(honk_pylon_05);
HONK_SOUND(honk_pylon_06);
HONK_SOUND(honk_pylon_07);
HONK_SOUND(honk_soap_01);
HONK_SOUND(honk_soap_02);
HONK_SOUND(honk_soap_03);
HONK_SOUND(honk_soap_04);
HONK_SOUND(honk_trashlid_01);
HONK_SOUND(honk_trashlid_02);
HONK_SOUND(honk_trashlid_03);
HONK_SOUND(honk_trashlid_04);
HONK_SOUND(honk_trashlid_05);
HONK_SOUND(honk_walkie_talkie_01);
HONK_SOUND(honk_walkie_talkie_02);
HONK_SOUND(honk_walkie_talkie_03);

#undef HONK_SOUND
