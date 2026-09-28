class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double K=0,F=0;

        K=celsius + 273.15;
        F=celsius * 1.80 + 32.00;

        return {K,F};
    }
};