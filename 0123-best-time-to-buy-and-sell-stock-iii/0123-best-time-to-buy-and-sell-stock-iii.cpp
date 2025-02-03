class Solution {
public:
    int maxProfit(vector<int>& prices) {
         if (prices.empty()) return 0;

    int firstBuy = INT_MIN, firstSell = 0;
    int secondBuy = INT_MIN, secondSell = 0;

    for (int price : prices) {
        firstBuy = max(firstBuy, -price);         // Best price to buy first stock
        firstSell = max(firstSell, firstBuy + price);  // Profit after selling first stock
        secondBuy = max(secondBuy, firstSell - price); // Best price to buy second stock
        secondSell = max(secondSell, secondBuy + price); // Profit after selling second stock
    }

    return secondSell;
        
    }
};