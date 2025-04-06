class Solution {
public:
    int smallestValue(int n) {
        int s=0;
        while(s!=n)
        {
            s=n;
            n=sumOfPrimeFactors(n);
        }
        return s;
        
    }
    int sumOfPrimeFactors(int n) {
    int sum = 0;

    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            sum += i;
            n /= i;
        }
    }

    if (n > 2) {
        sum += n;
    }

    return sum;
}
};