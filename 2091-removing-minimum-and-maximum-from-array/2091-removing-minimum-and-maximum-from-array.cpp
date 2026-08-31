class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size();
        int ansM=-1;
        int ansm=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                ansM=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                ansm=i;
            }
        }
        int left=min(ansM,ansm);
        int right=max(ansM,ansm);

        return min({left+1+n-right,right+1,n-left});
        
    }
};