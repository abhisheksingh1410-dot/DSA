class Solution {
public:
    int minCost(int n) {
        int sum=0;
        while(n>1){
            int a=1;
            int b=n-1;
            sum+=a*b;
            n=a*b;
        }
       return sum;
    }
};