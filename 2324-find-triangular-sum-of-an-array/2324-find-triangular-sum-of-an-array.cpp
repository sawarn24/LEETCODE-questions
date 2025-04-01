class Solution {
public:
    int triangularSum(vector<int>& nums) {
       return sum(nums);
        
    }
   int sum (vector<int>& nums)
    {
        if(nums.size()==1)
        {
            return nums[0];
        }
        vector<int>ans;
        for(int i=1;i<nums.size();i++)
        {
            int x=(nums[i]+nums[i-1])%10;
            ans.push_back(x);
        }
        return sum(ans);
        
    }
};