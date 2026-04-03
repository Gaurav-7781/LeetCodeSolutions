// Intuition
// A mountain is considered stable if the previous mountain’s height is strictly greater than the given threshold.
// So instead of checking the current mountain, we only need to look at the previous element.

// Approach
// Initialize an empty result array.
// Traverse the array starting from index 1 (since index 0 has no previous mountain).
// For each index i:
// Check if height[i-1] > threshold
// If true, add index i to the result.
// Return the result array.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> res;

        for(int i = 1; i < height.size(); i++){
            if(height[i-1] > threshold){
                res.push_back(i);
            }
        }

        return res;

    }
};