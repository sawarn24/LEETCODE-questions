class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
       
        auto isVowel = [](char ch) {
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
        };
        
        int n = words.size();
        vector<int> isVowelWord(n, 0);
        for (int i = 0; i < n; ++i) {
            if (isVowel(words[i][0]) && isVowel(words[i].back())) {
                isVowelWord[i] = 1;
            }
        }
        
        vector<int> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + isVowelWord[i];
        }
        
        vector<int> result;
        for (const auto& query : queries) {
            int li = query[0], ri = query[1];
            result.push_back(prefixSum[ri + 1] - prefixSum[li]);
        }
        
        return result;
        
    }
};