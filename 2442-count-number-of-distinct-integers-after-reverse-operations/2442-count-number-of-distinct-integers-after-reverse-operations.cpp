class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans;
        for (auto x : nums) {
            ans.push_back(x);
        }
        int n=ans.size();
        for (int i = 0; i <n; i++) {
            int rev = 0;

            while (nums[i] > 0) {

                int digit = (nums[i] % 10);
                rev = rev * 10 + digit;
                nums[i] = nums[i] / 10;
            }
            ans.push_back(rev);
        }
        set<int> st;
        for (auto z : ans) {
            st.insert(z);
        }
        return st.size();
    }
};