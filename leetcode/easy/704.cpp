class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        int mid;
        while(l + 1 < r){
            mid = l + (r - l) / 2;
            if (nums[mid] > target){
                r = mid;
            } else {
                l = mid;
            }
        }
        if (nums[l] == target){
            return l;
        } else {
            return -1;
        }
    }
};
