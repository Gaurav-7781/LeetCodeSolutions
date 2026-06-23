class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> freqT(101,0);

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        for(int x : nums){
            freqT[x]++;
        }
        vector<int> ans;

        for(int i=mn;i<=mx;i++){
            if(freqT[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
    
};