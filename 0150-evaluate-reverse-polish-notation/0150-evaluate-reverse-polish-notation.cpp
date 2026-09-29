class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto ch : tokens) {
            if (ch == "+") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y + x);

            } else if (ch == "-") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y - x);

            } else if (ch == "*") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y * x);

            } else if (ch == "/") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y / x);

            } else {
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};