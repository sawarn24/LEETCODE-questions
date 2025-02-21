class Solution {
public:

 void reverseRows(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        int left = 0, right = cols - 1;
        while (left < right) {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }
}
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size(); i++)
        {
            for(int j=0;j<m[0].size();j++)
            if(i<j)
            {
                swap(m[i][j],m[j][i]);

            }
           
        }
        reverseRows(m);


        
    }
};