class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>peak;
        if (mountain.size() < 3) return peak; 
        for(int i=1;i<size(mountain)-1;i++)
        {
            if(mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1])
            {
                peak.push_back(i);
            }
        }
        return peak;
    }
};