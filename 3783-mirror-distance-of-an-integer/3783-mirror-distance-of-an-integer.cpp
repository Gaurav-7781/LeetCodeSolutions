class Solution {
public:
    int mirrorDistance(int n) {
        int res=0;
        int original=n;

        while(n>0){
            int digit=n%10;
            res=res*10 + digit;
            n=n/10;
        }

        return abs(original-res);
    }
};