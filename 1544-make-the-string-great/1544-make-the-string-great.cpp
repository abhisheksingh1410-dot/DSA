class Solution {
public:
    string makeGood(string s) {
        string s1;
        stack<char> st;
        for (auto ch : s) {
            if (!st.empty() &&
                (abs(st.top() - ch) == 32)) {
                st.pop();
                
               
            }else{
                 st.push(ch);

            }
           
             
        }
        while (!st.empty()) {
            s1 += st.top();
            st.pop();
        }
           reverse(s1.begin(), s1.end());

        return s1;
    }
};