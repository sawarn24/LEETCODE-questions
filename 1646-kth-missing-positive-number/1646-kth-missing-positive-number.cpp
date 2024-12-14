class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int missing = 0, i = 0, num = 1;
        
        while (k > 0) {
            if (i < arr.size() && arr[i] == num) {
                i++;
            } else {
                missing++;
                k--;
                if (k == 0) return num;
            }
            num++;
        }
        
        return missing;
        
    }
};