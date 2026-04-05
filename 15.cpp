// Intuition
// To find all unique triplets that sum to zero, we can:

// Fix one element
// Then find two other elements whose sum equals the negative of the fixed element

// Sorting helps:

// Avoid duplicates
// Apply two-pointer efficiently

// Approach
// Sort the array.
// Loop through each element i:
// Skip duplicates (nums[i] == nums[i-1])
// Use two pointers:
// j = i + 1
// k = n - 1
// While j < k:
// Compute sum = nums[i] + nums[j] + nums[k]
// If sum < 0 → move j++
// If sum > 0 → move k--
// If sum == 0:
// Store triplet
// Move both pointers
// Skip duplicate values for j
// Return all unique triplets

// Complexity
// Time complexity:
// O(n2)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1 , k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};