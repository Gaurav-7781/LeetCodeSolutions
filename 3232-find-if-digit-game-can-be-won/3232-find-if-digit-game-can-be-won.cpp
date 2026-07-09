class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int sumd=0;
        int sumD=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0 && nums[i]<=9){
                sumd+=nums[i];
            }else{
                sumD+=nums[i];
            }
        }

        if(sumD>sumd || sumd>sumD){
            return true;
        }else{
            return false;
        }
    }
};