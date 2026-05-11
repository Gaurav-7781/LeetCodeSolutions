class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int temp=nums[i];
            while(temp>0){
                int digit=temp%10;
                sum+=digit;
                temp/=10;
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};