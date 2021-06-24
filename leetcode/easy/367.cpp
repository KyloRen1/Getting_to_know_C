class Solution {
public:
    bool isPerfectSquare(long long int num) {
        long long int l = 0, r = num + 1;
        long long int mid;
        while (l < r){
            mid = l + (r - l) / 2;
            if (mid * mid == num){
                return true;
            }
            if (mid * mid < num){
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return false;
    }
};
