#define ADDON_DEPR(var1) class var1: ADDON { \
    _deprecated = "This addon has been deprecated and is only included for backwards compatibility. Please use ls_loadorder to always load after all Legion Studios: Core content."; \
    name = ""; \
    units[] = {}; \
    weapons[] = {}; \
    ls_isDeprecated = 1; \
}
