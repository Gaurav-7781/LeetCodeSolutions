// Intuition
// Since the array is sorted, we can efficiently find the required pair using two pointers instead of checking all pairs.
// We try combining the smallest and largest elements and adjust based on their sum.

// Approach
// Initialize two pointers:
// l = 0 (start of array)
// r = n - 1 (end of array)
// While l < r:
// Calculate sum = numbers[l] + numbers[r]
// If sum == target → return indices (l+1, r+1) (1-based)
// If sum < target → move left pointer forward (l++)
// If sum > target → move right pointer backward (r--)
// Return empty vector if no pair found (safety case).

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

Code
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int r=n-1;
        
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                return {l+1,r+1};
            }else if(numbers[l]+numbers[r]<target){
                l++;
            }else{
                r--;
            }
        }
        return {};
    } 
    
};