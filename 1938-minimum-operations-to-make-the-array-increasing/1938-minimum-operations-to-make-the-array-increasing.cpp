class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res=0;
        int xyz=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            { xyz=(nums[i-1]-nums[i])+1;
              res+=(nums[i-1]-nums[i])+1;
              nums[i]=nums[i]+xyz;
            }
        }
        return res;
        
    }
};