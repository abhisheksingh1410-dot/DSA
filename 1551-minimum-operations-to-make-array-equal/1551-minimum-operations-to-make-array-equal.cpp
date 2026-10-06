class Solution {
public:
    int minOperations(int n) {
        // vector<int> arr(n, 0);
        // for (int i = 0; i < n; i++) {
        //     arr[i] = (2 * i) + 1;
        // }
        // int sum = accumulate(arr.begin(), arr.end(),0);
        // int target = sum / n;
        // int i = 0;
        // int j = n - 1;
        // int count = 0;
        // while (i < j) {
        //     if (arr[i] < target) {
        //         arr[i] += 1;
        //         arr[j] -= 1;
        //         count++;
        //     } else {
        //         i++;
        //         j--;
        //     }
        // }

        // return count;


        //TLE HO JAYEGA!!;
        return (n*n)/4;
    }
};