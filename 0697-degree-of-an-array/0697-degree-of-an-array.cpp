class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
         unordered_map<int, int> count, first, last;
    int degree = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];
        count[num]++;
        if (count[num] == 1) {
            first[num] = i;
        }
        last[num] = i;
        degree = max(degree, count[num]);
    }
    
    int minLength = nums.size();
    
    for (const auto& entry : count) {
        if (entry.second == degree) {
            int num = entry.first;
            minLength = min(minLength, last[num] - first[num] + 1);
        }
    }
    
    return minLength;
        
    }
};