class Solution {
public:
    string removeDuplicates(string s) {
        // string st;
        // for (char c:s){
        //     if (!st.empty()&&st.back()==c){
        //         st.pop_back();
        //     }
        //     else{
        //         st.push_back(c);
        //     }

        // }
        
        // return st;
        stack<char>st;
        string s1;
        for(auto ch:s){
            if(st.empty()||st.top()!=ch){
                st.push(ch);
            }else{
                st.pop();
            }
        }
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};