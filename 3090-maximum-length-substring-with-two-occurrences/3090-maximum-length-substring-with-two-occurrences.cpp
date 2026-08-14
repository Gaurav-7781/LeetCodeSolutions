class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> freq(256,0);

        int left=0;
        int ans=0;

        for(int r=0;r<s.size();r++){
            freq[s[r]]++;

            while(freq[s[r]]>2){
                freq[s[left]]--;
                left++;
            }

            ans=max(ans,r-left+1);
        }
        return ans;
    }
};