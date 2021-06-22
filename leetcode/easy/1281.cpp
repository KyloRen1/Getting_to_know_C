class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        
        while (n) {
            int last_digit = n % 10;
            product *= last_digit;
            sum += last_digit;
            n /= 10;
        }
        return product - sum;
    }
};
