#define AAT_VARIANT(var1,var2) class DOUBLES(ls_vehicle_aat,var2): ls_vehicle_aat { \
    author = AUTHOR; \
    displayname = QUOTE(AAT (##var1##)); \
    editorPreview = QPATHTOF(data\ui\editorPreviews\DOUBLES(ls_vehicle_aat,var2).jpg); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\textures\##var2##\body1_co.paa), \
        QPATHTOF(data\textures\##var2##\body2_co.paa), \
        QPATHTOF(data\textures\##var2##\gun_co.paa) \
    }; \
}
