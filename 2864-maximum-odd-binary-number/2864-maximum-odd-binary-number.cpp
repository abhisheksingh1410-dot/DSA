class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(), s.end());

        // Ascending: 00011
        // Last 1 ko end par rehne do,
        // baaki largest 1s ko front mein arrange karo.
        
        int ones = 0;

        for (char c : s) {
            if (c == '1')
                ones++;
        }

        string ans(ones - 1, '1');
        ans += string(s.size() - ones, '0');
        ans += '1';

        return ans;
    }
};