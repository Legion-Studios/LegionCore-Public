#define MAINPREFIX ls
#define PREFIX core
#define MOD_NAME Legion Studios: Core
#define AUTHOR "Legion Studios"

#define REQUIRED_VERSION 2.18
#define REQUIRED_CBA_VERSION {3,18,1}
#define REQUIRED_ACE_VERSION {3,19,0}

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCH,BUILD

// Used for addon names, i.e. "Legion Studios Core: Weapons"
#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif

#ifdef SUBCOMPONENT
    #ifndef SUBCOMPONENT_BEAUTIFIED
        #define SUBCOMPONENT_BEAUTIFIED SUBCOMPONENT
    #endif
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT_BEAUTIFIED (SUBCOMPONENT_BEAUTIFIED))
#else
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT_BEAUTIFIED)
#endif
