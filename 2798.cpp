// Intuition
// We need to count how many employees worked at least target hours.
// So for each employee, we simply check:

// hours[i] ≥ target

// If true, we increase the count.

// Approach
// Initialize a counter count = 0.
// Traverse the hours array.
// For each element:
// If hours[i] >= target, increment count.
// Return the final count.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
// class Solution {
// public:
//     int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
//         int count=0;
//         for(int i=0;i<hours.size();i++){
//             if(hours[i]==target || hours[i]>target){
//                 count++;
//             }
//         }
//         return count;
//     }
// };