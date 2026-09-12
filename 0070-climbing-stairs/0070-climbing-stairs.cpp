class Solution {
public:
    int Helper(int n,vector<int>&DP){
        if(n==1){
            return 1;
        }else if(n==2){
            return 2;
        }
        if(DP[n]!=-1){
            return DP[n];
        }
        return DP[n]=(Helper(n-2,DP)+Helper(n-1,DP));
    }
    int climbStairs(int n) {
        vector<int>DP(n+1,-1);
        return Helper(n,DP);
    }
};