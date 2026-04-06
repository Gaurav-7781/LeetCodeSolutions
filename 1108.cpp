// Intuition
// We need to replace every "." in the IP address with "[.]".
// This is a simple transformation problem where we process each character and build a new string.

// Approach
// Initialize an empty string res.
// Traverse each character in the given string:
// If the character is '.', append "[.]" to res.
// Otherwise, append the character itself.
// Return the final string.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";
        for(char ch : address){
            if(ch == '.'){
                res +="[.]";
            }else{
                res +=ch;
            }
        }
        return res;
    }
};