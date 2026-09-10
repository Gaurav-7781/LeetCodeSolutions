class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int idx=0;
        if(ruleKey== "color"){
            idx=1;
        }else if(ruleKey == "name"){
            idx=2;
        }

        int c=0;

        for(const auto& item: items){
            if(item[idx] == ruleValue){
                c++;
            }
        }
        return c;
        
    }
};