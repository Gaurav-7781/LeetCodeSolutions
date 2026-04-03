// Intuition
// We need to remove all occurrences of a given value from the array.
// Instead of deleting elements in-place (which can be tricky), we can build a new array containing only valid elements (those not equal to val).

// Approach
// Create an empty vector res.
// Traverse the original array:
// If nums[i] != val, add it to res.
// Replace original array with res.
// Return the size of res (number of remaining elements).

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int c=0;
        vector<int> res;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                res.push_back(nums[i]);
                
            }
        }
        nums=res;
        return res.size();
        
    }
};