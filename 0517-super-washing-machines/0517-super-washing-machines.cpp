class Solution {
public:
    int findMinMoves(vector<int>& machines) {
         int n = machines.size();
        int total = 0;
        for (int num : machines) {
            total += num;
        }
        
        if (total % n != 0) return -1; 
        
        int target = total / n;
        int moves = 0;
        int cumulative = 0;
        
        for (int i = 0; i < n; ++i) {
            int load = machines[i] - target;
            cumulative += load;
            moves = max(moves, max(abs(cumulative), load));
        }
        
        return moves;
        
    }
};