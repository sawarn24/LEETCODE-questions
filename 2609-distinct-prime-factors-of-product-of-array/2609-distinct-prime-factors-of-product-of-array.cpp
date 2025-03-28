class Solution {
public:
void findPrimeFactors(int n, unordered_set<int> &primeSet) {
   
    if (n % 2 == 0) {
        primeSet.insert(2);
        while (n % 2 == 0)
            n /= 2;
    }

    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            primeSet.insert(i);
            while (n % i == 0)
                n /= i;
        }
    }

  
    if (n > 1)
        primeSet.insert(n);
}
    int distinctPrimeFactors(vector<int>& nums) {
       
     unordered_set<int> primeSet;
    for (int num : nums) {
        findPrimeFactors(num, primeSet);
    }
    return primeSet.size();
        
    }
};