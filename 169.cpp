// Intuition
// The majority element appears more than ⌊n/2⌋ times, so it dominates the array.
// We can use a voting system:

// Increase count when we see the same element
// Decrease count when we see a different element
// When count becomes zero, choose a new candidate

// Approach
// Initialize:
// ans (candidate)
// freq = 0 (count)
// Traverse the array:
// If freq == 0, set current element as candidate
// If current element equals candidate → freq++
// Else → freq--
// At the end, ans will be the majority element

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0;
        int ans=0;

        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
};