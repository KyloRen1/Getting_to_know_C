/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        map<Node*, Node*> mapping;
        queue<Node*> q;
        
        q.push(node);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            
            if(!curr){
                continue;
            }
            
            if(mapping.count(curr) == 0){
                mapping[curr] = new Node(curr -> val, curr -> neighbors);
                for(int i=curr -> neighbors.size(); i--;){
                    if(mapping.count(curr -> neighbors[i]) == 0){
                        q.push(curr -> neighbors[i]);
                    }
                }
            }
        }
        
        for(auto it = mapping.begin(); it != mapping.end(); it++){
            for(int i=it -> second -> neighbors.size(); i--;){
                it -> second -> neighbors[i] = mapping[it -> second -> neighbors[i]];
            }
        }
        
        return mapping.size() > 0 ? mapping[node] : NULL;
    }
};


class Solution {
public:
    map<int, Node*> mapping;
    
    Node* cloneGraph(Node* node) {
        if(node == NULL){
            return NULL;
        }
        if (mapping.find(node -> val) != mapping.end()){
            return mapping[node -> val];
        }
        
        Node* tmp = new Node(node -> val);
        mapping[node -> val] = tmp;
        for(int i=0; i<node -> neighbors.size(); i++){
            tmp -> neighbors.push_back(cloneGraph(node -> neighbors[i]));
        }
        return tmp;
    }
};
