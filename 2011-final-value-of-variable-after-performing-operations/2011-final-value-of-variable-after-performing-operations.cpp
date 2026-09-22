class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if (operations[i][1]=='+'){
                count++;
            }else if (operations[i][1]=='-'){
                count--;
            }

        }
       return count; 
    }
};