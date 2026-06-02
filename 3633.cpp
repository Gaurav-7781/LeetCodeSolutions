class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans=INT_MAX;

        for(int i=0;i<landStartTime.size();i++){
            for(int j=0;j<waterStartTime.size();j++){

                int lr=landStartTime[i] + landDuration[i];
                int finish1= max(lr,waterStartTime[j]) + waterDuration[j];

                int wr=waterStartTime[j] + waterDuration[j];
                int finish2 = max(wr,landStartTime[i]) + landDuration[i];

                ans=min(ans,min(finish1,finish2));
            }
        }
        return ans;

    }
};