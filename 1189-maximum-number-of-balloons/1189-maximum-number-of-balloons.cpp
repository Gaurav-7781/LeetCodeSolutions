class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freqT(26,0);

        for(char ch : text){
            freqT[ch - 'a']++;
        }

        return min({freqT['b'-'a'],freqT['a'-'a'],freqT['l'-'a']/2,freqT['o'-'a']/2,freqT['n'-'a']});

    }
};