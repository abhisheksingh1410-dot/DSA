class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        
        int i = nums.size()-1;
        int opt1= ((nums[i]) * (nums[i - 1]) * (nums[i - 2]));
        int opt2= ((nums[0]) * (nums[1]) * (nums[i]));

        
        
        return max(opt1,opt2);


    }
};