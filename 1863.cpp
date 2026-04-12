// Intuition
// Instead of generating all subsets (which is exponential), we observe that each bit in the numbers contributes independently to the final sum.
// If a bit appears in any element, it will appear in exactly half of all subsets.

// Approach
// Compute the bitwise OR of all elements:
// This captures all bits that can appear in any subset XOR.
// Each bit contributes to 2^(n-1) subsets:
// Because each element is included/excluded independently.
// Multiply the OR result by 2^(n-1) to get the final sum.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int OR=0;

        for(int x : nums){
            OR |=x;
        }

        return OR * (1<<nums.size()-1);
    }
};