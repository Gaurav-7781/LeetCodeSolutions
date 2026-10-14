class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxCandy = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        for(int i=0;i<n;i++){
            if(candies[i] + extraCandies >=maxCandy){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};