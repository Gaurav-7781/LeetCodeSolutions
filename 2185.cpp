// Intuition
// We need to count how many words in the array start with a given prefix.
// For each word, we simply check if its beginning matches the prefix.

// Approach
// Initialize a counter count = 0
// Traverse each word in the array:
// Check if the word starts with pref
// If yes → increment count
// Return the final count

// Complexity
// Time complexity:
// O(n⋅m)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;

        for(int i=0;i<words.size();i++){
            if(words[i].starts_with(pref)){
                count++;
            }
        }
        return count;
    }
};