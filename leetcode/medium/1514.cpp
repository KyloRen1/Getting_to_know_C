class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> graph(n);
        for(int i=0; i<edges.size(); i++){
            graph[edges[i][0]].push_back({edges[i][1], succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        queue<int> queue;
        queue.push(start);
        
        vector<double> probs(n);
        probs[start] = 1;
        
        while (!queue.empty()){
            int u = queue.front();
            queue.pop();
            
            for(auto [v, w] : graph[u]){
                if(probs[u] * w > probs[v]){
                    probs[v] = probs[u] * w;
                    queue.push(v);
                }
            }
        }
        return probs[end];
    }
};
