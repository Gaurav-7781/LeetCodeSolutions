// Intuition
// A number is a palindrome if it reads the same forward and backward.
// Instead of working with digits mathematically, we can convert the number into a string and compare it with its reverse.

// Approach
// If the number is negative, return false (since -121 ≠ 121-).
// Convert the integer to a string.
// Create a copy of the string and reverse it.
// Compare the original string with the reversed string:
// If equal → return true
// Else → return false

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        string s=to_string(x);
        string rev=s;
        reverse(rev.begin(),rev.end());

        return rev==s;
    }
};