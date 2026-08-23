class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        int digit;
        for(int i=0;i<details.size();i++){
            digit=10*(details[i][11]-'0')+(details[i][12]-'0');
            if(digit>60){
                count++;
            }
           


        }
        return count;
        
       
        
    }
};