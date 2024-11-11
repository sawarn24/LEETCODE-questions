class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row_mins(m), lucky_numbers;
        
        for (int i = 0; i < m; ++i) {
            row_mins[i] = *min_element(matrix[i].begin(), matrix[i].end());
        }

        for (int j = 0; j < n; ++j) {
            int max_in_col = matrix[0][j];
            for (int i = 1; i < m; ++i) {
                max_in_col = max(max_in_col, matrix[i][j]);
            }

            for (int i = 0; i < m; ++i) {
                if (matrix[i][j] == row_mins[i] && matrix[i][j] == max_in_col) {
                    lucky_numbers.push_back(matrix[i][j]);
                }
            }
        }

        return lucky_numbers;
        
    }
};