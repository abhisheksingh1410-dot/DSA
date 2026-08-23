class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int product1=nums[nums.size()-1]*nums[nums.size()-2];
        int product2=nums[0]*nums[1];

        int diff=product1-product2;
        return diff;
    }
};