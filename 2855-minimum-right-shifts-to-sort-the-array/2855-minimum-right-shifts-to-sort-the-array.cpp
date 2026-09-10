class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int breakIdx=-1;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                if(breakIdx!=-1){
                    return -1;
                }
                breakIdx=i;
            }
        }
        if (breakIdx==-1){
            return 0;
        }
        if (nums[n-1]>nums[0]){
            return -1;
        }
        return n-breakIdx-1;
        
    }
};