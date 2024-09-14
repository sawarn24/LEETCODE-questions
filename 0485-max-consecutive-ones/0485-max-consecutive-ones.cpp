class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxsum=0;
        int cnt=0;
        for(int i=0;i<size(nums);i++)
         {
           if(nums[i]==1)
           {
               cnt++;
           }
           else
           {
            maxsum=max(maxsum,cnt);
            cnt=0;
           }
        }
         maxsum=max(maxsum,cnt);
        return maxsum;
        

        
        
    }
};