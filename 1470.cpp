// Intuition
// The array is given in the form:

// [x1, x2, ..., xn, y1, y2, ..., yn]

// We need to rearrange it as:

// [x1, y1, x2, y2, ..., xn, yn]

// So the idea is to take elements alternately from the first half and second half.

// Approach
// Use two pointers:
// left = 0 → start of first half
// right = n → start of second half
// Create a result array of size 2n.
// Traverse from 0 to 2n-1:
// If index is even → take from left
// If index is odd → take from right
// Increment respective pointers after placing elements.
// Return the result array.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// o(n)

// Code
// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         int left=0;
//         int right=n;
//         vector<int> out(2*n);
//         for(int i=0;i<2*n;i++){
//             if(i%2==0){
//                 out[i]=nums[left];
//                 left++;
//             }else{
//                 out[i]=nums[right];
//                 right++;
//             }

//         }
//         return out;
//     }
// };