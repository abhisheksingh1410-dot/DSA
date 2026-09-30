// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         string ans;
//         int depth = 0;
//         for (char ch : s) {
//             if (ch == '(') {
//                 if (depth > 0) {
//                     ans += ch;
//                 }
//                 depth++;
//             } else {
//                 depth--;
//                 if (depth > 0) {
//                     ans += ch;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;

        for(char ch : s) {

            if(ch == '(') {
                if(!st.empty()) {
                    ans += ch;
                }

                st.push(ch);
            }
            else {
                st.pop();

                if(!st.empty()) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};