class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(size(nums)<2)
        return 0;
        sort(nums.begin(),nums.end());
        int res=0,maxi=INT_MIN;
        for(int i=1;i<size(nums);i++)
        {
           res=nums[i]-nums[i-1];
           maxi=max(maxi,res);
        }
        return maxi;
        
    }
};