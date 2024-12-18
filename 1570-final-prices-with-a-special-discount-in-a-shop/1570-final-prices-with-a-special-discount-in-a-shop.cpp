class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
         int n = prices.size();
    vector<int> result(n);
    stack<int> s;

    // Iterate from right to left through the prices array
    for (int i = n - 1; i >= 0; --i) {
        // Pop elements from the stack that are greater than the current price
        while (!s.empty() && prices[s.top()] > prices[i]) {
            s.pop();
        }

        // If stack is not empty, apply the discount
        if (!s.empty()) {
            result[i] = prices[i] - prices[s.top()];
        } else {
            result[i] = prices[i];
        }

        // Push the current index to the stack
        s.push(i);
    }

    return result;
    }
};