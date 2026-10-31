class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int n = garbage.size();

       
        vector<int> prefix(n, 0);

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + travel[i-1];
        }

        
        int count = 0;

        for(int i = 0; i < n; i++) {
            count += garbage[i].size();
        }

       
        for(char ch : {'M', 'P', 'G'}) {

            int last = 0;

            for(int i = n-1; i >= 0; i--) {

                if(garbage[i].find(ch) != string::npos) {
                    last = i;
                    break;
                }
            }

            count += prefix[last];
        }

        return count;
    }
};