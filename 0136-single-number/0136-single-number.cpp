class Solution {
public:
    int result=0;
    int singleNumber(vector<int>& nums) {
        
        for(int i=0;i<size(nums);i++)
        {
            result^=nums[i];
        }
       return result;
    }
};