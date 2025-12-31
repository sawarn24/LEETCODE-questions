class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=-0;i<m;i++)
        {
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int s=matrix[i][j]+dp[i-1][j];
               int ld = INT_MAX;
                if (j - 1 >= 0) ld = matrix[i][j]+dp[i-1][j-1];

                int rd = INT_MAX;
                if (j + 1 < m) rd = matrix[i][j]+dp[i-1][j+1];
                dp[i][j]=min(s,min(ld,rd));

            }

        }
        int maxi=dp[n-1][0];
        for(int i=1;i<m;i++){
            maxi=min(maxi,dp[n-1][i]);
        }
        return maxi;
    }
};