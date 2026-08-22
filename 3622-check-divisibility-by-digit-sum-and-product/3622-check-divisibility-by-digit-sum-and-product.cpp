class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int prod=1;
        while(temp>0){
            int d=temp % 10;
            sum+=d;
            prod *=d ;
            temp/=10;
        }
        int ans=sum + prod;
        if(n % ans == 0){
            return true;
        }else{
            return false;
        }
    }
};