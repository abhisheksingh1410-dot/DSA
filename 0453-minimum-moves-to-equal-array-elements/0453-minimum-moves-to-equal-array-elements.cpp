class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target=nums[0];
        int moves=0;
        for(int i=0;i<nums.size();i++){
            moves+=abs(nums[i]-target);

        }
        return moves;
        
        
    }
};