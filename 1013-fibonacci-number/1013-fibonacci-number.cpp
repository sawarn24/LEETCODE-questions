class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        int first=0;
        int second=1;
        int next=first+second;


        for(int i= 2;i<n;i++)
        {
            first=second;
            second=next;
            next=first+second;
        }
        return next;
    }
};