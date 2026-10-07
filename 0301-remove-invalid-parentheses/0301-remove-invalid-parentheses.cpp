class Solution {
public:
    vector<string> ans;

    void solve(string s, int start, int last, char open, char close) {
        int balance = 0;

        for (int i = start; i < s.length(); i++) {

            if (s[i] == open)
                balance++;
            else if (s[i] == close)
                balance--;

            // Invalid closing bracket mil gaya
            if (balance < 0) {

                for (int j = last; j <= i; j++) {

                    // Duplicate removal avoid
                    if (s[j] == close && 
                        (j == last || s[j - 1] != close)) {

                        string temp = s.substr(0, j) + s.substr(j + 1);

                        solve(temp, i, j, open, close);
                    }
                }

                return;
            }
        }

        // Forward direction valid hai
        string reversed = s;
        reverse(reversed.begin(), reversed.end());

        if (open == '(') {
            // Ab extra '(' check karenge
            solve(reversed, 0, 0, ')', '(');
        } 
        else {
            // Dono directions valid => answer
            ans.push_back(reversed);
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        solve(s, 0, 0, '(', ')');

        return ans;
    }
};