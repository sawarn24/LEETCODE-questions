class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int, int> freq;
        int cnt = 0, mod = 1e9 + 7;

        for (int num : deliciousness) {
            for (int power = 1; power <= 1 << 21; power *= 2) { 
                cnt = (cnt + freq[power - num]) % mod;
            }
            freq[num]++;
        }

        return cnt;
    }
        
    
};