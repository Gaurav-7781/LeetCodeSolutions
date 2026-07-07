class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> x;
       
        while(n>0){
            int digit=n%10;
            
            if(digit !=0){
                x.push_back(digit);
            }
           
            n/=10;
        }
        reverse(x.begin(),x.end());
        long long ans=0;
        int sum=0;

        for(int d : x){
            ans=ans * 10 + d;
            sum+=d;
        }
        return ans*sum;
        
        
    }
};