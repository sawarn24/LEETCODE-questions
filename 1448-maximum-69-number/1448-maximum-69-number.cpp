class Solution {
public:
    int maximum69Number (int num) {
        
        string str =to_string(num);
        int i=0;
        while(i<size(str))
        {
            if(str[i]=='6')
            {
                str[i]='9';
                break;
            }
            i++;
        }
        return stoi(str);
        
    }
};