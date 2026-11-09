class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        sort(nums.rbegin(), nums.rend());

        set<int, greater<int>> st;

        for(auto x : nums) {
            st.insert(x);
        }

        for(auto x : st) {
            if(k == 0) break;

            ans.push_back(x);
            k--;
        }

        return ans;
    }
};