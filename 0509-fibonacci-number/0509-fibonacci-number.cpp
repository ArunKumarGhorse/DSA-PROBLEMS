class Solution {
public:
    int Fib(int n,vector<int>&dp){
        if(n==1) return 1;
        if(n==0) return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n] = Fib(n-1,dp) + Fib(n-2,dp);
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return Fib(n,dp);
    }
};