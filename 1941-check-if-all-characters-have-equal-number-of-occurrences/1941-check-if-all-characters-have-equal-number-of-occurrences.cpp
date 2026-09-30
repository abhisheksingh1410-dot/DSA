class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }
        set<int> st;
        for (auto x : mp) {
            st.insert(x.second);
        }

        if (st.size() == 1) {
            return true;
        }

        return false;
    }
};