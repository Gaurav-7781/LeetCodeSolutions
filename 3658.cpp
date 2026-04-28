// Intuition
// Sum of first n odd numbers
// Sum of first n even numbers

// Approach
// Sum of first n odd numbers
// 1 + 3 + 5 + ... = n²
// 🔹 Sum of first n even numbers
// 2 + 4 + 6 + ... = n(n+1)
// 🔹 Compute GCD
// gcd(n², n(n+1))

// Complexity
// Time complexity:
// O(log n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        

        int sumOdd=n*n;
        int sumEven= n*(n+1);
        return gcd(sumOdd, sumEven);
    }
};