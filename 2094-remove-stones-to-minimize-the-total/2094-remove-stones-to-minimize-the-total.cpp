class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxHeap(piles.begin(), piles.end()); 

    while (k--) {
        int largest = maxHeap.top();
        maxHeap.pop();
        maxHeap.push(largest - largest / 2); 
    }

    int total = 0;
    while (!maxHeap.empty()) {
        total += maxHeap.top();
        maxHeap.pop();
    }

    return total;
        
    }
};