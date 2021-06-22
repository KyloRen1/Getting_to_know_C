class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> targetArr;
        int position, element;
        for (int i=0; i<nums.size(); i++){
            position = index[i];
            element = nums[i];
            targetArr.insert(targetArr.begin() + position, element);
        }
        return targetArr;
    }
};
