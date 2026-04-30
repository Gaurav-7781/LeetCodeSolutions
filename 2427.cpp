// Intuition
// We need to count how many numbers divide both a and b.

// 👉 A number is a common factor if:

// a % i == 0 AND b % i == 0

// Approach
// Initialize count = 0
// Loop from 1 to 1000
// For each i:
// Check if i divides both a and b
// If yes → increment count
// Return count

// Complexity
// Time complexity:
// O(1)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int commonFactors(int a, int b) {
        int count=0;
        for(int i=1;i<=1000;i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        return count;
    }
};