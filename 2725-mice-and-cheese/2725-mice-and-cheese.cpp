class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n = reward1.size();
    vector<int> indices(n);
    
    for (int i = 0; i < n; i++) indices[i] = i;
    
    sort(indices.begin(), indices.end(), [&](int i, int j) {
        return (reward1[i] - reward2[i]) > (reward1[j] - reward2[j]);
    });

    int total_points = 0;
    
    for (int i = 0; i < k; i++) {
        total_points += reward1[indices[i]];
    }
    
    for (int i = k; i < n; i++) {
        total_points += reward2[indices[i]];
    }
    
    return total_points;
        
    }
};