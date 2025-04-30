class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, currEnd = 0, farthest = 0;
    int n = nums.size();

    for (int i = 0; i < n - 1; ++i) {
        farthest = max(farthest, i + nums[i]);

        
        if (i == currEnd) {
            jumps++;
            currEnd = farthest;
        }
    }

    return jumps;
    }
};