class Solution {
public:
    int differenceOfSums(int n, int m) {
        int s1=0,s2=0;
        vector<int> num;
        int ans;
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        for(int i=0;i<n;i++){
            if(num[i]%m!=0){
                s1+=num[i];
            }else{
                s2+=num[i];
            }
        }
        ans=s1-s2;
        return ans;
    }
};