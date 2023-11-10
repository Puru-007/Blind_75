class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int start = 0;
      int end = nums.size()-1;
      unordered_map<int, int> indexMap1;
      unordered_map<int, int> indexMap2;
      for(int i=0; i<nums.size(); i++){
          indexMap1[nums[i]] = i;
      }
      for(int i=nums.size()-1; i>=0; i--){
          indexMap2[nums[i]] = i;
      }
      sort(nums.begin(), nums.end());
      vector <int> res;
        while(start < end){
          if(nums[start] + nums[end] > target) {
            end--;
          }
          else if (nums[start] + nums[end] < target){
            start++;
          }
          else{
            res.push_back(indexMap2[nums[start]]);
            res.push_back(indexMap1[nums[end]]);
            break;
          }
        }
        return res;
    }
};