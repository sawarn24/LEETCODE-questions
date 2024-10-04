class Solution {
public:
    bool squareIsWhite(string s) {
        
        int num=s[s.size()-1]-'0';
        int num2=(int)s[s.size()-2];
        return (num + num2) % 2 != 0;
        
    }
};