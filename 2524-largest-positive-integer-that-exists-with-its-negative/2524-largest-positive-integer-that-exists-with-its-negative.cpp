class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>abc(nums.begin(), nums.end());
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(abc.find(-nums[i]) != abc.end())
            return nums[i];
        }
        return -1;

    }
};