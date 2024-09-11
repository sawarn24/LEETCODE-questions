class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for( i=0;i<size(nums);i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return size(nums);
    }
};