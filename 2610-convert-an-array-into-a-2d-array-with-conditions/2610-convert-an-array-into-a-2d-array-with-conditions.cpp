class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> freq(201, 0);
        for (auto x : nums) {
            freq[x]++;
        }
        for (auto x : nums) {
            int row = freq[x] - 1;

            while(ans.size() <= row) {
                ans.push_back({});
            }
            ans[row].push_back(x);

            freq[x]--;
        }

        return ans;
    }
};