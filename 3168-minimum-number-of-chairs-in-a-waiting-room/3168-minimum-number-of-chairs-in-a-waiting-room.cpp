class Solution {
public:
    int minimumChairs(string s) {
        int count=0;
        int ans=0;
        for(auto ch:s){
            if(ch=='E'){
                count++;
                ans=max(ans,count);
            }else if(ch=='L'){
                count--;
            }
        }
      return ans;  
    }
};