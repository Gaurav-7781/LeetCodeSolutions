Intuition
The array contains only three values: 0, 1, and 2.
Instead of sorting normally, we can place elements in correct regions:

Left → all 0s
Middle → all 1s
Right → all 2s

Approach
Use three pointers:
low → next position for 0
mid → current element
right → next position for 2
Traverse while mid <= right:
If nums[mid] == 0:
Swap with low
Move both low and mid
If nums[mid] == 1:
Just move mid
If nums[mid] == 2:
Swap with right
Move right only
Continue until array is sorted

Complexity
Time complexity:
O(n)

Space complexity:
O(1)

Code
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