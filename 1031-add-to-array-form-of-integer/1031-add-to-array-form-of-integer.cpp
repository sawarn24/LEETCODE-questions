class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
         int n = num.size();
        vector<int> res;
        int carry = k;

        // Start adding from the last digit to the first digit
        for (int i = n - 1; i >= 0 || carry > 0; --i) {
            if (i >= 0) {
                carry += num[i];
            }
            res.push_back(carry % 10);
            carry /= 10;
        }

        // Reverse the result to get the correct order
        reverse(res.begin(), res.end());
        
        return res;
        
    }
};