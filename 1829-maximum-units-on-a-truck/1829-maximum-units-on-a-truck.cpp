class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b)
    {
    return a[1] > b[1]; 
    });
    int res = 0;  
for (int i = 0; i < boxTypes.size(); i++) {
    int boxCount = boxTypes[i][0];      // Number of boxes
    int unitsPerBox = boxTypes[i][1];   // Units per box

    // Take as many boxes as the truck can hold
    if (truckSize >= boxCount) {
        res += boxCount * unitsPerBox;  // Add all boxes of this type
        truckSize -= boxCount;          // Reduce the remaining truck capacity
    } else {
        res += truckSize * unitsPerBox;  // Add only the boxes that fit
        break;                          // Truck is full
    }
}
return res;
}

};