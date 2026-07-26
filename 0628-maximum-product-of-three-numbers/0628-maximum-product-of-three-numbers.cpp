class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int f=nums[n-1];
        int s=nums[n-2];
        int t=nums[n-3];

        int op1= f*s*t;
        int op2= f*nums[0]*nums[1];

        return max(op1,op2);
    }
};