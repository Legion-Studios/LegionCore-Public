#define ZABRAK_FACE(COLOR,NUMBER,TATTOO_NUMBER) \
    class DOUBLES(ls_zabrak_male##NUMBER##t##TATTOO_NUMBER##,COLOR): ls_zabrak_male1t0_base { \
        author = AUTHOR; \
        displayName = CSTRING(zabrak_male##NUMBER##t##TATTOO_NUMBER##_##COLOR); \
        head = QUOTE(ls_head_zabrakHorn##NUMBER##); \
        texture = QPATHTOF(zabrak\data\##COLOR####NUMBER##_face_t##TATTOO_NUMBER##_co.paa); \
        textureHL = QPATHTOF(zabrak\data\##COLOR##_body_t##TATTOO_NUMBER##_co.paa); \
        textureHL2 = QPATHTOF(zabrak\data\##COLOR##_body_t##TATTOO_NUMBER##_co.paa); \
        material = QPATHTOF(zabrak\data\##COLOR####NUMBER##_face_t##TATTOO_NUMBER##.rvmat); \
        materialHL = QPATHTOF(zabrak\data\##COLOR##_body_t##TATTOO_NUMBER##.rvmat); \
        materialHL2 = QPATHTOF(zabrak\data\##COLOR##_body_t##TATTOO_NUMBER##.rvmat); \
    }

class ls_zabrak_male1t0_base: ls_default {
    disabled = 0;
    author = AUTHOR;
    displayName = CSTRING(zabrak_male1t0_base);
    identityTypes[] = {"ls_head_zabrak", "ls_head_randomSpecies"};

    texture = QPATHTOF(zabrak\data\base1_face_t0_co.paa);
    textureHL = QPATHTOF(zabrak\data\base_body_t0_co.paa);
    textureHL2 = QPATHTOF(zabrak\data\base_body_t0_co.paa);
    material = QPATHTOF(zabrak\data\base1_face_t0.rvmat);
    materialHL = QPATHTOF(zabrak\data\base_body_t0.rvmat);
    materialHL2 = QPATHTOF(zabrak\data\base_body_t0.rvmat);
};
ZABRAK_FACE(base,1,1);
ZABRAK_FACE(base,1,2);
ZABRAK_FACE(base,1,3);
ZABRAK_FACE(base,2,0);
ZABRAK_FACE(base,2,1);
ZABRAK_FACE(base,2,2);
ZABRAK_FACE(base,2,3);

ZABRAK_FACE(orange,1,0);
ZABRAK_FACE(orange,1,1);
ZABRAK_FACE(orange,1,2);
ZABRAK_FACE(orange,1,3);
ZABRAK_FACE(orange,2,0);
ZABRAK_FACE(orange,2,1);
ZABRAK_FACE(orange,2,2);
ZABRAK_FACE(orange,2,3);

ZABRAK_FACE(pale,1,0);
ZABRAK_FACE(pale,1,1);
ZABRAK_FACE(pale,1,2);
ZABRAK_FACE(pale,1,3);
ZABRAK_FACE(pale,2,0);
ZABRAK_FACE(pale,2,1);
ZABRAK_FACE(pale,2,2);
ZABRAK_FACE(pale,2,3);

ZABRAK_FACE(red,1,0);
ZABRAK_FACE(red,1,1);
ZABRAK_FACE(red,1,2);
ZABRAK_FACE(red,1,3);
ZABRAK_FACE(red,2,0);
ZABRAK_FACE(red,2,1);
ZABRAK_FACE(red,2,2);
ZABRAK_FACE(red,2,3);
