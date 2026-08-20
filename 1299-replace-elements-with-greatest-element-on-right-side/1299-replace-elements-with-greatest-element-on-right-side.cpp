class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        int maxi = -1;

        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];   // original value save karo
            arr[i] = maxi;       // current element replace karo
            maxi = max(maxi, temp);
        }

        return arr;
    }
};