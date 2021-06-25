class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> unique;
        
        for(int i=0; i<nums.size(); i++){
            if (unique.find(nums[i]) == unique.end()){
                unique[nums[i]] = 1;   
            } else {
                unique[nums[i]] += 1;
            }
        }
        int sum = 0; 
        for (auto const& x: unique){
            if(x.second == 1){
                sum += x.first;
            }
        }
        return sum;
    }
};
