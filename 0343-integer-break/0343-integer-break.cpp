class Solution {
    private:
    int solve(int i, int sum , long long mul , int n){
        if(sum == n) return mul;

        if(i >= n || sum > n) return INT_MIN;

        return max(solve(i,sum+i,mul*i,n),solve(i+1,sum,mul,n));
    }
public:
    int integerBreak(int n) {
        long long mul = 1;
        return solve(1,0,mul,n);
    }
};