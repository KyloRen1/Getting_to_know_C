class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> letters;
        
        for(int i=0; i<sentence.size(); i++){
            letters.insert(sentence[i]);
        }
        
        return letters.size() == 26;
    }
};
