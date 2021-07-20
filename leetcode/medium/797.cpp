class Solution {
    
    vector<int> path;
    vector<vector<int>> results;
    
public:
    void dfs(int node, int target_node, vector<vector<int>>& graph ){
        path.push_back(node);
        
        if (node == target_node){
            results.push_back(path);
        }
        
        for(int child: graph[node]){
            dfs(child, target_node, graph);
        }
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        dfs(0, n-1, graph);
        return results;
    }
};
