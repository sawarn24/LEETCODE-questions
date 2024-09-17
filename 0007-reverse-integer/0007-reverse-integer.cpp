class Solution {
public:
    int reverse(int n) {
        int ans=0;
        int cnt=0,res=0;
        if(n<0)
        {
            cnt++;
        }
        n=abs(n);
        while(n)
        {
            int ld=n%10;
             if (res > INT_MAX / 10 || (res == INT_MAX / 10 && ld > 7)) {
            return 0;  
        }
        if (res < INT_MIN / 10 || (res == INT_MIN / 10 && ld < -8)) {
            return 0;  
        }
            res=res*10+ld;
            n=n/10;

        }
        if(cnt)
        {
            res=(-res);
        }
        return res;
        
    }
};