class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        int N = coins.size();
        int arr[10000][1000];

        for(int i=0; i<=N; i++){
            arr[0][i] = 0;
        }
        for(int i=0; i<=amount; i++){
            arr[i][0] = 0;
        }
        if(N == 1){
            if(amount % coins[0] != 0)  return -1;
        }
        for(int j=1; j<=N; j++){
            for(int i=1; i<=amount; i++){
                if(i < coins[j-1]){
                    arr[i][j] = arr[i][j-1];
                }
                else{
                    if(j != 1){
                        arr[i][j] = min(arr[i][j-1], 1 + arr[i-coins[j-1]][j]);
                    }
                    else{
                        arr[i][j] = 1 + arr[i-coins[j-1]][j];
                    }
                }
            }
        }
        return arr[amount][N];

    }
};