class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        for(auto wealth:accounts)
        {
            auto cu=accumulate(wealth.begin(),wealth.end(),0);
            maxi=max(cu,maxi);

        }
        return maxi;
        
    }
};