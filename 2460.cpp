// Intuition
// We need to perform two tasks:

// If two adjacent elements are equal, double the first and set the second to zero.
// Move all zeros to the end while maintaining the order of non-zero elements.

// Instead of removing zeros, we can shift non-zero elements forward efficiently.

// Approach
// Traverse the array from left to right (till n-1):
// If nums[i] == nums[i+1]:
// Double nums[i]
// Set nums[i+1] = 0
// Use a pointer k to move all non-zero elements forward:
// For each non-zero element, place it at nums[k]
// Fill the remaining positions with 0

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i] * 2;
                nums[i+1] = 0;
            }
        }

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
        return nums;
    }
};