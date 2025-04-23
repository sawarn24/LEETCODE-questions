class Solution {
public:
    int countLargestGroup(int n) {
         map<int, int> digitcount;

       
        for (int i = 1; i <= n; ++i) {
            int sum = digitsum(i);
            digitcount[sum]++;
        }

        int maxsize = 0;
        int count = 0;

        
        map<int, int>::iterator it;
        for (it = digitcount.begin(); it != digitcount.end(); ++it) {
            int sum = it->first;
            int freq = it->second;

            if (freq > maxsize) {
                maxsize = freq;
                count = 1;
            } else if (freq == maxsize) {
                count++;
            }
        }

        return count;
        
    }
    int digitsum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
};
