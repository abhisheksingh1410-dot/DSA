class Solution {
public:
    string sortVowels(string s) {

        vector<char> arr;
        for (auto ch : s) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                arr.push_back(ch);
            } else {
                continue;
            }
        }
        sort(arr.begin(), arr.end());
        int j = 0;
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                s[i] = arr[j];
                j++;
            }
        }
        return s;
    }
};