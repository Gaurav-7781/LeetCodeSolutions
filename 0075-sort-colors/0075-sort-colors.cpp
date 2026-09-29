class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();

        int low=0;
        int mid=0;
        int right=n-1;
        while(mid<=right){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[right],nums[mid]);
                right--;
            }
        }
    }
};