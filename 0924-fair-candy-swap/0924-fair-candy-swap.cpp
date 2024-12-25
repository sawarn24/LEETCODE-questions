class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
         int sumAlice = 0, sumBob = 0;
    for (int candy : aliceSizes) {
        sumAlice += candy;
    }
    for (int candy : bobSizes) {
        sumBob += candy;
    }
    
    int delta = sumAlice - sumBob;
    
    if (delta % 2 != 0) {
        return {};
    }
    
    int target = delta / 2;
    unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());
    
    for (int x : aliceSizes) {
        int y = x - target;
        if (bobSet.find(y) != bobSet.end()) {
            return {x, y};
        }
    }
    
    return {};
        
    }
};