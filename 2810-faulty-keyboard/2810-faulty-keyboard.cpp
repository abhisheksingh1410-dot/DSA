class Solution {
public:
    string finalString(string s) {
        string s1;
        for(auto ch: s){
            if(ch=='i'){
                reverse(s1.begin(),s1.end());
                continue;
            }
            s1+=ch;
        }

      return s1;  
    }
};