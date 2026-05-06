// Intuition
// The score of a string is calculated by finding the absolute difference between the ASCII values of every pair of adjacent characters.

// 👉 For each neighboring pair:

// |s[i] - s[i+1]|

// Add all these differences to get the final score.

// Approach
// Initialize sum = 0
// Traverse the string from index 0 to n-2
// For every adjacent pair:
// Compute absolute ASCII difference
// Add it to sum
// Return sum

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            sum+=abs(s[i]-s[i+1]);
        }
        return sum;
    }
};