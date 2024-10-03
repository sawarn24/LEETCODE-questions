class Solution {
public:
    int sumBase(int n, int k) {
        int m=1;
        int rem=0;
        if(k==10 || n<k)
        {
           while(n>0)
           {
            rem+=n%10;
            n=n/10;
           }
        }
        else{
        while(n>=k)
        {
            rem+=(n%k);
           
           n=n/k;
           if(n<k)
           {
            rem+=n;
           }

        }
        }


        return rem;
    }
};