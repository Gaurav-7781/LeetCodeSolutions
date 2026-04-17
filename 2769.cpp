// Intuition
// Each operation allows us to:

// Increase x by 1
// Decrease num by 1

// This effectively increases the difference between x and num by 2 per operation.

// Approach
// Initially assume x = num
// In each operation:
// Increase x by 1
// Decrease num by 1
// → Net effect: x increases by 2
// After t operations:
// Total increase = 2 × t

// Final answer:

// x = num + 2*t

// Complexity
// Time complexity:
// O(1)

// Space complexity:
// O(1)

Code
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }
};