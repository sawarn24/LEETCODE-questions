class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int N = right + 1;
        vector<bool> isPrime(N, true);
        isPrime[0] = isPrime[1] = false;
        
        for (int i = 2; i * i < N; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j < N; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> primes;
        for (int i = left; i <= right; ++i) {
            if (isPrime[i])
                primes.push_back(i);
        }

        if (primes.size() < 2) return {-1, -1};

        int minDiff = INT_MAX;
        int a = -1, b = -1;
        for (int i = 1; i < primes.size(); ++i) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                a = primes[i - 1];
                b = primes[i];
            }
        }

        return {a, b};
        
    }
};