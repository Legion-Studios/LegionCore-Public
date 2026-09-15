class ls_cloneHelmet_phase3Pilot: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase3_pilot_helmet);

    model = QPATHTOF(helmets\phase3Pilot\ls_helmet_clone_phase3Pilot.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase3Pilot\data\camo1_co.paa),
        QPATHTOF(helmets\phase3Pilot\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\phase3PilotHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase3Pilot\ls_helmet_clone_phase3Pilot.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };

        // Slightly less face protection since it's open faced, but we can't give facewear/nvgs protection
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Face: Face {
                armor = 3;
            };
        };
    };
};
