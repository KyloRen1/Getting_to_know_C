class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, string> cities;
        set<string> start;
        set<string> destination;
        set<string>::iterator it;
        for(int i=0; i<paths.size(); i++){
            start.insert(paths[i][0]);
            destination.insert(paths[i][1]);
        }
        
        for(it=start.begin(); it!=start.end(); ++it){
            if (destination.find(*it) != start.end()){
                destination.erase(*it);
            }
        }
        return *destination.begin();
        
    }
};

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> start;
        for(int i=0; i<paths.size(); i++){
            start.insert(paths[i][0]);
        }
        for(int i=0; i<paths.size(); i++){
            if (start.find(paths[i][1]) == start.end()){
                return paths[i][1];
            }
        }
        return "";
    }
};
