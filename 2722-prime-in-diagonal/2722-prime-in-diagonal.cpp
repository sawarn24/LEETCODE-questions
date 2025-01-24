class Solution {
public:
   
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to find the largest prime number on the diagonals
 int diagonalPrime(vector<vector<int>>& nums) {
    int n = nums.size();
    int m = nums[0].size();
    int maxPrime = 0;

    for (int i = 0; i < n; ++i) {
        // Check main diagonal element
        if (i < m && isPrime(nums[i][i])) {
            maxPrime = max(maxPrime, nums[i][i]);
        }

        // Check anti-diagonal element
        if (i < m && isPrime(nums[i][m - i - 1])) {
            maxPrime = max(maxPrime, nums[i][m - i - 1]);
        }
    }

    return maxPrime;
        
    }
};