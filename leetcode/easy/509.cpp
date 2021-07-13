class Solution {
public:
    int fib(int n) {
        int curr = 0, next = 1;
        int temp;
        for (int i=0; i<n; i++){
            temp = next + curr;
            curr = next;
            next = temp;
        }
        return curr;
    }
};

