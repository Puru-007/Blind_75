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
    int maxProfit(vector<int>& prices) {
        int N = prices.size();
        int low[N];
        int high[N];
        int maxProfit = INT_MIN;

        low[0] = prices[0];
        high[N-1] = prices[N-1];

        for(int i=1; i<N; i++){
            low[i] = min(prices[i], low[i-1]);
        }

        for(int i=N-2; i>=0; i--){
            high[i] = max(prices[i], high[i+1]);
        }

        for(int i=0; i<N; i++){
            maxProfit = max(maxProfit, high[i] - low[i]);
        }

        return maxProfit;
    }
};


//Create 2 arrays, low and hight
// Low will iterate form left with min values
// Hight from right to get max values
// The max diff between low and hight at i is the max profit
