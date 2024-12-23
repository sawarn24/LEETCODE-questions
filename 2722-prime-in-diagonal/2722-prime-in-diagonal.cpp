class Solution {
public:
bool isPrime(int num) {
    if (num <= 1) return false;  // 1 or smaller are not prime
    if (num == 2) return true;   // 2 is prime
    if (num % 2 == 0) return false; // Even numbers greater than 2 are not prime
    for (int i = 3; i * i <= num; i += 2) {  // Check only odd divisors up to sqrt(num)
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
    int largestPrime = 0;

    // Check primary and secondary diagonals
    for (int i = 0; i < n; ++i) {
        // Primary diagonal: nums[i][i]
        if (isPrime(nums[i][i])) {
            largestPrime = max(largestPrime, nums[i][i]);
        }

        // Secondary diagonal: nums[i][n - i - 1]
        if (isPrime(nums[i][n - i - 1])) {
            largestPrime = max(largestPrime, nums[i][n - i - 1]);
        }
    }

    return largestPrime;
        
    }
};