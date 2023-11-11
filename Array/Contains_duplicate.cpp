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
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       for(int i=1; i<nums.size(); i++){
           if(nums[i] == nums[i-1]){
               return true;
           }
       } 
       return false;
    }
};