class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int balance = 0;
        string s1 = "";
        for (char ch : s) {
            if (ch == '(') {
                balance++;
            } else if (ch == ')') {
                if (balance == 0) {
                    continue;
                }
                balance--;
            }
            s1 += ch;
        }
        string ans = "";
        for (int i = s1.size() - 1; i >= 0; i--) {
            if (s1[i] == '(' && balance > 0) {
                balance--;
                continue;
            }
            ans += s1[i];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};