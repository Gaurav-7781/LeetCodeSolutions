// Intuition
// A number is a Harshad number if it is divisible by the sum of its digits.

// 👉 So:

// Find the sum of digits
// Check if the number is divisible by that sum

// Approach
// Initialize sum = 0
// Store original number (temp = x)
// Extract digits using:
// digit = temp % 10
// Add digits to sum
// Remove digit:
// temp /= 10
// After loop:
// If x % sum == 0 → return sum
// Else → return -1

// Complexity
// Time complexity:
// O(log x)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int temp=x;

        while(temp>0){
            int digit=temp%10;
            sum+=digit;
            temp/=10;
        }
        if(x%sum==0){
            return sum;
        }else{
            return -1;
        }
    }
};