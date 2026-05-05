// Intuition
// We want to remove all digits 0 from a number and form a new number using the remaining digits in the same order.

// 👉 Idea:

// Extract digits one by one
// Skip zeros
// Rebuild number using place value

// Approach
// Initialize:
// res = 0 (result number)
// place = 1 (to maintain position)
// While n > 0:

// Extract last digit:

// digit = n % 10
// If digit is not zero:

// Add it to result:

// res += digit * place

// Update place:

// place *= 10

// Remove digit:

// n /= 10
// Return res

// Complexity
// Time complexity:
// O(log n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    long long removeZeros(long long n) {
        long long res=0;
        long long place = 1;
        while(n>0){
            int digit = n % 10;
            if(digit!=0){
                res = res + digit * place;
                place *=10;
            }
            n/=10;
        }
        return res;
    }
};