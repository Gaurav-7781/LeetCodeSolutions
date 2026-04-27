// Intuition
// We need to compute two values:

// Element sum → sum of all numbers in the array
// Digit sum → sum of all digits of every number

// 👉 Final answer:

// |element sum − digit sum|

// Approach
// Initialize:
// eleSum = 0
// digiSum = 0
// Traverse array:
// Add each element to eleSum
// Traverse again:
// For each number:
// Extract digits using % 10
// Add to digiSum
// Remove digit using / 10
// Return:
// abs(eleSum - digiSum)

// Complexity
// Time complexity:
// O(n * k)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum=0;
        int digiSum=0;

        for(int i=0;i<nums.size();i++){
            eleSum+=nums[i];
        }

        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp>0){
                int digit=temp%10;
                digiSum+=digit;
                temp=temp/10;
            }
        }

        return abs(eleSum-digiSum);

    }
};