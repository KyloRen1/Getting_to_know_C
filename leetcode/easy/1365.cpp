// Brute force

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> counts;
        int counter = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if (nums[i] > nums[j]){
                    counter += 1;
                }
            }
            counts.push_back(counter);
            counter = 0;
        }
        return counts;
    }
};

// O(nlogn)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> counts;
        vector<int> nums_orig = nums;
        int counter;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++){
            counter = lower_bound(nums.begin(), nums.end(), nums_orig[i]) - nums.begin();
            counts.push_back(counter);
        }
        return counts;
    }
};