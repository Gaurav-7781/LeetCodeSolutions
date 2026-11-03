class Solution {
public:
    long long removeZeros(long long n) {
        long long res=0;
        long long place = 1;
        while(n>0){
            int digit = n % 10;
            if(digit!=0){
                res = res + digit * place;
                place *=10;
            }
            n/=10;
        }
        return res;
    }
};