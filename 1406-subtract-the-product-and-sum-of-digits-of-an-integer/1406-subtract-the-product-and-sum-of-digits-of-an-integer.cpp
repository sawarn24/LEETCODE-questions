class Solution {
public:
    int subtractProductAndSum(int n) {
        int lastdigit=0;
        int sum=0;
        int pro=1;
        while(n>0)
        {
            lastdigit=n%10;
            sum+=lastdigit;
            pro*=lastdigit;
            n=n/10;
        }
        return pro-sum;
        
    }
};