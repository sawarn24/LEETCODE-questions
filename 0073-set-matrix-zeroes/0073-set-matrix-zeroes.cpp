class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
       int a = m.size(), n = m[0].size();
    bool rz = false, cz = false;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(m[i][j]==0)
            {
                if(i==0)
                {
                    rz=true;
                }
                if(j==0)
                {
                    cz=true;
                }
                m[0][j]=0;
                m[i][0]=0;
            }
        }
    }
        for(int i=1;i<a;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(m[i][0]==0 || m[0][j]==0)
                {
                    m[i][j]=0;
                }
            }
        }
        if(rz)
        {
            for(int i=0;i<n;i++)
            {
                 m[0][i] = 0;
            }
        }
         if(cz)
        {
            for(int i=0;i<a;i++)
            {
                m[i][0]=0;
               
            }
        }
            
        }
        
    
};