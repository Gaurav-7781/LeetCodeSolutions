class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=INT_MAX;
        for(int x : nums){
            if(x<min){
                min=x;
            }
        }

        int max=INT_MIN;

        for(int x : nums){
            if(x>max){
                max=x;
            }
        }

        return gcd(min,max);
    }
};