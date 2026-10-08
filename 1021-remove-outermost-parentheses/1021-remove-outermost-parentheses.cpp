class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;

        string res="";

        for(char &ch : s){
            if(ch == '('){
                if(c!=0) res.push_back(ch);

                c++;
            }else{
                c--;
                if(c!=0) res.push_back(ch);
            }
        }
        return res;
    }
};