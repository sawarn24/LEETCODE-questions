class Solution {
public:
    int countEven(int num) {
        int og=num;
        int res=0;
        while(num>0)
        {
            int ld=num%10;
             res+= ld;
             num=num/10;
        }
        if(res%2==0)
        {
            return og/2;

        }
        else
        {
            return (og - 1) / 2;
        }

        
    }
};