class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> uniqueElements(nums.begin(), nums.end());
        int totalUnique = uniqueElements.size();
        int count = 0;

        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            unordered_map<int, int> freq;
            int distinctCount = 0;
            for (int j = i; j < n; ++j) {
                if (freq[nums[j]] == 0)
                    distinctCount++;
                freq[nums[j]]++;

                if (distinctCount == totalUnique)
                    count++;
            }
        }
        return count;
        
    }
};