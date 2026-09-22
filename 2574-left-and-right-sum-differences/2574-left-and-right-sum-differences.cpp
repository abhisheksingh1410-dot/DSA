class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = 0; j < i; j++) {
                sum += nums[j];
            }
            leftsum.push_back(sum);
        }
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i + 1; j < nums.size(); j++) {
                sum += nums[j];
            }
            rightsum.push_back(sum);
        }
        for (int i = 0; i < nums.size(); i++) {
            answer.push_back(abs(leftsum[i] - rightsum[i]));
        }
        return answer;
    }
};