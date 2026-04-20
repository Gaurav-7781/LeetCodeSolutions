// Intuition
// We need to determine which number (x or y) is closer to z.

// 👉 Distance is measured using:

// |z - x| and |z - y|

// The smaller distance means closer value.

// Approach
// Compute distance of x from z:

// dis1 = |z - x|

// Compute distance of y from z:

// dis2 = |z - y|
// Compare:
// If dis1 < dis2 → return 1 (x is closer)
// If dis1 > dis2 → return 2 (y is closer)
// Else → return 0 (both are equally close)

// Complexity
// Time complexity:
// O(1)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dis1=abs(z-x);
        int dis2=abs(z-y);

        if(dis1<dis2){
            return 1;
        }else if(dis1>dis2){
            return 2;
        }else{
            return 0;
        }
    }
};