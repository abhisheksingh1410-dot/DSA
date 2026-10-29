class Solution {
public:
int solution(int n,vector<int>&dp){
     if(n==0||n==1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return solution(n-1,dp)+solution(n-2,dp);

}
      
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return solution(n,dp);
       
    }
};