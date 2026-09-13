class Solution {
public:
    int Fin(int n,vector<int>&DP){
        if(n==0)return 0;
        if(n==1) return 1;
        if(DP[n]!=-1) return DP[n];
        return DP[n] = Fin(n-1,DP) + Fin(n-2,DP);

    }
    int fib(int n) {
        vector<int>DP(n+1,-1);
        return Fin(n,DP);
    }
};