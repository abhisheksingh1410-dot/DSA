class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        
        int x=nums1.size()+nums2.size();
        if(x%2!=0){
            return ans[x/2];
            
        }else{
            return (ans[x/2]+ans[x/2-1])/2.0;
        }

       
        
    }
};