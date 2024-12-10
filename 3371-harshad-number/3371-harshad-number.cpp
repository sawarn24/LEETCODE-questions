class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int n) {
        int sum=0;
        int og=n;
        while(n>0)
        {
            int ld=n%10;
            sum+=ld;
            n=n/10;
        }
        if(og%sum==0)
        {
            return sum; 
        }
        return -1;
        
    }
};