class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left=0;
        int right=n-1;
        double ans=INT_MAX;
        while(left<right){
            double avg = (nums[left] + nums[right]) / 2.0;
            ans=min(avg,ans);
            left++;
            right--;
        }
        return ans;

    }
};