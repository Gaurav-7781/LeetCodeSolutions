// Intuition
// To find all unique quadruplets that sum to the target, we can reduce the problem step by step:

// Fix two elements
// Then find the remaining two elements using the two-pointer technique

// Sorting helps in:

// Efficient two-pointer traversal
// Avoiding duplicate quadruplets

// Approach
// Sort the array.
// Fix the first element i:
// Skip duplicates to avoid repeating results
// Fix the second element j:
// Again skip duplicates
// Use two pointers:
// p = j + 1, q = n - 1
// While p < q:
// Compute sum of four elements
// If sum < target → move p++
// If sum > target → move q--
// If equal:
// Store the quadruplet
// Move both pointers
// Skip duplicates for p and q
// Return all unique quadruplets

// Complexity
// Time complexity:
// O(n3)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;

        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){

            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n;j++){

                if(j>i+1 && nums[j]==nums[j-1]) continue;

                int p=j+1, q=n-1;

                while(p<q){
                    long long sum=(long long)nums[i] +(long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                    if(sum<target){
                        p++;
                    }else if(sum>target){
                        q--;
                    }else{
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;
                        q--;

                        while(p<q && nums[p]==nums[p-1]) p++;
                        while(p<q && nums[q]==nums[q+1]) q--;
                    }
                }
            }
        }
        return ans;
    }
};