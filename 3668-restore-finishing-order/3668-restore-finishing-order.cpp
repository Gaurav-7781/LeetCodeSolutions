class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        int k=friends.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(order[i]==friends[j]){
                    result.push_back(order[i]);
                    break;
                }
            }
        }
        return result;
    }
};