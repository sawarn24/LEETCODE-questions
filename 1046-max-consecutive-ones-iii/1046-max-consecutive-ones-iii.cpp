class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;int r=0;int a=0;int cnt=0;
        
        for(int r=0;r<nums.size();r++)
        {
           if(nums[r]==0)
           cnt++;
            while( cnt>k)
            {
                if (nums[l]==0)
                {
                    cnt--;
                   
                }
                 l++;
                
            }
            a=max(a,r-l+1);

        }
        return a;
        
    }
};