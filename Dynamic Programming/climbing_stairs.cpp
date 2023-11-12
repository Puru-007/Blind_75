#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
const int FAST__ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int dp[46] = { 0 };
    int climbStairs(int n) {
        if(dp[n] != 0){
            return dp[n];
        }
        if(n == 1) {
            dp[1] = 1;
            return 1;
        }
        if(n == 2) {
            dp[2] = 2;
            return 2;
        }
        dp[n] = climbStairs(n-1) + climbStairs(n-2);
        return dp[n];
    }
};