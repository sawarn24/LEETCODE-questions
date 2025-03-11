class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        }); 
        vector<vector<int>> merge;
         merge.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if((intervals[i][0])<=(merge.back()[1]) )
            {
                merge.back()[1]=max(merge.back()[1], intervals[i][1]);
            }
            else
            merge.push_back(intervals[i]);
        }

        return merge;
        
    
        
    }
};