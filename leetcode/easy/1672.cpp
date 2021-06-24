class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = 0;
        for (int i=0; i<accounts.size(); i++){
            int curr_sum = 0;
            for (int j=0; j< accounts[i].size(); j++){
                curr_sum += accounts[i][j];
            }
            max_sum = max(curr_sum, max_sum);
        }
        return max_sum;
    }
};
