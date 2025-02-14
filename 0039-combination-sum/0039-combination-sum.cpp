class Solution {
public:
void findCombinations(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = index; i < candidates.size(); i++) {
        if (candidates[i] > target) continue;

        current.push_back(candidates[i]);
        findCombinations(i, target - candidates[i], candidates, current, result);
        current.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
    vector<int> current;
    findCombinations(0, target, candidates, current, result);
    return result;
        
    }
};