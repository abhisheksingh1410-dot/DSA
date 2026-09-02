class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        int n=nums.size();
        for(auto x:nums){
            freq[x]++;

        }
        
        for(auto y:freq){
            if(y.second>n/3){
                ans.push_back(y.first);
            }
           
            
        
        }
       return ans;   
    }
};