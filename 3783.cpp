// Intuition
// We want to measure how far a number is from its reverse (mirror).

// 👉 So:

// Reverse the digits of the number
// Take the absolute difference between original and reversed

// Approach
// Store original number
// Reverse the number using:
// digit = n % 10
// res = res * 10 + digit
// n = n / 10
// Compute:
// |original - reversed|
// Return the result

// Complexity
// Time complexity:
// O(log n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int mirrorDistance(int n) {
        int res=0;
        int original=n;

        while(n>0){
            int digit=n%10;
            res=res*10 + digit;
            n=n/10;
        }

        return abs(original-res);
    }
};