class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five =0;
        int ten=0;
        
        for(int i=0;i<size(bills);i++)
        {
            if(bills[i]==5)
            five++;
            else if(bills[i]==10)
            {
                
                if(five>0)
                {
                five--;
                ten++;
                }
                else
                return false;
            }
            else{
               if (ten > 0 && five > 0) {
                    ten--;  // Give $10
                    five--;  // Give $5
                }
                
                else if (five >= 3)
                 {
                    five -= 3;
                }
                else {
                    return false;  // Can't give change
                }
             }
        }
        return true;
    }
};