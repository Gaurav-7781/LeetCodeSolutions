class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int last=nums[n-1];

        for(int i=1;i<=k;i++){
            sum+=last;
            int ele=last+1;
            last=ele;
        }
        return sum;
    }
};