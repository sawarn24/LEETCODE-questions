class Solution {
public:
    bool judgeSquareSum(int c) {
        int a = 0;
        long long b = static_cast<int>(sqrt(c));

        while (a <= b) {
            long long sum = a * a + b * b;
            if (sum == c) {
                return true;
            }
            else if (sum < c) {
                a++;
            }
            else {
                b--;
            }
        }
        return false;
        
    }
};