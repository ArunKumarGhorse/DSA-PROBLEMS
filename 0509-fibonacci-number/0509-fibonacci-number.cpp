class Solution {
public:
    int Fin(int n){
        if(n==0)return 0;
        if(n==1) return 1;

        return Fin(n-1) + Fin(n-2);

    }
    int fib(int n) {
        return Fin(n);
    }
};