class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(nums[i]-0));
        }
        sort(ans.rbegin(),ans.rend());
        long long score=0;
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(i==j){
                score+=ans[i]*ans[i];
            }
            score+=ans[i]*ans[i];
            score-=ans[j]*ans[j];
            i++;
            j--;
        }

        
     return score;

    }
};