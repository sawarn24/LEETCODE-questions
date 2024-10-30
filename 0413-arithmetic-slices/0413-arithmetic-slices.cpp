class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(size(nums)<3)
        {
            return 0;
        }
        int cnt=0;
        int ch=0;
        for (int i = 2; i < size(nums); ++i) {
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
                ch++;
                cnt += ch;
            } else {
                ch = 0;
            }
        }
        

        return cnt;
    }
};