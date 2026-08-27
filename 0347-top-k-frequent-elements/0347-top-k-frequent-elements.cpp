class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair< int, int>> ans;
        unordered_map<int, int> freq;
        for (auto x : nums) {
            freq[x]++;
        }
        for (auto x : freq) {
            ans.push_back({x.second, x.first});
        }
        sort(ans.rbegin(), ans.rend());
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(ans[i].second);
        }

            

     return result;
    }
};