class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int freq[10] ={0};

        if(n==0) return 0;

        while(n>0){
            freq[n%10]++;
            n/=10;
        }
        int ans=-1;
        int mini=INT_MAX;

        for(int i=0;i<=9;i++){
            if(freq[i]==0) continue;
            if(freq[i]<mini){
                mini=freq[i];
                ans=i;
            }else if(freq[i]==mini && i<ans){
                ans=i;
            }
        }
        return ans;


    }
};