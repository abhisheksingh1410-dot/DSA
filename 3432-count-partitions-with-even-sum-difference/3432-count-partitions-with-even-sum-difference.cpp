class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int count=0;
        for (int i = 0; i < nums.size()-1; i++) {
            int leftsum = 0;
            int rightsum = 0;
            for (int j = 0; j <= i; j++) {

                leftsum += nums[j];
            }
            for (int j = i+1 ; j < nums.size(); j++) {
                rightsum += nums[j];
            }
            if (abs(leftsum - rightsum) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};