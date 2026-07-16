class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26,0);
        vector<string> ans;
        for(char ch : words[0]){
            freq[ch - 'a']++;
        }


        for(int i=1;i<words.size();i++){
            vector<int> curr(26,0);
            for(char ch : words[i]){
                curr[ch - 'a']++;
            }
            for(int j = 0; j < 26; j++){
                freq[j] = min(freq[j], curr[j]);
            }
            
        }
         for(int j = 0; j < 26; j++){

            while(freq[j] > 0){

                string s(1, 'a' + j);  

                ans.push_back(s);

                freq[j]--;
            }
        }

        return ans;


    }
};