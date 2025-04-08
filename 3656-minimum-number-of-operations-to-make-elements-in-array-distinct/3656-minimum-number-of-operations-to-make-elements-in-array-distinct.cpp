class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         int n = nums.size();
    int ops = 0;

    while (true) {
        unordered_set<int> seen;
        bool hasDuplicate = false;

        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i])) {
                hasDuplicate = true;
                break;
            }
            seen.insert(nums[i]);
        }

        if (!hasDuplicate) break;

        
        int removeCount = min(3, (int)nums.size());
        nums.erase(nums.begin(), nums.begin() + removeCount);
        ops++;
    }

    return ops;
        
    }
};