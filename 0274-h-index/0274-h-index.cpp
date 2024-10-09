class Solution {
public:
    int hIndex(vector<int>& citations) {
         if (citations.empty()) {
            return 0; // Return 0 for no citations
        }
        sort(citations.begin(),citations.end());
        int n=size(citations);
        for(int i=0;i<n;i++)
        {
            if(citations[i]>=n-i)
            {
                return n-i;
            }

        }
        return 0;
        
        
    }
};