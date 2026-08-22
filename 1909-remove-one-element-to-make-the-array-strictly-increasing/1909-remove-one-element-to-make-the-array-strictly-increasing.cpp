class Solution {
public:
    bool check(vector<int>& nums, int skip) {
        int prev = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (i == skip) continue;

            if (nums[i] <= prev) {
                return false;
            }

            prev = nums[i];
        }

        return true;
    }

    bool canBeIncreasing(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] <= nums[i - 1]) {

                
                return check(nums, i - 1) || check(nums, i);
            }
        }

        return true;
    }
};