class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w,q;
        for(int i=0;i<word1.size();i++){
            w=w+word1[i];
        }
        for(int j=0;j<word2.size();j++){
            q=q+word2[j];
        }
        if(w==q){
            return true;
        }else{
            return false;
        }
    }
};