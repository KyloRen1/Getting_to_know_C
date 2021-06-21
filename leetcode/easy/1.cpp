#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> my_map = {};
        vector<int> ans;
        for (int i=0; i< nums.size(); i++){
            int diff = target - nums[i];
            if (my_map.find(diff) != my_map.end()){
                auto itr = my_map.find(diff);
                ans.push_back(itr->second);
                ans.push_back(i);
                return ans;
            } else {
                my_map.insert({nums[i], i});
            }
        }
        return ans;
    }
};