// Intuition
// The array is sorted, but it may contain negative numbers.
// After squaring:

// Negative numbers become positive
// Order may break

// So we:

// Separate negative and positive parts
// Square them
// Merge like two sorted arrays

// Approach
// Traverse the array:
// Store negative numbers in neg
// Store non-negative numbers in pos
// Square both arrays:
// Reverse neg after squaring (because larger negatives become smaller after square)
// Merge both sorted arrays (neg and pos) into a result array
// Return the merged result

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

// Code
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        if(neg.size()==0){   
            //square positive numers
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i] * pos[i];
            }
            return pos;
        }
        if(pos.size()==0){
            //squaring negtive numbers
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i] * neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        int i=0,j=0;
        int id=0;
        int n=neg.size();
        int m=pos.size();
        vector<int> res(n+m);

        for(int i=0;i<n;i++){
            neg[i]=neg[i] * neg[i];
        }
        reverse(neg.begin(),neg.end());
        for(int i=0;i<m;i++){
            pos[i]=pos[i] * pos[i];
        }
        while(i<n and j<m){
            if(neg[i]<=pos[j]){
                res[id]=neg[i];
                id++;
                i++;
            }else{
                res[id]=pos[j];
                id++;
                j++;
            }
        }
        while(i<n){
            res[id]=neg[i];
            id++;
            i++;
        }
        while(j<m){
            res[id]=pos[j];
            id++;
            j++;
        }
        return res;
    }
};