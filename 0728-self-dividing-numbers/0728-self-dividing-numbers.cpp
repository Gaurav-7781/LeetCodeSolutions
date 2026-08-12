class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
    
        for(int i=left;i<=right;i++){
            int num=i;
            int temp=i;
            bool valid= true;
            while(temp>0){
                int digit=temp % 10;
                if(digit==0 || num % digit != 0){
                    valid=false;
                    break;
                }
                temp/=10;
            }
            if(valid){
                ans.push_back(i);
            }
        }
        return ans;
    }
};