class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> allowed_letters;
        
        for (int i=0; i<allowed.size(); i++){
            allowed_letters.insert(allowed[i]);
        }
        
        int counter = 0;
        for (int i=0; i<words.size(); i++){
            bool found_w = false;
            for (int j=0; j<words[i].size(); j++){
                if(allowed_letters.find(words[i][j]) == allowed_letters.end()){
                    found_w = true;
                    break;
                }
            }
            if (found_w == false){
                counter += 1;
            }
        }
        return counter;
    }
};
