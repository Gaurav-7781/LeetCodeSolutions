// Intuition
// We need to count how many numbers in the array have an even number of digits.

// 👉 So for each number:

// Count its digits
// Check if the count is even

// Approach
// Initialize count = 0
// Traverse each number in the array:
// Copy number into temp
// Count digits using:
// temp % 10 (extract digit)
// temp /= 10 (remove digit)
// If digit count is even → increment result
// Return final count

// Complexity
// Time complexity:
// O(n * d)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int r1=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int c1=0;
            while(temp>0){
                int digit=temp%10;
                c1++;
                temp/=10;
            }
            if(c1%2==0){
                r1++;
            }
        }
        return r1;
    }
};