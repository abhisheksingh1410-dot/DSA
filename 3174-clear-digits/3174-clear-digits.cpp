class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(auto ch: s){
            if( isalpha(ch)){
                st.push(ch);
            }else{
                st.pop();
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
       return ans; 
    }
};