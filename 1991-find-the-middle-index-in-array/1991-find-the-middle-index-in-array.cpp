class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        int n = nums.size();

        for (int middleindex = 0; middleindex < n; middleindex++) {

            int sum1 = 0;
            int sum2 = 0;

            for (int i = 0; i < middleindex; i++) {
                sum1 += nums[i];
            }

            for (int j = middleindex + 1; j < n; j++) {
                sum2 += nums[j];
            }

            if (sum1 == sum2) {
                return middleindex;
            }
        }

        return -1;
    }
};