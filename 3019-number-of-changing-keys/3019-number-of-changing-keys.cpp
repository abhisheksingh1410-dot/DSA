class Solution {
public:
    int countKeyChanges(string s) {
        for (char &c:s){
            c=toupper(c);

        }
        int count=0;
        int first=0;
        int second =1;
        while(second<s.length()){
            if(s[first]==s[second]){
                second++;
                first++;
            }else{
                count++;
                first++;
                second++;

            }
            

        }
        return count;
    }
};