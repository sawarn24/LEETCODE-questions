class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
    vector<pair<int, int>> scoreWithIndex; // Pair of score and original index
    
    for (int i = 0; i < n; ++i) {
        scoreWithIndex.emplace_back(score[i], i);
    }
    
    sort(scoreWithIndex.rbegin(), scoreWithIndex.rend()); // Sort in descending order
    
    vector<string> result(n);
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            result[scoreWithIndex[i].second] = "Gold Medal";
        } else if (i == 1) {
            result[scoreWithIndex[i].second] = "Silver Medal";
        } else if (i == 2) {
            result[scoreWithIndex[i].second] = "Bronze Medal";
        } else {
            result[scoreWithIndex[i].second] = to_string(i + 1);
        }
    }
    
    return result;
        
    }
};