class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int c=1;
        int next=1;
        int ans=0;

        while(next<n){
            if(nums[next]==nums[next-1]){
                next++;
                continue;
            }
            nums[ans+1]=nums[next];
            c++;
            next++;
            ans++;
        }
        return c;
    }
};