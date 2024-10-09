class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        int dnt=0;
        for(int i=0;i<size(s);i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else
           if (cnt > 0) {
                    cnt--;  
                } else {
                    dnt++;  
                }
        }
        
        
        return cnt+dnt;
    }
};