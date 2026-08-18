class zen_context_menu_actions {
    class VehicleAppearance {
        condition = QUOTE(_hoveredEntity isEqualType objNull && { _hoveredEntity call EFUNC(props,canEditAppearance) });
    };
};
