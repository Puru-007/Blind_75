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
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        long long int product = 1;
        int flag = 1;
        int zeroCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                flag = 0;
                zeroCount += 1;
                continue;
            }
            else{
                product *= nums[i];
            }
            
        }
        if(zeroCount > 1){
            vector <int> zeroVec(nums.size(), 0);
            return zeroVec;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                res.push_back(product);
            }
            else{
                if(!flag){
                    res.push_back(0);
                }
                else{
                    res.push_back(product/nums[i]);
                }
            }
        }
        return res;
    }
};