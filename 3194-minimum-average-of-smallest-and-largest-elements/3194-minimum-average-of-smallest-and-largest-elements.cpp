class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float> avg;
        sort(nums.begin(), nums.end());
        float avrg = 0.0;

        for (int i = 0; i < nums.size()/2; i++) {
            avrg =( nums[i] + nums[nums.size() - (i + 1)])/2.0;
            avg.push_back(avrg);

            
        }
        sort(avg.begin(), avg.end());
        return avg[0];
    }
};