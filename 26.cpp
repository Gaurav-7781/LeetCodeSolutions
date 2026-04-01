// Remove Duplicates from Sorted Array Using Two Pointers

// Array
// Two Pointers
// C++
// Intuition
// Since the array is sorted, duplicate elements appear next to each other.
// So instead of removing elements, we can overwrite duplicates in-place and keep only unique elements at the front.

// Approach
// Use two pointers:
// left → position of last unique element
// right → scans the array
// Start left = 0, right = 1
// Traverse the array:
// If nums[right] != nums[right-1], it means a new unique element is found
// Move left forward and place this new element at nums[left]
// Keep count of unique elements (k)
// Return k

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

Code
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int k=1;
        int right=1;
        int n=nums.size();
        while(right<n){
            if(nums[right]==nums[right-1]){
                right++;
                continue;
            }
            nums[left+1]=nums[right];
            k++;
            left++;
            right++;
        }
        return k;
    }
};