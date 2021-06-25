class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<int> j; 
        
        for (int i=0; i<jewels.size(); i++){
            j.insert(jewels[i]);
        }
        
        int counter = 0;
        for (int i=0; i<stones.size(); i++){
            if (j.find(stones[i]) != j.end()){
                counter += 1;
            }
        }
        return counter;
        }
};
