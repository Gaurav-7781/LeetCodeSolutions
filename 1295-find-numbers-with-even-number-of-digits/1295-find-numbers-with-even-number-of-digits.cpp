class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int r1=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int c1=0;
            while(temp>0){
                int digit=temp%10;
                c1++;
                temp/=10;
            }
            if(c1%2==0){
                r1++;
            }
        }
        return r1;
    }
};