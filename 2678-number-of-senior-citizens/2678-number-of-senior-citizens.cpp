class Solution {
public:
    int countSeniors(vector<string>& details) {

        int count=0;
        for(int i=0;i<details.size();i++){
            string s=details[i];

            string ans=s.substr(11,2);
            int num=stoi(ans);

            if(num>60){
                count++;
            }
        }
        return count;
    }
};