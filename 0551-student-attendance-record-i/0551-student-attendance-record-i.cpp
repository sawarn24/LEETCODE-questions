class Solution {
public:
    bool checkRecord(string s) {
        int arr[3]={0,0,0};
        int cnt=0;
        for(int i=0;i<size(s);i++)
        {
            if(s[i]=='A')
            {
                arr[0]++;
                if(cnt>0)
                cnt=0;
            }
            else if(s[i]=='L')
            { cnt++;
                if(cnt==3)
               {
                arr[1]++;

               }
               
            }
            else if(s[i]=='P')
            {
                arr[2]++;
                if(cnt>0)
                cnt=0;
            }
        }
        if(arr[0]<2 &&arr[1]==0)
        return true;

        return false;
        
    }
};