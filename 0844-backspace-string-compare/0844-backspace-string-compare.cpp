class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k=s.length() -1;
        int j=t.length() -1;

        int skip=0;
        int skipT =0;

        while(k>=0 || j>=0){

            while(k>=0){

                if(s[k] == '#'){
                    skip++;
                    k--;
                }else if(skip>0){
                    skip--;
                    k--;
                }else{
                    break;
                }
            }

            while(j>=0){

                if(t[j] == '#'){
                    skipT++;
                    j--;
                }else if(skipT>0){
                    skipT--;
                    j--;
                }else{
                    break;
                }
            }

            if(k>=0 && j>=0){
                if(s[k] != t[j]){
                    return false;
                }
            }else{
                if(k>=0 || j>=0){
                    return false;
                }
            }
            k--;
            j--;
        }
        return true;

    }
};