class Solution {
public:
    
    void dfs(vector<vector<int>>& rooms, vector<int>& visited, int curr_i){
        if (visited[curr_i] == 1){
            return;
        }
        visited[curr_i] = 1;
        
        for(int i=0; i<rooms[curr_i].size(); i++){
            dfs(rooms, visited, rooms[curr_i][i]);
        }
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited (n, 0);
        
        dfs(rooms, visited, 0);
        
        for (int i=0; i<visited.size(); i++){
            if(visited[i] == 0){
                return false;
            }
        }
        return true;
    }
};
