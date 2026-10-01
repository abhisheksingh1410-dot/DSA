class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        int count = 0;

        stringstream ss(text);
        string word;

        while (ss >> word) {

            bool valid = true;

            for (char ch : word) {

                if (brokenLetters.find(ch)!=string::npos){
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        }

        return count;
    }
};