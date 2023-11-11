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
    int maxSubArray(vector<int>& nums) {
      int localSum = 0;
      int globalMax = INT_MIN;
      int start = 0;
      for(int i=0; i<nums.size(); i++){
        localSum += nums[i];
        globalMax = max(globalMax, localSum);

        if(localSum < 0){
            localSum = 0;
        }
      }  
      return globalMax;
    }
};