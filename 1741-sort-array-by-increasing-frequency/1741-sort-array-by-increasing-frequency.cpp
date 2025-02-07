class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freqMap;
    for (int num : nums) freqMap[num]++;

    sort(nums.begin(), nums.end(), [&](int a, int b) {
        return freqMap[a] == freqMap[b] ? a > b : freqMap[a] < freqMap[b];
    });

    return nums;
        
    }
};