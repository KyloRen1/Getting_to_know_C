class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> original = {first};
        for (int i=0; i<encoded.size(); i++){
            original.push_back(original[i] ^ encoded[i]);
        }
        return original;
    }
};
