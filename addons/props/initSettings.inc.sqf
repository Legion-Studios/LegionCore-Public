[
    QGVAR(reinsertMessage), "EDITBOX",
    ["Reinsert Notification", "Message displayed when a player uses the Reinsert Terminal. All players on the caller's side with the pilot skill will recieve the message.\n%1 = Caller's name\n%2 = Caller's group name"],
    _category, "%1 has requested a reinsert.", 1
] call CBA_fnc_addSetting;

[
    QGVAR(reinsertCooldown), "TIME",
    ["Reinsert Cooldown", "Per-player cooldown for using the Reinsert Terminal."],
    _category, [0, 300, 5], 1
] call CBA_fnc_addSetting;
