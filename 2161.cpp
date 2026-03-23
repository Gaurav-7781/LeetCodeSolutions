// Partition Array into Less, Equal, and Greater Than Pivot

// Intuition
// We need to rearrange the array such that:

// All elements less than pivot come first
// Then elements equal to pivot
// Then elements greater than pivot

// To maintain the original relative order, we cannot swap randomly.
// So we divide elements into three groups and then combine them.

// Approach
// Create three vectors:
// left → elements < pivot
// middle → elements == pivot
// right → elements > pivot
// Traverse the array:
// Push each element into the appropriate vector.
// Combine all three vectors in order:
// left + middle + right
// Return the final result.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
// class Solution {
// public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {
//         vector<int> left,right,middle;

//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<pivot){
//                 left.push_back(nums[i]);
//             }
//             else if(nums[i]==pivot){ 
//                 middle.push_back(nums[i]);
//             }
//             else{
//                 right.push_back(nums[i]);
//             } 
//         }

//         vector<int> result;
//         result.insert(result.end(),left.begin(),left.end());
//         result.insert(result.end(),middle.begin(),middle.end());
//         result.insert(result.end(),right.begin(),right.end());

//         return result;
//     }
// };