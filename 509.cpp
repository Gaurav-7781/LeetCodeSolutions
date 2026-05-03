// Intuition
// The Fibonacci sequence follows a simple rule:

// F(n) = F(n-1) + F(n-2)

// 👉 Each number is the sum of the previous two numbers.

// Approach
// Define base cases:
// F(0) = 0
// F(1) = 1
// For any n > 1:

// Recursively compute:

// fib(n) = fib(n-1) + fib(n-2)
// Let recursion handle smaller subproblems

// Complexity
// Time complexity:
// O(2^n)

// Space complexity:
// O(n)

// Code
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;

        return fib(n-1) + fib(n-2);
    }
};