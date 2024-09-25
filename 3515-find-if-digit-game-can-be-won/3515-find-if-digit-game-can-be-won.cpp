class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int sums=0;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]<10)
            {
                sum+=nums[i];
            }
            else
            {
                sums+=nums[i];

            }
        }
        if(sum==sums)
        return false;
        return true;
        
    }
};