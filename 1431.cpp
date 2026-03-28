// Intuition
// To determine whether a kid can have the greatest number of candies, we don’t need to compare with every other kid.
// Instead, we first find the maximum candies any kid currently has.

// Then for each kid, we check:

// If giving them all extraCandies makes their total at least equal to the maximum, they can be among the greatest.

// Approach
// Find the maximum value in the candies array.
// Initialize a result vector.
// Traverse each element:
// If candies[i] + extraCandies ≥ maxCandy, push true
// Otherwise, push false
// Return the result vector.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         int n=candies.size();
//         int maxCandy = *max_element(candies.begin(), candies.end());
//         vector<bool> result;
//         for(int i=0;i<n;i++){
//             if(candies[i] + extraCandies >=maxCandy){
//                 result.push_back(true);
//             }else{
//                 result.push_back(false);
//             }
//         }
//         return result;
//     }
// };