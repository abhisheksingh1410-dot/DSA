class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }
        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(),[] (auto& a, auto  &b){
            return a.second > b.second;
        });
        
        
        string s1;
        for(auto x:v){
            for(int i=0;i<x.second;i++){
                s1+=x.first;
            }
        }
        return s1;

    }
};