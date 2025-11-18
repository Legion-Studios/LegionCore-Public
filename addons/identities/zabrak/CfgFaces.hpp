#define ZABRAK_FACE(color,number,tattooNumber) \
    class DOUBLES(ls_zabrak_male##number##t##tattooNumber##,color): ls_zabrak_male1t0_base { \
        author = AUTHOR; \
        displayName = QUOTE(Zabrak Male color number [Tattoo ##tattooNumber##]); \
        head = QUOTE(ls_head_zabrakHorn##number##); \
        texture = QPATHTOF(zabrak\data\##color####number##_face_t##tattooNumber##_co.paa); \
        textureHL = QPATHTOF(zabrak\data\##color##_body_t##tattooNumber##_co.paa); \
        textureHL2 = QPATHTOF(zabrak\data\##color##_body_t##tattooNumber##_co.paa); \
        material = QPATHTOF(zabrak\data\##color####number##_face_t##tattooNumber##.rvmat); \
        materialHL = QPATHTOF(zabrak\data\##color##_body_t##tattooNumber##.rvmat); \
        materialHL2 = QPATHTOF(zabrak\data\##color##_body_t##tattooNumber##.rvmat); \
    }

class ls_zabrak_male1t0_base: ls_default {
    disabled = 0;
    author = AUTHOR;
    displayName = "Zabrak Male base 1 [Tattoo 0]";
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
