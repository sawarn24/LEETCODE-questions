class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int cnt = 0, res = INT_MAX;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') cnt++;
        }

        res = cnt;

        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i - k] == 'W') cnt--;
            if (blocks[i] == 'W') cnt++;
            res = min(res, cnt);
        }

        return res;
    }
};