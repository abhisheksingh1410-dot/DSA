class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            for(int j=1;j<tasks[i].size();j++){
                ans=min(ans,(tasks[i][j]+tasks[i][j-1]));
            }
        }
        return ans;
    }
};