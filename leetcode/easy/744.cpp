class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size();
        while (l < r){
            cout << l << ' ' << r << endl;
            int mid = l + (r - l) / 2;
            if (letters[mid] <= target){
                l = mid + 1;
            } else{
                r = mid;
            }
        }
        return letters[l % letters.size()];
    }
};
