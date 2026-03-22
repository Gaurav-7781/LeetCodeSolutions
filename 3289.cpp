// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// If we sort the array, all duplicate elements will come next to each other.
// So instead of checking every pair, we can simply compare adjacent elements to detect duplicates.
// # Approach
// <!-- Describe your approach to solving the problem. -->
// Sort the array.
// Create a vector dup to store duplicate elements.
// Traverse the array starting from index 1.
// For each index i:
// If nums[i] == nums[i-1], it means the element is duplicated.
// Add it to the result vector.
// Return the result vector.
// # Complexity
// - Time complexity:
// <!-- Add your time complexity here, e.g. $$O(n)$$ -->
// O(nlogn)
// - Space complexity:
// <!-- Add your space complexity here, e.g. $$O(n)$$ -->
// O(1)
// # Code
// ```cpp []
// class Solution {
// public:
//     vector<int> getSneakyNumbers(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> dup;

//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]){
//                 dup.push_back(nums[i]);
//             }
//         }
//         return dup;
//     }
// };
// ```