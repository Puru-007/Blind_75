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
    bool canJump(vector<int>& nums) {
        int reachable = 0;
        int N = nums.size();
        if(N == 1){
            return true;
        }
        if(nums[0] == 0){
            return false;
        }
        for(int i=0; i<N; i++){
            if(i > reachable){
                return false;
            }
            reachable = max(nums[i]+i, reachable);
        }
        return true;
    }
};

    // int dpRec(vector<int>& nums, int dp[], int N, long long int i){
    //     if(i >= N){
    //         return 0;
    //     }
    //     if(i == N-1){
    //         dp[i] = 1;
    //         return dp[i];
    //     }
    //     if(dp[i] == 1){
    //         return dp[i];
    //     }

    //     for(int j=1; j<=nums[i]; j++){
    //         dp[i] = dpRec(nums, dp, N, i+j);
    //         // if(i + j == N-1){
    //         //     dp[i] = dp[j + dpRec(nums, dp, N, i+j)];
    //         // }
    //     }
    //     // if(!flag){
    //     //     return -1;
    //     // }
    //     return 0;
    // }

    // bool canJump(vector<int>& nums) {
    //     int N = nums.size();
    //     if(N == 1){
    //         return true;
    //     }
    //     if(nums[0] == 0){
    //         return false;
    //     }
    //     int zeroFlag = 0;
    //     for(int i=0; i<N; i++){
    //         if(nums[i] == 0){
    //             zeroFlag = 1;
    //         }
    //     }
    //     if(!zeroFlag){
    //         return true;
    //     }
    //     int dp[100000] = {0};
    //     // dpRec(nums, dp, N, 0);
    //     if(dpRec(nums, dp, N, 0) == 1){
    //         return true;
    //     }
    //     // for(int i=0; i<N; i++){
    //     //     cout<<dp[i]<<" ";
    //     // }
    //     for(int i=0; i<=nums[0]; i++){
    //         if(dp[i] == 1){
    //             return true;
    //         }
    //     }

    //     return false;
    // }