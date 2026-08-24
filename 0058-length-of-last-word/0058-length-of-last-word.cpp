class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count=0;
        auto pos=s.find_last_not_of(" \t\n\r");
        if(pos!=string::npos)s.erase(pos+1);
        else return 0;

        int n= s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};