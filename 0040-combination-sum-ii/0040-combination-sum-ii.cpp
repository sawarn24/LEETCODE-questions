class Solution {
public:
void findCombinations(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = index; i < candidates.size(); i++) {
        if (i > index && candidates[i] == candidates[i - 1]) continue;
        if (candidates[i] > target) break;

        current.push_back(candidates[i]);
        findCombinations(i+1, target - candidates[i], candidates, current, result);
        current.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        sort(candidates.begin(),candidates.end());
    vector<int> current;
    findCombinations(0, target, candidates, current, result);
    return result;
        
    }
};