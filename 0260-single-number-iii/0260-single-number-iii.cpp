class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;

        for (auto x:nums){
            freq[x]++;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==1){
                ans.push_back(nums[i]);
            }
        }

       return ans; 
    }
};