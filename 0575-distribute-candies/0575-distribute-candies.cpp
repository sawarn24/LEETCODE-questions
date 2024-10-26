class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> unique(candyType.begin(), candyType.end()); 
        int max = candyType.size() / 2;  
        return min(static_cast<int>(unique.size()), max);
        
        
    }
};