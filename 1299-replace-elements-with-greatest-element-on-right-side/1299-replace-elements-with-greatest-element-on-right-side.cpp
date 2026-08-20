class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
       int n=arr.size();
       int result=0;
       for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>result){
                result=arr[j];
            }
            
        }
        ans.push_back(result);
        result=0;
        
       }
       ans.push_back(-1);
       return ans;

        
    }
};