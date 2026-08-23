class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for (auto x : arr){
            freq[x]++;

        }
        int maxvalue=-1;
        for (int i=0;i<arr.size();i++){
            if (freq[arr[i]]==arr[i]){
                maxvalue =max(arr[i],maxvalue);
            }
        }
        
        return maxvalue;
    }
};