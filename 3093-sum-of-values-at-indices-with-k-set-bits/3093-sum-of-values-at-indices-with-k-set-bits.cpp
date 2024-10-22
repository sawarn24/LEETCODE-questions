class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            // Count set bits in the binary representation of the index
            if (__builtin_popcount(i) == k) {
                sum += nums[i];
            }
        }

        return sum;
        
    }
};