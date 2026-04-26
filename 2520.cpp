// Intuition
// We need to check each digit of the number and count how many digits perfectly divide the original number.

// 👉 For each digit:

// If original % digit == 0 → valid digit

// Approach
// Store the original number (original = num)
// Extract digits one by one using:
// digit = num % 10
// Check:
// If original % digit == 0, increment count
// Remove last digit:
// num = num / 10
// Repeat until num > 0
// Return count

// Complexity
// Time complexity:
// O(log n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int original=num;

        while(num>0){
            int val=num%10;
            if(original%val==0){
                count++;
            }
            num=num/10;
        }
        return count;

    }
};