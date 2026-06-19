class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int currV=0;
        int alt=0;

        for(int x : gain){
            currV+=x;
            alt=max(currV,alt);
        }
        return alt;
    }
};