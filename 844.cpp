// Intuition
// The character '#' acts like a backspace, removing the previous character.
// Instead of actually building the final string, we can simulate this process efficiently by traversing from the end and skipping deleted characters.

// Approach
// Use two pointers:
// k → end of string s
// j → end of string t
// Maintain two counters:
// skip for string s
// skipT for string t
// For each string:
// If current char is '#' → increase skip
// If skip > 0 → skip current character
// Else → this is a valid character
// Compare valid characters from both strings:
// If mismatch → return false
// If one ends earlier → return false
// Continue until both pointers finish
// If all matched → return true

// Complexity
// Time complexity:
// O(n+m)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k=s.length() -1;
        int j=t.length() -1;

        int skip=0;
        int skipT =0;

        while(k>=0 || j>=0){

            while(k>=0){

                if(s[k] == '#'){
                    skip++;
                    k--;
                }else if(skip>0){
                    skip--;
                    k--;
                }else{
                    break;
                }
            }

            while(j>=0){

                if(t[j] == '#'){
                    skipT++;
                    j--;
                }else if(skipT>0){
                    skipT--;
                    j--;
                }else{
                    break;
                }
            }

            if(k>=0 && j>=0){
                if(s[k] != t[j]){
                    return false;
                }
            }else{
                if(k>=0 || j>=0){
                    return false;
                }
            }
            k--;
            j--;
        }
        return true;

    }
};