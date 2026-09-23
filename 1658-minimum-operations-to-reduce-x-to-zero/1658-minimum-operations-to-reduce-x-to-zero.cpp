class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // vector<int> ans;
        // for (int i = 0; i < nums.size(); i++) {
        //     ans.push_back(nums[i]);
        // }
        // int count = 0;
        // int n = ans.size();
        // while (x != 0) {
        //     n = ans.size();
        //     if (nums[0] > nums[n - 1] && nums[0] <= x) {
        //         x = x - ans[0];
        //         ans.erase(ans.begin());
        //         count++;
        //     } else if (ans[n - 1] <= x) {
        //         x = x - ans[n - 1];
        //         ans.pop_back();
        //         count++;
        //     } else {
        //         return -1;
        //     }
        // }
        // if (x!=0){
        //     return -1;
        // }
        // return count;
        int totalsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalsum += nums[i];
        }
        int target = totalsum - x;
        if (totalsum == 0) {
            return nums.size();
        }
        int left = 0;
        int maxlen = -1;
        int sum = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum > target && left <= right) {
                sum -= nums[left];
                left++;
            }
            if (sum == target) {
                int len = right - left + 1;
                maxlen = max(maxlen, len);
            }
        }
        if (maxlen == -1) {
            return -1;
        }

        return nums.size() - maxlen;
    }
};