class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        long long mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
        }

        long long mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<mn){
                mn=nums[i];
            }
        }

        long long value=mx - mn;
        return value * k;
    }
};