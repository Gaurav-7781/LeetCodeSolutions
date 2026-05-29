class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int product=1;
        int sum=0;
        for(int i=0;i<n;i++){
            int value= 'z' - s[i] + 1;
            product=value * (i+1) ;
            sum+=product;
        }
        return sum;
    }
};