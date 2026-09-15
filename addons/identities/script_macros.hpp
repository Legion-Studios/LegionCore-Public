#define COMMANDO(SQUAD_NAME,CLASS_NAME,DISPLAY_NAME,NUMBERS,FACE_CLASS) \
    class DOUBLES(ls_clone_commando,SQUAD_NAME##CLASS_NAME): ls_clone_commando_aiwhaSarge { \
        face = QUOTE(FACE_CLASS); \
        name = QUOTE(RC-##NUMBERS 'DISPLAY_NAME'); \
    }
