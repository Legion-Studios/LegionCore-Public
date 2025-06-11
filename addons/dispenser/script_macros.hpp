#define PAGE_HOME 0
#define PAGE_DROIDTYPE 1
#define PAGE_GROUPSIZE 2
#define PAGE_AUTOPATROL 3
#define PAGE_BEHAVIOR 4

// Shorthand macros for getting/setting menu pages for the dispenser, these macros are meant to be used in UserActions
#define GETPAGE (GETVAR(menu,0))
#define SETPAGE(pageNum) (SETVAR(menu,pageNum,false))

// Change Droid Actions
// CHANGE_DROID(B1 (Shotgun),Shotgun,""lsd_cis_b1Shotgun_standard"");
#define CHANGE_DROID(name,type,className) class DOUBLES(changeDroidType,type): activate { \
    displayName = QUOTE(Change: name##); \
    condition = QUOTE(GETPAGE == PAGE_DROIDTYPE and {GETVAR(droidType,""lsd_cis_b1_standard"") != className}); \
    statement = QUOTE(SETVAR(droidType,className,true)); \
}

// Change Group Size Actions
#define CHANGE_GROUPSIZE(amount) class DOUBLES(changeGroupSize,amount): activate { \
    displayName = QUOTE(amount); \
    condition = QUOTE(GETPAGE == PAGE_GROUPSIZE and {GETVAR(groupSize,100) != amount}); \
    statement = QUOTE(SETVAR(groupSize,amount,true)); \
}

// Auto Patrol Radius
#define CHANGE_AUTOPATROL_RADIUS(size) class DOUBLES(autoPatrol,radius##size##): activate { \
    displayName = QUOTE(Radius: size##m); \
    condition = QUOTE(GETPAGE == PAGE_AUTOPATROL and {GETVAR(autoPatrol_radius,50) != size}); \
    statement = QUOTE(SETVAR(autoPatrol_radius,size * 2,true)); \
}

#define CHANGE_BEHAVIOR(mode) class DOUBLES(behavior,mode): activate { \
    displayName = QUOTE(Behavior: mode##); \
    condition = QUOTE(GETPAGE == PAGE_BEHAVIOR and {GETVAR(behavior,""AWARE"") != QQUOTE(mode)}); \
    statement = QUOTE(SETVAR(behavior,QQUOTE(mode),true)); \
}