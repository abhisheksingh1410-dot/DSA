class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int first=0;
        int second=n;
        while(first!=n){
         ans.push_back(nums[first]);
         ans.push_back(nums[second]);
         first++;
         second++;
        }
        return ans;
    }
};