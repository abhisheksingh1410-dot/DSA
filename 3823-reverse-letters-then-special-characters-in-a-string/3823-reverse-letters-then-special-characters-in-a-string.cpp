class Solution {
public:
    string reverseByType(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            
            if (!isalpha(s[i])) {
                i++;
                continue;
            }

            
            if (!isalpha(s[j])) {
                j--;
                continue;
            }

            
            swap(s[i], s[j]);
            i++;
            j--;
        }

       
        i = 0;
        j = s.size() - 1;

        while (i < j) {

            
            if (isalpha(s[i])) {
                i++;
                continue;
            }

            
            if (isalpha(s[j])) {
                j--;
                continue;
            }

            
            swap(s[i], s[j]);
            i++;
            j--;
        }

        return s;
    }
};