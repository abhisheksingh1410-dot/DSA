class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        sort(nums.begin(), nums.end());

        int sum = accumulate(nums.begin(), nums.end(), 0);
         int n = nums.size();
        int totalsum = ((n+1)*n)/2;
       
       

        for (auto ch : nums) {
            mp[ch]++;
        }
        for (auto x : mp) {
            if (x.second == 2) {
                ans.push_back(x.first);
            }
        }
        ans.push_back(totalsum - sum + ans[0]);
        return ans;
    }
};