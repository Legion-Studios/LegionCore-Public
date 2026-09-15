# Contributing Setup & Guidelines

## Setting up the Development Environment
### 1. Set up a P Drive
Legion Studios: Core requires a P drive to be set up, you can follow the BIKI (Bohemia Interactive Wiki) [P drive page](https://community.bistudio.com/wiki/P_drive#How_to_use_it) on how to set it up.

### 2. Create an ls Folder
Create a new folder on your P drive named ls/.

```shell
mkdir ls
```

### 3. Clone the LS: Core Repository
Clone the LS: Core repository inside ls/

```shell
git clone https://github.com/Legion-Studios/LegionCore.git core
```

### 4. Enable Git Hooks
After cloning, configure Git to use the repo's tracked hooks directory:

```shell
cd core
git config core.hooksPath .githooks
```

This enables the pre-commit hook, which runs `hemtt ln sort` before each commit.

## How to build
Legion Studios: Core is built with [HEMTT](https://hemtt.dev), a modern Arma 3 build tool. There are several ways to build the mod, depending on what best fits your workflow. These instructions assume you are using [Visual Studio Code](https://code.visualstudio.com/download). If you are using a different IDE, you are expected to know how to do basic tasks like opening a terminal.

To install HEMTT, run winget install hemtt in your terminal. This will also create the hemtt alias.

### Command Line
You can build the mod locally by running [hemtt build](https://hemtt.dev/commands/build.html) from the project folder. This will build the mod and place the built pbo files into .hemttout/build, which you can add to the Arma launcher as a local mod. You can also run hemtt build --just addonName, which builds only the specified addon.

There is also [hemtt launch](https://hemtt.dev/commands/launch.html), which launches Arma with filepatching enabled. This is useful when writing scripts so functions can be recompiled without restarting the game.

### Visual Studio Code Tasks
Visual Studio Code allows you to create tasks to quickly run common actions.
Pressing <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>B</kbd> (by default) will run the default build task, which is configured to build the addon for the file you are editing. This requires [Python 3](https://www.python.org/downloads) to be installed.

For example, running the task from addons/common/functions/fnc_someFunction.sqf will build the common addon.

To run other tasks, press <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>P</kbd> (by default) to open the Command Palette. Then:
1. Enter Run Task and select Tasks: Run Task
2. Select a task to run
   - HEMTT Build builds all addons
   - HEMTT Build --just builds your current addon
   - HEMTT Check runs hemtt check
   - Validate Config validates config, rvmat, and model.cfg files

## Config Guidelines
All public (scope = 2) classes that are accessible from the arsenal or virtual garage should specify author = AUTHOR. The vanilla arsenal and garage menu will display Unknown Community Author for a given weapon or vehicle if that class does not explicitly set the author property. AUTHOR is a macro shorthand for Legion Studios.

Example:

```cpp
class ls_weapon_dc15s_base {
    author = AUTHOR;
};
class ls_weapon_dc15s: ls_weapon_dc15s_base {
    // author is not explicitly defined
    // Arsenal will show "Unknown Community Author"
};
```

### Macro Usage
For file paths, use the PATHTO series of macros. These macros are intended to be a shorthand for file paths to a given addon. The Q means the macro is wrapped in quotes.
- QPATHTOF(filepath): quoted path to the current addon, for example "\\ls\\core\\addons\\<addonName>\\filepath"
- QPATHTOF2(filepath): same as QPATHTOF, but without a leading slash
- QPATHTOEF(addon,filepath): same as QPATHTOF but for pathing to another addon in this mod
- QPATHTOEF2(addon,filepath): same as QPATHTOEF, but without a leading slash

If using the [LazyArmaDev](https://marketplace.visualstudio.com/items?itemName=DartRuffian.lazyarmadev) extension, you can also right click a file to copy the path using the QPATHTO(E)F macro.

## Scripting Guidelines
### Unscheduled vs Scheduled
Try to stay in the unscheduled environment as much as possible. The scheduled environment can lead to unreliable timing issues and race conditions. All scheduled code also shares execution time, and mission makers often use a lot of scheduled code, so we should avoid it when possible.

CBA alternatives to scheduled commands:
- sleep: CBA_fnc_waitAndExecute
- waitUntil: CBA_fnc_waitUntilAndExecute

### Networking
For networking, use CBA events and event handlers rather than remoteExec. Using remoteExec can have issues with mods and missions setting CfgRemoteExec values that may block necessary commands or functions.

CBA events also encourage event-driven design principles. They can be used for internal networking and for API-style integration points for third-party mods.
