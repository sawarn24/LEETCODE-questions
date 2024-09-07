class Solution {
public:
    int climbStairs(int n) {
        int f=0;
        int s=1;
        int next=f+s;
        for(int i=3;i<=n+1;i++)
        {
          f=s;
          s=next;
          next=f+s;
        }
        return next;

        
    }
};