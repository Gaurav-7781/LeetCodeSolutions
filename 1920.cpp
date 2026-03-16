// Solved LeetCode 1920 – Build Array from Permutation 🚀

// Idea:
// For each index i, compute ans[i] = nums[nums[i]].

// Time: O(n)
// Space: O(n)

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
            ans.push_back(nums[nums[i]]);
        return ans;
    }
};

// #LeetCode #CPP #DSA