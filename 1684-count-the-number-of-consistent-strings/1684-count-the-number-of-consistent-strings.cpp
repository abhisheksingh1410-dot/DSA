class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_set<char> s(allowed.begin(), allowed.end());

        for (int i = 0; i < words.size(); i++) {
            int j;
            for (j = 0; j < words[i].size(); j++) {
                if (s.find(words[i][j] )== s.end()) {
                    break;
                }
                
                }
                if (j ==words[i].size()){
                    count++;
            }
        }
        return count;
    }
};