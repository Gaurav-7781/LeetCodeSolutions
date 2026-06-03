class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxW=0;

        for(int i=0;i<accounts.size();i++){
            int currW=0;

            for( int j=0;j<accounts[i].size();j++){
                currW += accounts[i][j];
            }
            if(currW>maxW){
                maxW=currW;
            }
        }
        return maxW;
    }
};