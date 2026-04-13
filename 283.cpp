// Move Zeroes Using Two-Pointer (In-Place Stable Approach)

// G 7
// 0
// a few seconds ago
// C++
// Intuition
// We want to move all 0s to the end without changing the order of non-zero elements.
// Instead of shifting zeros, it’s easier to collect non-zero elements first and then fill the remaining positions with zeros.

// Approach
// Initialize a pointer k = 0 (position to place next non-zero).
// Traverse the array:
// If current element is non-zero → place it at nums[k] and increment k.
// After traversal, all non-zero elements are at the front.
// Fill remaining positions (from k to end) with 0.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        while(k<n){
            nums[k]=0;
            k++;
        }
    }
};