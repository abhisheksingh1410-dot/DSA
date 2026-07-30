class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>count(nums.size(),0);
        vector<int>ans;
        for(int i=0; i<nums.size();i++){
            nums[i]--;
            count[nums[i]]++;



        }
        for (int i=0; i<count.size();i++){
            if (count[i]==0){
                ans.push_back(i+1);

            }

        }
      return ans;  
    }
};