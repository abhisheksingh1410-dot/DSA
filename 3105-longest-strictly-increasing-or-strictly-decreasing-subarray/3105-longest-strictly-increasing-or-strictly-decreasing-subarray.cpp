class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mx = 1;
        int count = 1, count2 = 1;

        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] < nums[i + 1]) {
                count++;
            }
            else {
                count = 1;
            }

            if (nums[i] > nums[i + 1]) {
                count2++;
            }
            else {
                count2 = 1;
            }

            mx = max(mx, max(count, count2));
        }

        return mx;
    }
};