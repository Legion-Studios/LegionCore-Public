// https://community.bistudio.com/wiki/Example_Code:_Random_Area_Distribution
class lsb_distributions {
    class randomArea {
        displayName = "$STR_lsb_common_distribution_randomArea";
        function = QUOTE(call FUNC(distribution_randomArea));
    };
    class gaussian {
        displayName = "$STR_lsb_common_distribution_gaussian";
        function = QUOTE(call FUNC(distribution_gaussian));
    };
};
