class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string abc;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(abc.empty())
                {
                    continue;
                }
                else
                {   reverse(abc.begin(), abc.end());
                    abc.push_back(' ');
                    ans += abc;
                    abc.clear();
                }
            }
            else
            {
                abc.push_back(s[i]);
            }



        }
        if(!abc.empty())
        {
            reverse(abc.begin(), abc.end());
            ans += abc;

        }
        while(ans[ans.size()-1]==' ')
        ans.pop_back();
        return ans;
        
    }
};