// Intuition
// We need to iterate through numbers from 1 to n and add those numbers that are divisible by 3, 5, or 7.

// Approach
// Initialize sum = 0
// Traverse from 1 to n
// For each number:
// If divisible by 3, add it to sum
// Else if divisible by 5, add it
// Else if divisible by 7, add it
// Return the final sum

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0){
                sum=sum+i;
            }else if(i%5==0){
                sum+=i;
            }else if(i%7==0){
                sum+=i;
            }
        }
        return sum;
    }
};