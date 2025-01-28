class Solution {
public:
    bool canJump(vector<int>& nums) {
         int maxReach = 0; // The farthest index we can reach
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (i > maxReach) return false; // If we reach an unreachable index, return false
        maxReach = max(maxReach, i + nums[i]); // Update max reachable index
        if (maxReach >= n - 1) return true; // If we can reach the last index, return true
    }
    
    return false;
        
    }
};