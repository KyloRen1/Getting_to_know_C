class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mapping;
        set<int> counts;
        for(int i=0; i<arr.size(); i++){
            mapping[arr[i]] += 1;
        }
        for (auto const& x: mapping){
            counts.insert(x.second);
        }
        return mapping.size() == counts.size();
    } 
};
