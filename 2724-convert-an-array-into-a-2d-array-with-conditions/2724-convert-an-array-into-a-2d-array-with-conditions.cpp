class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
          }
          int minRows = 0;
        for (auto& [num, count] : freq) {
            minRows = max(minRows, count);
        }

        
        vector<vector<int>> result(minRows);  

       
        for (auto& [num, count] : freq) {
            for (int i = 0; i < count; i++) {
                result[i].push_back(num);  
            }
        }

        return result;
        
    }
};