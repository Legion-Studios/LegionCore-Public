#define SERVER_ONLY 0
#define GLOBAL 1
#define GLOBAL_JIP 2

#define TREE_VIEW_HEIGHT 12
#define TREE_VIEW_SEARCH_HEIGHT (TREE_VIEW_HEIGHT - 1)

#define TREE_DEFAULT_VALUE [[], ""]
#define QTREE_DEFAULT_VALUE QUOTE([ARR_2([],'')])
#define VEHICLE_TYPES_DEFAULT [[[0, 0], ""]]
#define QVEHICLE_TYPES_DEFAULT QUOTE([[ARR_2([ARR_2(0,0)],'')]])
#define DISPENSER_GROUP_DEFAULT [[[0, 0, 0], "[]"]]
#define QDISPENSER_GROUP_DEFAULT QUOTE([[ARR_2([ARR_3(0,0,0)],'[]')]])

// https://github.com/zen-mod/ZEN/blob/master/addons/position_logics/functions/fnc_initList.sqf#L64-L66
#define ZEN_POINT_NONE -4
#define ZEN_POINT_RANDOM -3
#define ZEN_POINT_NEAREST -2
#define ZEN_POINT_FARTHEST -1

#define RADIUS_DEFAULT 50
#define SPAWN_DELAY_DEFAULT 180
#define WAVE_SIZE_DEFAULT 3

#define LABEL_W 10
#define LABEL_SPACING 0.1

#define SLIDERTIME_SLIDER_W 11.4
#define SLIDERTIME_EDIT_W 1.5

// Found from trial and error, could not find the logic to handle sorting attributes
#define CURATOR_ATTRIBUTE_SPACING 1.88

// We need IDCs for the control groups so that the vanilla zeus module script can reposition them correctly
// 11-18 prefix for "l" "s"
// First three (after prefix) is for control group, Last number is for the control
#define IDC_LABEL                                   99
#define IDC_VALUE                                  100
#define IDC_DISPENSER_GROUP                   11180000
#define IDC_DISPENSER_GROUP_TREE              11180001
#define IDC_DISPENSER_GROUP_LABEL             11180002
#define IDC_DISPENSER_GROUP_BACKGROUND        11180003
#define IDC_DISPENSER_GROUP_CUSTOM            11180010
#define IDC_DISPENSER_GROUP_CUSTOM_LABEL      11180011
#define IDC_DISPENSER_GROUP_CUSTOM_EDIT       11180012
#define IDC_DISPENSER_GROUP_CUSTOM_BACKGROUND 11180013
#define IDC_SPAWNLIMIT                        11180020
#define IDC_SPAWNLIMIT_LABEL                  11180021
#define IDC_SPAWNLIMIT_EDIT                   11180022
#define IDC_RADIUS                            11180030
#define IDC_RADIUS_SLIDER                     11180031
#define IDC_RADIUS_EDIT                       11180032
#define IDC_DOORLOCK                          11180040
#define IDC_DOORLOCK_TOOLBOX                  11180041
#define IDC_SKILLS                            11180050
#define IDC_SKILLS_LABEL                      11180051
#define IDC_SKILLS_TOOLBOX                    11180052
#define IDC_MOUNT_ATRT_INSTANT_LABEL          11180060
#define IDC_MOUNT_ATRT_INSTANT_TOOLBOX        11180061
#define IDC_SPAWNTRIGGER                      11180070
#define IDC_SPAWNDELAY                        11180080
#define IDC_SLIDERTIME_HOUR                        101
#define IDC_SLIDERTIME_MINUTE                      102
#define IDC_SLIDERTIME_SECOND                      103
#define IDC_WAVESIZE                          11180090
#define IDC_VEHICLETYPES                      11180100
#define IDC_CODE                              11180110
#define IDC_RALLYPOINT                        11180120
