// Intuition
// We reverse the number twice and check whether we get back the original number.
// If reversing twice gives the same number, return true, otherwise false.

// Approach
// Store original number (original = num)
// Reverse the number → rev1
// Reverse rev1 again → rev2
// Compare:
// If rev2 == original → return true
// Else → return false

// Complexity
// Time complexity:
// O(log n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1=0;
        int rev2=0;
        int original=num;

        while(num!=0){
            int digit=num%10;
            rev1=rev1*10 + digit;
            num=num/10;
        }
        while(rev1!=0){
            int digit=rev1%10;
            rev2=rev2*10 + digit;
            rev1=rev1/10;
        }
        if(original==rev2){
            return true;
        }else{
            return false;
        }

    }
};