class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int finalPrices=prices[i];

            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    finalPrices=prices[i] - prices[j];
                    break;
                }
            }
            ans.push_back(finalPrices);
            
        }
        return ans;
    }
};