#define SERVER_ONLY 0
#define GLOBAL 1
#define GLOBAL_JIP 2

#define TREE_VIEW_HEIGHT 12
#define TREE_VIEW_SEARCH_HEIGHT (TREE_VIEW_HEIGHT - 1)

#define DISPENSER_GROUP_DEFAULT [[0, 0, 0], "[]"]
#define QDISPENSER_GROUP_DEFAULT QUOTE([ARR_2([ARR_3(0,0,0)],'[]')])
#define RADIUS_DEFAULT 50

// Found from trial and error, could not find the logic to handle sorting attributes
#define CURATOR_ATTRIBUTE_SPACING 1.88

// We need IDCs for the control groups so that the vanilla zeus module script can reposition them correctly
// 11-18 prefix for "l" "s"
// First three (after prefix) is for control group, Last number is for the control
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
