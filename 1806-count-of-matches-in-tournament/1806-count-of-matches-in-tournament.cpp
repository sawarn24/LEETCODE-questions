class Solution {
public:
    int numberOfMatches(int n) {
        if(n==2)
        return 1;
        int res=0;
        while(n>=2)
        {  res+=n/2;
            if(n%2==0)
            {
                
                n=n/2;
            }
            else
            {
               
               
                n=(n/2)+1;
            }
        }
        return res;
    }
};