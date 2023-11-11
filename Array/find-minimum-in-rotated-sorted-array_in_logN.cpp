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
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low=0, high=n-1;
        
        while(low<high){
            if(nums[low] <= nums[high]) return nums[low];
            int mid = low + (high-low)/2;
            if(nums[low] > nums[mid]){
                high=mid;
            } else if(nums[mid] > nums[high]) {
                low=mid+1;
            } 
        }
        if(nums[low] <= nums[high]) return nums[low];
        return -1;
    }
};