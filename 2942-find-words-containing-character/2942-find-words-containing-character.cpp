class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> id;
        int n=words.size();
        for(int i=0;i<n;i++){
            if(words[i].find(x)!=string::npos){
                id.push_back(i);
            }
        }
        return id;
    }
};