class Solution {
    
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int curr_i, int n){
        visited[curr_i] = true;
        for(int i=0; i<n; i++){
            if (isConnected[curr_i - 1][i] == 1 && !visited[i + 1]){
                dfs(isConnected, visited, i+1, n);
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int counter = 0;
        vector<bool> visited (n + 1, false);
        for(int i=1; i<=n; i++){
            if (!visited[i]){
                dfs(isConnected, visited, i, n);
                counter++;
            }
        }
        return counter;
    }
};
