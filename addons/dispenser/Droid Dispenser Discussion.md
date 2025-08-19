# Droid Dispenser Discussion

## What is the purpose?
- Take pressure off of the Zeus having to constantly manage and spawn units.
- Something to make an objective more interesting.

## Possible Ideas
- Use fuel as a resource to spawn droids.
  - Different droids use different % of fuel?

## Spawn Methods
### Current Method
Single "unit" variable to decide what unit is spawned.

**Pros:**
-

**Cons:**
- Hardcoded, not easy to customize units

### Cargo Seats
Cargo seat for each hatch, the type of unit in each seat is the type of unit spawned for that hatch. If no unit is in the seat, the default is used.

**Pros:**
- Intuitive, easy for new zeuses to do

**Cons:**
- How do you configure other parameters, group size, patrol, etc?


## Zeus Enhanced
Should ZEN be required, or just another way to use the dispensers?
ZEN has a limit of 120 custom modules. Many large unit mods could have up to ~20 on their own, and Sci-Fi plus has ~40 with starsim mods loaded.

If ZEN is not loaded, basic functionality should be:
- Can change type of unit to spawn