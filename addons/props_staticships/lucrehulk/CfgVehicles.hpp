class ls_staticShip_lucrehulk: ls_staticShip_multiPart_base {
    scope = 2;
    author = AUTHOR;
    displayname = "Lucrehulk";

    model = QPATHTOF(lucrehulk\ls_lucrehulk.p3d);
    multiStructureParts[] = {
        {"ls_staticShipPart_lucrehulk_back", "back_1"},
        {"ls_staticShipPart_lucrehulk_bottom1", "bottom_1"},
        {"ls_staticShipPart_lucrehulk_bottom2", "bottom_2"},
        {"ls_staticShipPart_lucrehulk_bottom3", "bottom_3"},
        {"ls_staticShipPart_lucrehulk_bottom4", "bottom_4"},
        {"ls_staticShipPart_lucrehulk_core1", "core_1"},
        {"ls_staticShipPart_lucrehulk_core2", "core_2"},
        {"ls_staticShipPart_lucrehulk_core3", "core_3"},
        {"ls_staticShipPart_lucrehulk_engine", "engine_1"},
        {"ls_staticShipPart_lucrehulk_front1", "front_1"},
        {"ls_staticShipPart_lucrehulk_front2", "front_2"},
        {"ls_staticShipPart_lucrehulk_front3", "front_3"},
        {"ls_staticShipPart_lucrehulk_front4", "front_4"},
        {"ls_staticShipPart_lucrehulk_gate", "gate_1"},
        {"ls_staticShipPart_lucrehulk_inner1", "inner_1"},
        {"ls_staticShipPart_lucrehulk_inner2", "inner_2"},
        {"ls_staticShipPart_lucrehulk_inner3", "inner_3"},
        {"ls_staticShipPart_lucrehulk_inner4", "inner_4"},
        {"ls_staticShipPart_lucrehulk_radar1", "radar_1"},
        {"ls_staticShipPart_lucrehulk_radar2", "radar_2"},
        {"ls_staticShipPart_lucrehulk_radar3", "radar_3"},
        {"ls_staticShipPart_lucrehulk_radar4", "radar_4"},
        {"ls_staticShipPart_lucrehulk_top1", "top_1"},
        {"ls_staticShipPart_lucrehulk_top2", "top_2"},
        {"ls_staticShipPart_lucrehulk_top3", "top_3"},
        {"ls_staticShipPart_lucrehulk_top4", "top_4"}
    };
};

class ls_staticShipPart_lucrehulk_core1: ls_staticShipPart_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Core 1";
    editorSubcategory = "ls_edsubcat_staticShips_lucrehulk";

    model = QPATHTOF(lucrehulk\ls_lucrehulk_core1.p3d);
    hiddenSelections[] = {"core"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\core_co.paa)};
};
class ls_staticShipPart_lucrehulk_core2: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Core 2";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_core2.p3d);
};
class ls_staticShipPart_lucrehulk_core3: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Core 3";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_core3.p3d);
};

class ls_staticShipPart_lucrehulk_back: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Back";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_back.p3d);
    hiddenSelections[] = {"back"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\back_co.paa)};
};
class ls_staticShipPart_lucrehulk_bottom1: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Bottom 1";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_bottom1.p3d);
    hiddenSelections[] = {"bottom"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\bottom_co.paa)};
};
class ls_staticShipPart_lucrehulk_bottom2: ls_staticShipPart_lucrehulk_bottom1 {
    author = AUTHOR;
    displayName = "Bottom 2";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_bottom2.p3d);
};
class ls_staticShipPart_lucrehulk_bottom3: ls_staticShipPart_lucrehulk_bottom1 {
    author = AUTHOR;
    displayName = "Bottom 3";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_bottom3.p3d);
};
class ls_staticShipPart_lucrehulk_bottom4: ls_staticShipPart_lucrehulk_bottom1 {
    author = AUTHOR;
    displayName = "Bottom 4";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_bottom4.p3d);
};

class ls_staticShipPart_lucrehulk_engine: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Engine";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_engine.p3d);
    hiddenSelections[] = {"engine"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\engine_co.paa)};
};

