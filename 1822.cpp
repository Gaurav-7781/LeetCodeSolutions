// Intuition
// We only need the sign of the product, not the actual product.

// 👉 Important observations:

// If any element is 0 → product becomes 0
// Even number of negative values → product is positive
// Odd number of negative values → product is negative

// Approach
// Initialize neg = 0
// Traverse the array:
// If element is 0 → return 0
// If element is negative → increment neg
// After traversal:
// If neg is even → return 1
// Else → return -1

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }

            if(nums[i]<0){
                neg++;
            }
        }

        return(neg % 2 == 0) ? 1 : -1 ;
        
    }
};