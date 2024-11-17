class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
         unordered_set<char> jewelSet;
        int count = 0;
        
        
        for (char jewel : jewels) {
            jewelSet.insert(jewel);
        }
        
        
        for (char stone : stones) {
            if (jewelSet.find(stone) != jewelSet.end()) {
                count++;
            }
        }
        
        return count;

        
    }
};