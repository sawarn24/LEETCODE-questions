class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n =stones.size();
        int totsum=0;
        for(int i=0;i<n;i++)
        {
            totsum+=stones[i];
        }
        vector<vector<bool>>dp(n,vector<bool>(totsum+1));
        for(int i=0;i<n;i++)
        {
          dp[i][0]=true;
        }
        dp[0][stones[0]]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=totsum;j++)
            {
                bool not_take=dp[i-1][j];
                bool take=false;
                if(stones[i]<=j)
                {
                 take=dp[i-1][j-stones[i]];
                }
                dp[i][j]= take || not_take;
            }
        }
        int mini=1e9;
        for(int i=0;i<=totsum/2;i++){
            if(dp[n-1][i])
            mini=min(mini,abs(totsum-2*i));
        }
        return mini;
    }
};