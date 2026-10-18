class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
       int ans1=0;
       int ans2=0;
        for(auto x:mp){
            if(x.first=='a'||x.first=='o'||x.first=='e'||x.first=='i'||x.first=='u'){
                ans1=max(ans1,x.second);

            }else{
                ans2=max(ans2,x.second);

            }
        }
        int sum =ans1+ans2;
        return sum;
    }
};