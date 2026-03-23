// Transform Even and Odd Elements into 0s and 1s

// Intuition
// We want to transform the array such that:

// Even numbers → 0
// Odd numbers → 1

// After transforming, we sort the array so that all 0s (even numbers) come first, followed by 1s (odd numbers).

// We use parity (even/odd check) to decide whether to assign 0 or 1.

// Approach
// Traverse the array.
// For each element:
// If it is odd (nums[i] & 1), set it to 1.
// Otherwise, set it to 0.
// After transformation, sort the array.
// Return the modified array.

// Complexity
// Time complexity:
// O(nlogn)

// Space complexity:
// O(1)

// Code
// class Solution {
// public:
//     vector<int> transformArray(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i] & 1){
//                 nums[i]=1;
//             }else{
//                 nums[i]=0;
//             }
//         }

//         sort(nums.begin(),nums.end());
//         return nums;
//     }
// };