// Intuition
// We need to process each digit of the number:

// Multiply all digits → product
// Add all digits → sum
// Finally return:
// product - sum

// Approach
// Initialize:
// prod = 1 (for multiplication)
// sum = 0 (for addition)
// Extract digits using:
// digit = n % 10
// Update:
// prod *= digit
// sum += digit
// Remove last digit:
// n = n / 10
// Repeat until n > 0
// Return prod - sum

// Complexity
// Time complexity:
// O(log n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;

        while(n>0){
            int digit=n%10;
            prod=prod * digit ;
            sum=sum + digit ;
            n=n/10;
        }
        return prod-sum;
        
    }
};