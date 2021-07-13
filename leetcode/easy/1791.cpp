class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> counter;
        for(int i=0; i< edges.size(); i++){
            counter[edges[i][0]] += 1;
            counter[edges[i][1]] += 1;
        }
        int max = 1;
        for(int i=0; i<counter.size(); i++){
            cout << i << ' ' << counter[i] << endl;
            if (counter[i] > max){
                max = i;
                break;
            }
        }
        return max;
    }
};
