class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ans=0;
        int n=s.size();
        for(auto ch:s){
            if(ch==letter){
                ans++;
            }
            
        }
        return (ans*100)/n;
        
    }
};