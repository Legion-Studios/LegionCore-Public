class ls_staticShip_coreShip: ls_staticShip_multiPart_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Core Ship";

    model = QPATHTOF(coreShip\ls_coreShip.p3d);
    multiStructureParts[] = {
        {"ls_staticShipPart_coreShip_controlTower", "control_tower"},
        {"ls_staticShipPart_coreShip_core1", "core1"},
        {"ls_staticShipPart_coreShip_core2", "core2"},
        {"ls_staticShipPart_coreShip_core3", "core3"},
        {"ls_staticShipPart_coreShip_core4", "core4"},
        {"ls_staticShipPart_coreShip_platform1", "platform1"},
        {"ls_staticShipPart_coreShip_platform2", "platform2"},
        {"ls_staticShipPart_coreShip_platform3", "platform3"},
        {"ls_staticShipPart_coreShip_platform4", "platform4"},
        {"ls_staticShipPart_coreShip_radar", "radar"}
    };
};

class ls_staticShipPart_coreShip_controlTower: ls_staticShipPart_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Control Tower";
    editorSubcategory = "ls_edsubcat_staticShips_coreShip";

    model = QPATHTOF(coreShip\ls_coreShip_controlTower.p3d);
    hiddenSelections[] = {"control_tower"};
    hiddenSelectionsTextures[] = {QPATHTOF(coreShip\data\controlTower_co.paa)};
};
class ls_staticShipPart_coreShip_core1: ls_staticShipPart_coreShip_controlTower {
    author = AUTHOR;
    displayName = "Core 1";
    model = QPATHTOF(coreShip\ls_coreShip_core1.p3d);
    hiddenSelections[] = {"core"};
    hiddenSelectionsTextures[] = {QPATHTOF(coreShip\data\core_co.paa)};
};
class ls_staticShipPart_coreShip_core2: ls_staticShipPart_coreShip_core1 {
    author = AUTHOR;
    displayName = "Core 2";
    model = QPATHTOF(coreShip\ls_coreShip_core2.p3d);
};
class ls_staticShipPart_coreShip_core3: ls_staticShipPart_coreShip_core1 {
    author = AUTHOR;
    displayName = "Core 3";
    model = QPATHTOF(coreShip\ls_coreShip_core3.p3d);
};
class ls_staticShipPart_coreShip_core4: ls_staticShipPart_coreShip_core1 {
    author = AUTHOR;
    displayName = "Core 4";
    model = QPATHTOF(coreShip\ls_coreShip_core4.p3d);
};
class ls_staticShipPart_coreShip_platform1: ls_staticShipPart_coreShip_controlTower {
    author = AUTHOR;
    displayName = "Platform 1";
    model = QPATHTOF(coreShip\ls_coreShip_platform1.p3d);
    hiddenSelections[] = {"platform"};
    hiddenSelectionsTextures[] = {QPATHTOF(coreShip\data\platform_co.paa)};
};
class ls_staticShipPart_coreShip_platform2: ls_staticShipPart_coreShip_platform1 {
    author = AUTHOR;
    displayName = "Platform 2";
    model = QPATHTOF(coreShip\ls_coreShip_platform2.p3d);
};
class ls_staticShipPart_coreShip_platform3: ls_staticShipPart_coreShip_platform1 {
    author = AUTHOR;
    displayName = "Platform 3";
    model = QPATHTOF(coreShip\ls_coreShip_platform3.p3d);
};
class ls_staticShipPart_coreShip_platform4: ls_staticShipPart_coreShip_platform1 {
    author = AUTHOR;
    displayName = "Platform 4";
    model = QPATHTOF(coreShip\ls_coreShip_platform4.p3d);
};
class ls_staticShipPart_coreShip_radar: ls_staticShipPart_coreShip_controlTower {
    author = AUTHOR;
    displayName = "Radar";
    model = QPATHTOF(coreShip\ls_coreShip_radar.p3d);
    hiddenSelections[] = {"radar"};
    hiddenSelectionsTextures[] = {QPATHTOF(coreShip\data\radar_co.paa)};
};

DEPRECATED(ls_coreship,ls_staticShip_coreShip);
DEPRECATED(ls_core_control_tower,ls_staticShipPart_coreShip_controlTower);
DEPRECATED(ls_core_core1,ls_staticShipPart_coreShip_core1);
DEPRECATED(ls_core_core2,ls_staticShipPart_coreShip_core2);
DEPRECATED(ls_core_core3,ls_staticShipPart_coreShip_core3);
DEPRECATED(ls_core_core4,ls_staticShipPart_coreShip_core4);
DEPRECATED(ls_core_platform1,ls_staticShipPart_coreShip_platform1);
DEPRECATED(ls_core_platform2,ls_staticShipPart_coreShip_platform2);
DEPRECATED(ls_core_platform3,ls_staticShipPart_coreShip_platform3);
DEPRECATED(ls_core_platform4,ls_staticShipPart_coreShip_platform4);
DEPRECATED(ls_core_radar,ls_staticShipPart_coreShip_radar);
