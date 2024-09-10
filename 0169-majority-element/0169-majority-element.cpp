class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1;
        int max=nums[0];
        int maxtime=1;
        int i;
        sort(nums.begin(),nums.end());
        for(i=1;i<size(nums);i++)
        {
            if(nums[i]==nums[i-1])
            {
                cnt++;
            }
            else{
                if(cnt>maxtime)
                {
                    maxtime=cnt;
                    max=nums[i-1];
                }
                cnt=1;
            }
        }
      return ( cnt<maxtime)? max:nums[size(nums)-1];
    }
};