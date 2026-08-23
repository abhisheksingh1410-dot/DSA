class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        int sum=0;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            ans.push_back(sum);
        }


        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];

    }
};