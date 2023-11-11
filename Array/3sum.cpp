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
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        unordered_map <int, int> mp;
        int N = nums.size();
        if(nums.size() < 3){                
            return {};
        }
        if(nums[0] > 0){                    
            return {};
        }
        for(int i=0; i<N; i++){
            mp[nums[i]] = i;
        }
        vector<vector<int>> res;
        for(int i=0; i<N-2; i++){
            if(nums[i] > 0){
                break;
            }
            for(int j=i+1; j<N-1; j++){
                int add = nums[i] + nums[j];
                add *= -1;
                if(mp.count(add) && mp.find(add)->second > j){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(add);
                    res.push_back(temp);
                }
                j = mp.find(nums[j])->second;
            }
            i = mp.find(nums[i])->second;
        }
        return res;
    }
};