// Intuition
// Each array of strings represents a single combined string.
// So instead of comparing arrays element by element, we can:

// Concatenate all strings in word1
// Concatenate all strings in word2
// Compare the final strings

// Approach
// Create two empty strings w and q.
// Traverse word1 and concatenate all its elements into w.
// Traverse word2 and concatenate all its elements into q.
// Compare w and q:
// If equal → return true
// Else → return false

// Complexity
// Time complexity:
// O(n+m)

// Space complexity:
// O(n+m)

// Code
// class Solution {
// public:
//     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//         string w,q;
//         for(int i=0;i<word1.size();i++){
//             w=w+word1[i];
//         }
//         for(int j=0;j<word2.size();j++){
//             q=q+word2[j];
//         }
//         if(w==q){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };