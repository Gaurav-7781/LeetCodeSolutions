class Solution {
public:
    int encrypt(int x){
        int mx=0;
        int c=0;
        int temp=x;
        while(temp!=0){
            int d=temp % 10;
            mx = max(d,mx);
            c++;
            temp/=10;
        }
        int enc=0;
        for(int i=0;i<c;i++){
            enc=enc * 10+ mx;
        }
        return enc;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int x  : nums){
            sum+=encrypt(x);
        }
        return sum;
    }
};