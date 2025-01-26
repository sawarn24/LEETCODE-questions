class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        
        unordered_map<int, vector<int>> index_map;
    for (int i = 0; i < nums.size(); ++i) {
        index_map[nums[i]].push_back(i);
    }

    vector<long long> result(nums.size(), 0);

    for (const auto& [value, indices] : index_map) {
        long long prefix_sum = 0, suffix_sum = accumulate(indices.begin(), indices.end(), 0LL);
        int n = indices.size();

        for (int i = 0; i < n; ++i) {
            int idx = indices[i];
            suffix_sum -= idx;
            result[idx] = (i * (long long)idx - prefix_sum) + (suffix_sum - (n - i - 1) * (long long)idx);
            prefix_sum += idx;
        }
    }

    return result;
    }
};