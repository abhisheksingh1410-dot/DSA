class Solution {
public:
    vector<string> ans;
    int n;

    void solve(string s, int open, int close) {

        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // '(' add karo
        if (open < n) {
            solve(s + "(", open + 1, close);
        }

        // ')' add karo
        if (close < open) {
            solve(s + ")", open, close + 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        this->n = n;

        solve("", 0, 0);

        return ans;
    }
};