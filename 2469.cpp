// Intuition
// We are given a temperature in Celsius and need to convert it into:

// Kelvin
// Fahrenheit

// Using standard conversion formulas.

// Approach
// Use the formula to convert Celsius to Kelvin:

// Kelvin = Celsius + 273.15

// Use the formula to convert Celsius to Fahrenheit:

// Fahrenheit = Celsius × 1.8 + 32
// Store both results in a vector and return it.

// Complexity
// Time complexity:
// O(1)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double K=0,F=0;

        K=celsius + 273.15;
        F=celsius * 1.80 + 32.00;

        return {K,F};
    }
};