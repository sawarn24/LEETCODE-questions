class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_map<int, int> lossCount;

    for (int i = 0; i < matches.size(); i++) {
        int winner = matches[i][0];
        int loser = matches[i][1];

    
        if (lossCount.find(winner) == lossCount.end()) {
            lossCount[winner] = 0;
        }

        
        lossCount[loser]++;
    }

    
    vector<int> noLosses, oneLoss;
    for (auto it = lossCount.begin(); it != lossCount.end(); it++) {
        if (it->second == 0) {
            noLosses.push_back(it->first);
        } else if (it->second == 1) {
            oneLoss.push_back(it->first);
        }
    }
 // Step 3: Sort results
    sort(noLosses.begin(), noLosses.end());
    sort(oneLoss.begin(), oneLoss.end());

    return {noLosses, oneLoss};
}

};