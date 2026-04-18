// Intuition
// We need to:

// Add numbers not divisible by m → s1
// Add numbers divisible by m → s2
// Return:
// s1 - s2

// Approach
// Create a vector containing numbers from 1 to n
// Traverse the vector:
// If element is not divisible by m → add to s1
// Else → add to s2
// Compute:
// answer = s1 - s2

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int s1=0,s2=0;
        vector<int> num;
        int ans;
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        for(int i=0;i<n;i++){
            if(num[i]%m!=0){
                s1+=num[i];
            }else{
                s2+=num[i];
            }
        }
        ans=s1-s2;
        return ans;
    }
};