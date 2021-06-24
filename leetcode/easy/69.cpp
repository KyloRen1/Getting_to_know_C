class Solution {
public:
    int mySqrt(long long int x) {
        long long int l = 0, r = x + 1;
        while (l < r){
            long long int mid = l + (r - l) / 2;
            
            if (mid * mid <= x){
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l - 1;
    }
};