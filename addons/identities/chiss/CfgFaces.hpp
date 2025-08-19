class ls_chiss_male1_blue: ls_default {
    disabled = 0;
    author = AUTHOR;
    displayName = "Chiss Male 1 [Blue]";
    identityTypes[] = {"ls_head_chiss", "ls_head_randomSpecies"};

    texture = QPATHTOF(chiss\data\blue1_face_co.paa);
    textureHL = QPATHTOF(chiss\data\blue_body_co.paa);
    textureHL2 = QPATHTOF(chiss\data\blue_body_co.paa);
    material = QPATHTOF(chiss\data\blue1_face.rvmat);
    materialHL = QPATHTOF(chiss\data\blue_body.rvmat);
    materialHL2 = QPATHTOF(chiss\data\blue_body.rvmat);
};

class ls_chiss_male2_blue: ls_chiss_male1_blue {
    author = AUTHOR;
    displayName = "Chiss Male 2 [Blue]";
    head = "AsianHead_A3";
    texture = QPATHTOF(chiss\data\blue2_face_co.paa);
    material = QPATHTOF(chiss\data\blue2_face.rvmat);
    materialWounded1 = "\A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
    materialWounded2 = "\A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
};

class ls_chiss_male3_blue: ls_chiss_male1_blue {
    author = AUTHOR;
    displayName = "Chiss Male 3 [Blue]";
    head = "GreekHead_A3";
    texture = QPATHTOF(chiss\data\blue3_face_co.paa);
    material = QPATHTOF(chiss\data\blue3_face.rvmat);
    materialWounded1 = "\A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
    materialWounded2 = "\A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
};

class ls_chiss_male1_ice: ls_chiss_male1_blue {
    author = AUTHOR;
    displayName = "Chiss Male 1 [Ice]";
    texture = QPATHTOF(chiss\data\ice1_face_co.paa);
    textureHL = QPATHTOF(chiss\data\ice_body_co.paa);
    textureHL2 = QPATHTOF(chiss\data\ice_body_co.paa);
    material = QPATHTOF(chiss\data\ice1_face.rvmat);
    materialHL = QPATHTOF(chiss\data\ice_body.rvmat);
    materialHL2 = QPATHTOF(chiss\data\ice_body.rvmat);
};

class ls_chiss_male2_ice: ls_chiss_male1_ice {
    author = AUTHOR;
    displayName = "Chiss Male 2 [Ice]";
    head = "AsianHead_A3";
    texture = QPATHTOF(chiss\data\ice2_face_co.paa);
    material = QPATHTOF(chiss\data\ice2_face.rvmat);
    materialWounded1 = "\A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
    materialWounded2 = "\A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
};

class ls_chiss_male3_ice: ls_chiss_male1_ice {
    author = AUTHOR;
    displayName = "Chiss Male 3 [Ice]";
    head = "GreekHead_A3";
    texture = QPATHTOF(chiss\data\ice3_face_co.paa);
    material = QPATHTOF(chiss\data\ice3_face.rvmat);
    materialWounded1 = "\A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
    materialWounded2 = "\A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
};

class ls_chiss_male1_purple: ls_chiss_male1_ice {
    author = AUTHOR;
    displayName = "Chiss Male 1 [Purple]";
    texture = QPATHTOF(chiss\data\purple1_face_co.paa);
    textureHL = QPATHTOF(chiss\data\purple_body_co.paa);
    textureHL2 = QPATHTOF(chiss\data\purple_body_co.paa);
    material = QPATHTOF(chiss\data\purple1_face.rvmat);
    materialHL = QPATHTOF(chiss\data\purple_body.rvmat);
    materialHL2 = QPATHTOF(chiss\data\purple_body.rvmat);
};

class ls_chiss_male2_purple: ls_chiss_male1_purple {
    author = AUTHOR;
    displayName = "Chiss Male 2 [Purple]";
    head = "AsianHead_A3";
    texture = QPATHTOF(chiss\data\purple2_face_co.paa);
    material = QPATHTOF(chiss\data\purple2_face.rvmat);
    materialWounded1 = "\A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
    materialWounded2 = "\A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
};

class ls_chiss_male3_purple: ls_chiss_male1_purple {
    author = AUTHOR;
    displayName = "Chiss Male 3 [Purple]";
    head = "GreekHead_A3";
    texture = QPATHTOF(chiss\data\purple3_face_co.paa);
    material = QPATHTOF(chiss\data\purple3_face.rvmat);
    materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
    materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
};
