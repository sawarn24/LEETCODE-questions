class Solution {
public:

   
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>>result;
       
        for(int i=0;i<numrows;i++)
        {  vector<int>abc;
        
        int val=1;
            for(int j=0;j<=i;j++)
            {
                abc.push_back(val);
                val = val * (i - j) / (j + 1);
            }
            result.push_back(abc);
            

        }
        return result;
        
        
    }
};