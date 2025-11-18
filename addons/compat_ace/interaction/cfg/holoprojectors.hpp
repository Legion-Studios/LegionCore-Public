class House;
class House_F: House {
    class ACE_Actions;
};
class House_Small_F: House_F {};
class EGVAR(holoprojector,base): House_Small_F {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions;
    };
};
class EGVAR(holoprojector,table_circle): EGVAR(holoprojector,base) {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[0, 0, 1]";
        };
    };
};

class EGVAR(holoprojector,table_rectangle): EGVAR(holoprojector,base) {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[0, 0, 1]";
        };
    };
};
