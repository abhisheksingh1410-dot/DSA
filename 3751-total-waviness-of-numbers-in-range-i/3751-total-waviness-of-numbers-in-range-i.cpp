class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int n=num1;n<=num2;n++){
            string s=to_string(n);
            for(int i=1;i<s.length()-1;i++){
                if((s[i-1]<s[i]&&s[i]>s[i+1])||(s[i-1]>s[i]&&s[i]<s[i+1])){
                    count++;
                }
            }
        }
        return count;
    }
};