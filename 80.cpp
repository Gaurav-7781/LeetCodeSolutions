// Intuition
// Since the array is sorted, duplicate elements appear consecutively.
// We are allowed to keep at most two occurrences of each element, so we need to skip the third and further duplicates.

// Approach
// If array size ≤ 2, return its size (already valid).
// Use a pointer k to track the position to place the next valid element.
// Start iterating from index 2:
// Compare current element nums[i] with nums[k-2]
// If they are different → it means this is not the third duplicate → keep it
// Place it at nums[k] and increment k
// Return k as the new length

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;

        int k=2;
        for(int i=2;i<n;i++){
            if(nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};