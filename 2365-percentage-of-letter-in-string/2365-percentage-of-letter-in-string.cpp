class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt=0;
        for(int i=0;i<size(s);i++)
        {
            if(s[i]==letter)
            {
                cnt++;
            }
        }
        int res =(cnt * 100) / size(s); 
        return res;
        
    }
};