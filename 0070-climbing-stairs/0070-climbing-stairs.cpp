class Solution {
public:
    int WayCounter(int n,vector<int>&DP){
        if(n==2) return 2;
        if(n==1) return 1;

        if(DP[n]!=-1) return DP[n];

        return DP[n]=WayCounter(n-1,DP)+WayCounter(n-2,DP);
    }
    int climbStairs(int n) {
        vector<int>DP(n+1,-1);
        return WayCounter(n,DP);
    }
};