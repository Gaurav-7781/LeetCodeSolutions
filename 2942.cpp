// Search Words for Character and Return Indices

// Intuition
// We are given a list of words and a character x.
// We need to find all indices of words that contain the character x.

// So the idea is simple:

// For each word, check if x exists in it
// If yes, store its index

// Approach
// Create an empty vector id to store indices.
// Traverse the words array using a loop.
// For each word:
// Use find(x) to check if the character exists.
// If find() does not return string::npos, it means the character is present.
// Add the index to the result vector.
// Return the result vector.

// Complexity
// Time complexity:
// O(n×m)

// Space complexity:
// O(k)

// Code
// class Solution {
// public:
//     vector<int> findWordsContaining(vector<string>& words, char x) {
//         vector<int> id;
//         int n=words.size();
//         for(int i=0;i<n;i++){
//             if(words[i].find(x)!=string::npos){
//                 id.push_back(i);
//             }
//         }
//         return id;
//     }
// };