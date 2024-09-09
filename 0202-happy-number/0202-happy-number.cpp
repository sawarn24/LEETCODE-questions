class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> usedNumbers; 
        int res=0;
        while(res!=1)
        {   res=0;
            while(n!=0)
            { 
               int x=n%10;
                res+=x*x;
                n=n/10;
            }
            if(res==1)
            {
                return true;
            }
            else
            {
                n=res;
            }
           if (usedNumbers.find(res) != usedNumbers.end()) {
                return false; 
            }
            usedNumbers.insert(res);
            n = res;
        }
        return false;
    } 
};