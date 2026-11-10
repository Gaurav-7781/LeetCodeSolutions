class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum=0;
        int digiSum=0;

        for(int i=0;i<nums.size();i++){
            eleSum+=nums[i];
        }

        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp>0){
                int digit=temp%10;
                digiSum+=digit;
                temp=temp/10;
            }
        }

        return abs(eleSum-digiSum);

    }
};