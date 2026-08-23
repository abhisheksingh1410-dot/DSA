class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency
        for (auto x : arr) {
            freq[x]++;
        }

        set<int> s;

        // Check if frequency already exists
        for (auto x : freq) {
            if (s.count(x.second)) {
                return false;
            }

            s.insert(x.second);
        }

        return true;
    }
};