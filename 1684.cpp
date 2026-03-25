// Count Consistent Strings Using Allowed Character Check


// Intuition
// A string is considered consistent if all its characters are present in the allowed string.
// So for each word, we need to check whether every character belongs to the allowed set.
// If even one character is not allowed, the word becomes invalid.

// Approach
// A string is considered consistent if all its characters are present in the allowed string.
// So for each word, we need to check whether every character belongs to the allowed set.
// If even one character is not allowed, the word becomes invalid.

// Complexity
// Time complexity:
// O(n×m)

// Space complexity:
// O(1)

// Code


// class Solution {
// public:
//     int countConsistentStrings(string allowed, vector<string>& words) {
//         int n=words.size();
//         int count=0;

//         for(string word : words){
//             bool isValid=true;
//             for(char ch : word){
//                 if(allowed.find(ch)==string::npos){
//                     isValid=false;
//                     break;
//                 }
//             }
//             if(isValid){
//                 count++;
//             }
//         }
//         return count;
        
//     }
// };