class ls_staticShipPart_lucrehulk_front1: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Front 1";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_front1.p3d);
    hiddenSelections[] = {"front"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\front_co.paa)};
};
class ls_staticShipPart_lucrehulk_front2: ls_staticShipPart_lucrehulk_front1 {
    author = AUTHOR;
    displayName = "Front 2";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_front2.p3d);
};
class ls_staticShipPart_lucrehulk_front3: ls_staticShipPart_lucrehulk_front1 {
    author = AUTHOR;
    displayName = "Front 3";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_front3.p3d);
    hiddenSelections[] = {"front", "right_gate"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\front_co.paa), QPATHTOF(lucrehulk\data\gate_co.paa)};
};
class ls_staticShipPart_lucrehulk_front4: ls_staticShipPart_lucrehulk_front1 {
    author = AUTHOR;
    displayName = "Front 4";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_front4.p3d);
    hiddenSelections[] = {"front", "left_gate"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\front_co.paa), QPATHTOF(lucrehulk\data\gate_co.paa)};
};
class ls_staticShipPart_lucrehulk_gate: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Gate";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_gate.p3d);
    hiddenSelections[] = {"gate", "left_gate", "right_gate"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\gate_co.paa), "", ""};
};
class ls_staticShipPart_lucrehulk_inner1: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Inner 1";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_inner1.p3d);
    hiddenSelections[] = {"inner"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\inner_co.paa)};
};
class ls_staticShipPart_lucrehulk_inner2: ls_staticShipPart_lucrehulk_inner1 {
    author = AUTHOR;
    displayName = "Inner 2";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_inner2.p3d);
};
class ls_staticShipPart_lucrehulk_inner3: ls_staticShipPart_lucrehulk_inner1 {
    author = AUTHOR;
    displayName = "Inner 3";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_inner3.p3d);
};
class ls_staticShipPart_lucrehulk_inner4: ls_staticShipPart_lucrehulk_inner1 {
    author = AUTHOR;
    displayName = "Inner 4";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_inner4.p3d);
};
class ls_staticShipPart_lucrehulk_radar1: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Radar 1";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_radar1.p3d);
    hiddenSelections[] = {"radar"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\radar_co.paa)};
};
class ls_staticShipPart_lucrehulk_radar2: ls_staticShipPart_lucrehulk_radar1 {
    author = AUTHOR;
    displayName = "Radar 2";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_radar2.p3d);
};
class ls_staticShipPart_lucrehulk_radar3: ls_staticShipPart_lucrehulk_radar1 {
    author = AUTHOR;
    displayName = "Radar 3";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_radar3.p3d);
};
class ls_staticShipPart_lucrehulk_radar4: ls_staticShipPart_lucrehulk_radar1 {
    author = AUTHOR;
    displayName = "Radar 4";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_radar4.p3d);
};
class ls_staticShipPart_lucrehulk_top1: ls_staticShipPart_lucrehulk_core1 {
    author = AUTHOR;
    displayName = "Top 1";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_top1.p3d);
    hiddenSelections[] = {"top"};
    hiddenSelectionsTextures[] = {QPATHTOF(lucrehulk\data\top_co.paa)};
};
class ls_staticShipPart_lucrehulk_top2: ls_staticShipPart_lucrehulk_top1 {
    author = AUTHOR;
    displayName = "Top 2";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_top2.p3d);
};
class ls_staticShipPart_lucrehulk_top3: ls_staticShipPart_lucrehulk_top1 {
    author = AUTHOR;
    displayName = "Top 3";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_top3.p3d);
};
class ls_staticShipPart_lucrehulk_top4: ls_staticShipPart_lucrehulk_top1 {
    author = AUTHOR;
    displayName = "Top 4";
    model = QPATHTOF(lucrehulk\ls_lucrehulk_top4.p3d);
};

DEPRECATED(lucrehulk_base,ls_staticShip_lucrehulk);
DEPRECATED(ls_back_1,ls_staticShipPart_lucrehulk_back);
DEPRECATED(ls_bottom_1,ls_staticShipPart_lucrehulk_bottom1);
DEPRECATED(ls_bottom_2,ls_staticShipPart_lucrehulk_bottom2);
DEPRECATED(ls_bottom_3,ls_staticShipPart_lucrehulk_bottom3);
DEPRECATED(ls_bottom_4,ls_staticShipPart_lucrehulk_bottom4);
DEPRECATED(ls_core_1,ls_staticShipPart_lucrehulk_core1);
DEPRECATED(ls_core_2,ls_staticShipPart_lucrehulk_core2);
DEPRECATED(ls_core_3,ls_staticShipPart_lucrehulk_core3);
DEPRECATED(ls_engine_1,ls_staticShipPart_lucrehulk_engine);
DEPRECATED(ls_front_1,ls_staticShipPart_lucrehulk_front1);
DEPRECATED(ls_front_2,ls_staticShipPart_lucrehulk_front2);
DEPRECATED(ls_front_3,ls_staticShipPart_lucrehulk_front3);
DEPRECATED(ls_front_4,ls_staticShipPart_lucrehulk_front4);
DEPRECATED(ls_gate_1,ls_staticShipPart_lucrehulk_gate);
DEPRECATED(ls_inner_1,ls_staticShipPart_lucrehulk_inner1);
DEPRECATED(ls_inner_2,ls_staticShipPart_lucrehulk_inner2);
DEPRECATED(ls_inner_3,ls_staticShipPart_lucrehulk_inner3);
DEPRECATED(ls_inner_4,ls_staticShipPart_lucrehulk_inner4);
DEPRECATED(ls_radar_1,ls_staticShipPart_lucrehulk_radar1);
DEPRECATED(ls_radar_2,ls_staticShipPart_lucrehulk_radar2);
DEPRECATED(ls_radar_3,ls_staticShipPart_lucrehulk_radar3);
DEPRECATED(ls_radar_4,ls_staticShipPart_lucrehulk_radar4);
DEPRECATED(ls_top_1,ls_staticShipPart_lucrehulk_top1);
DEPRECATED(ls_top_2,ls_staticShipPart_lucrehulk_top2);
DEPRECATED(ls_top_3,ls_staticShipPart_lucrehulk_top3);
DEPRECATED(ls_top_4,ls_staticShipPart_lucrehulk_top4);
