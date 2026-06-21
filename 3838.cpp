class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";

        for(string word : words){

            long long sum=0;

            for(char ch : word){
                
                int idx = ch - 'a';
                sum += weights[idx];
            }

            int rem= sum % 26;

            ans.push_back('z'- rem);
        }
        return ans;
    }
};