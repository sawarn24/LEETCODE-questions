class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int minVal = INT_MAX, minArrayIdx = -1;
        for (int i = 0; i < arr.size(); i++) {
        if (!arr[i].empty() && arr[i][0] < minVal) {
            minVal = arr[i][0];
            minArrayIdx = i;
        }
    }
     int maxVal = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (i != minArrayIdx && !arr[i].empty()) {
            maxVal = max(maxVal, arr[i].back());
        }
    }
 int maxDistance1 = maxVal - minVal;
        
        
        maxVal = INT_MIN;
        int maxArrayIdx = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (!arr[i].empty() && arr[i].back() > maxVal) {
                maxVal = arr[i].back();
                maxArrayIdx = i;
            }
        }
        
       
        minVal = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            if (i != maxArrayIdx && !arr[i].empty()) {
                minVal = min(minVal, arr[i][0]);
            }
        }
        
        
        int maxDistance2 = maxVal - minVal;
        
       
        return max(maxDistance1, maxDistance2);
    }

    
};