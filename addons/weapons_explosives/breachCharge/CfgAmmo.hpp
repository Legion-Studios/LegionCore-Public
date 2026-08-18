class ls_explosive_breachCharge_ammo: ls_explosive_ammo_base {
    scope = 2;
    author = AUTHOR;

    model = QPATHTOF(breachCharge\ls_explosive_breachCharge.p3d);
    mineModelDisabled = QPATHTOF(breachCharge\ls_explosive_breachCharge_defused.p3d);

    hit = 10;
    indirectHit = 10;
    indirectHitRange = 0.05; // indirectHitRange is the range at which MAX damage is recieved. So the total damage range in indirectHitRange * 4

    defaultMagazine = "ls_explosive_breachCharge_magazine";

    explosionEffects = "DirectionalMineExplosion";
    soundActivation[] = {"\A3\Sounds_F_Orange\arsenal\explosives\Handling\M6SlamMine_Placement_01.wss", 1.99526, 1, 20};
    soundDeactivation[] = {"\A3\Sounds_F_Orange\arsenal\explosives\Handling\M6SlamMine_Deactivate_01.wss", 1.99526, 1, 20};
    soundHit1[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01.wss", 3.16228, 1, 1500};
    soundHit2[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02.wss", 3.16228, 1, 1500};
    soundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};

    // Submunition to deploy inside of the wall / building to project its damage inside
    submunitionAmmo = "ls_explosive_breachCharge_submunition_ammo";
    submunitionConeType[] = {"custom", {{0, 0}}};
    submunitionInitialOffset[] = {0, -(BREACH_CHARGE_RAYCAST + 0.1), 0}; // Slightly more distance to avoid being caught in the raycast

    ace_frag_skip = 1;
    EGVAR(explosives,isBreachCharge) = 1;
};

class ls_explosive_breachCharge_submunition_ammo: ls_explosive_ammo_base {
    indirectHit = 1;
    indirectHitRange = 1.5;

    ace_frag_skip = 1; // ACE Frag doesn't account for directional explosives correctly, so just skip it
    simulation = "shotDirectionalBomb";
    directionalExplosion = 1;
    explosionAngle = 90;

    EMPTY_SOUNDS;
    EMPTY_EFFECTS;
};
